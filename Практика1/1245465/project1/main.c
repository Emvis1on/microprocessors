#include <8051.h>  

void main() 
{
	int i;
	char xdata *ptr; 
	char test, nabor;
	nabor = 0x33;  
	ptr = (char xdata *) 0x0C00;  
	
	for(i=0; i<1024;i++) 
	{
		*ptr=nabor; 
		test=*ptr;  
		if(test!=nabor)
		{
			break;  
		}
		ptr++;
	}
}
