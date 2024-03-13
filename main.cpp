#include "mbed.h"
#include "arm_book_lib.h"

int main()                                // mybranch   
{
    DigitalIn gasDetector(D2);

    DigitalOut alarmLed(LED1);

    gasDetector.mode(PullDown);

    alarmLed = OFF;

    printf("%s\n", "Hello World"); // Esta línea la agregó Jorge

    while (true) {

        printf("%s\n", "Hello World");

        if ( gasDetector == ON ) {
            alarmLed = ON;
        }
        
        if ( gasDetector == OFF ) {
            alarmLed = OFF;
        }
    }
}
