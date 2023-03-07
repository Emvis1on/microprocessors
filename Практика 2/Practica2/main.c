#include <8051.h>

void main()
{
	unsigned char i; 
	unsigned char massiv [10] = {0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80};

while(1)
{
P2 = 0x92;
for(i=0;i<100;i++) 
continue; //odin tcukl dobavlaet 28 taktov, zna4ut zadershka ravna 14 / 12000 = 1.17 msec
P2 = 0x99;
for(i=0;i<100;i++)
continue;
P2 = 0x82;
for(i=0;i<100;i++)
continue;
P2 = 0xB0;
for(i=0;i<100;i++)
continue;
P2 = 0xF8;
for(i=0;i<100;i++)
continue;
P2 = 0xA4;
for(i=0;i<100;i++)
continue;
P2 = 0x80;
for(i=0;i<100;i++)
continue;
P2 = 0xF9;
for(i=0;i<100;i++)
continue;
}
}
