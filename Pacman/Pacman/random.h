
// Remembering to define _CRT_RAND_S prior  
// to inclusion statement.  
#define _CRT_RAND_S  
#include <stdlib.h>  

int getrandom_int(int min, int max) {
	int zufallszahl, bereichsbreite;
	unsigned int number;
	errno_t err;
	
	err = rand_s(&number);
	if (err != 0)
	{
		printf("The rand_s function failed!\n");
	}
	bereichsbreite = max - min + 1;
	zufallszahl = (int)((double)number / ((double)UINT_MAX + 1) * bereichsbreite) + min;
	return zufallszahl;
}


double getrandom_double(double min, double max) {
	double zufallszahl, bereichsbreite;
	unsigned int number;
	errno_t err;

	err = rand_s(&number);
	if (err != 0)
	{
		printf("The rand_s function failed!\n");
	}
	bereichsbreite = max - min;
	zufallszahl = ((double)number / ((double)UINT_MAX + 1) * bereichsbreite) + min;
	return zufallszahl;
}


