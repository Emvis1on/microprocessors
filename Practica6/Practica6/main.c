#include <8051.h>

void tput(unsigned char c1)
{
	SBUF = c1; 
	while(!TI); 
	TI = 0; 
}

void main()
{
	int i;
	unsigned char src1[]={'V','A','Z','H','E','N','I','N'};
	unsigned char src2[]={'K','I','R','I','L','L'};
	unsigned char src3[]={'D','M','I','T','R','I','E','V','I','C','H'};
	PCON = 0x80;
	TMOD = 0x20;
	TR1 = 1;
	TH1 = -3;
	for(i=0; i<10; i++)
	{
		ACC = src1[i]; 
		SCON = 0x50;
		tput (src1[i]);
	}
    tput(10);
	for(i=0; i<8; i++)
	{
		ACC = src2[i]; 
		SCON = 0x50;
		tput (src2[i]);
	}
	tput(10);
    for(i=0; i<14; i++)
	{
		ACC = src3[i]; 
		SCON = 0x50;
		tput (src3[i]);
	}
while(1){} 
}