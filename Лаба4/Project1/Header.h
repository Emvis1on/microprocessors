#include <math.h>
extern "C" float fun_el(float z)
{
	float f = 0;
	f = tanf(z);
	f = cbrt(f);
	return f;
}
