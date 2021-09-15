#include <stdio.h>
int main() {
	/*
	informação:
	-leia o nome de um vendedor, o seu salário
	fixo e o total de vendas
	efetuadas por ele no mês (em dinheiro).

	-vendedor ganha 15% = 0.15 de comissão


	problema:
	informar o total a receber no final do mês
	*/

	char nome;

	double salario,vendas,x;

	scanf("%s %lf %lf", &nome, &salario, &vendas);

	x = salario + (15*vendas)/100;

	printf("TOTAL = R$ %.2f\n",x);

	return 0;
}
