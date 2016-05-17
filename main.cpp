#include "hFramework.h"
#include <stdio.h>

using namespace hFramework;

void hMain(void)
{
	sys.setLogDev(&Serial);
	for (;;)
	{
		LED1.toggle();
		printf("test %ld\r\n", sys.getRefTime());
		sys.delay_ms(500);
	}
}
