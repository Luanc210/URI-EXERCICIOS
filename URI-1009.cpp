#include <stdio.h>
int main() {
	/*
	informa��o:
	-leia o nome de um vendedor, o seu sal�rio
	fixo e o total de vendas
	efetuadas por ele no m�s (em dinheiro).

	-vendedor ganha 15% = 0.15 de comiss�o


	problema:
	informar o total a receber no final do m�s
	*/

	char nome;

	double salario,vendas,x;

	scanf("%s %lf %lf", &nome, &salario, &vendas);

	x = salario + (15*vendas)/100;

	printf("TOTAL = R$ %.2f\n",x);

	return 0;
}
