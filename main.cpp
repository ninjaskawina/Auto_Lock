#include "hFramework.h"
#include <stdio.h>
#include <string>

using namespace hFramework;

    int power = 500;
    int angle1 = -50;
    int angle2 = 90;
    bool block = 1;
    bool locked = false;


void lock_toggle(){
    if(locked){
            //Open
    hMot1.rotAbs(angle1, power, block);
    hMot1.stopRegulation();
    LED1.on();
    } else{
    hMot1.rotAbs(angle2, power, block);
    hMot1.stopRegulation();
    LED1.off();
    }
    locked = !locked;
}

void hMain(void)
{

	hExt1.serial.printf("%c11090A41%c", (char)0x02, (char)0x03);
	sys.delay_ms(100);

}

