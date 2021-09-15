
#include <stdio.h>
int main() {
	/*
	-2 números inteiros e 1 número com duas casas decimais
	
	Mostrar o número e o salário do funcionário!!!
	*/

	int func, h;
	float sal, x;

	scanf("%d %d %f", &func,&h,&sal);

	x= h*sal;

	   printf("NUMBER = %d\n",func);
	printf("SALARY = U$ %.2f\n",x);
	return 0;
}
