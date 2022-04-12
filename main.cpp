#include "DigitalOut.h"
#include "InterruptIn.h"
#include "mbed.h"
#include <cstdio>

DigitalOut oled1(LED1);
InterruptIn ibutton(BUTTON1);


int i =0;


void pressed() 
{
    if (i<2)
        i++;
    else {
        i = 0;
        oled1 = !oled1;
    }

}




// main() runs in its own thread in the OS
int main()
{
    ibutton.rise(&pressed);
    while (true) {
        if (i==3) 

    }
}

