
#include <stdio.h>
int main() {
	/*
	-2 n�meros inteiros e 1 n�mero com duas casas decimais
	
	Mostrar o n�mero e o sal�rio do funcion�rio!!!
	*/

	int func, h;
	float sal, x;

	scanf("%d %d %f", &func,&h,&sal);

	x= h*sal;

	   printf("NUMBER = %d\n",func);
	printf("SALARY = U$ %.2f\n",x);
	return 0;
}
