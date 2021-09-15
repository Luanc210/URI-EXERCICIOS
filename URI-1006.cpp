#include <stdio.h>

int main() {


	/*
	 "A" - TEM PESO 2
	  "B" - TEM PESO 3
	   "C" - TEM PESO 5
	   	 NOTA - 0 A 10.0 COM CASA DECIMAL
	 */

	float a,b,c,media;

	scanf("%f %f %f",&a,&b,&c);

	media = (a*2+b*3+c*5)/(2+3+5);
	printf("MEDIA = %.2f\n",media);
	return 0;
}
