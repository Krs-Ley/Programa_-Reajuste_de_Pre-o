#include <locale.h>

int main() {
	setlocale(LC_ALL, "");

	typedef struct produto{ 
		float valorA;
		float valorB;
	} produto;
	
	struct produto pdt;
	int op;
	
	float reajuste(float valorA)
    {
		return valorA*0.15;
	}

	do
    {
	printf("\a--------Reajuste de Preço----------\a");
	
	printf ("\n\nInsira o Valor antigo:  ");
	scanf ("%f", &pdt.valorA);
	
	printf ("\nPreço com correção no valor: ");

	printf("%f", reajuste(pdt.valorA));
	
	printf ("\n\nEncerrar Operação? 0-sim 1-refazer \n\n");
	scanf ("%d", &op);
				
} while(op==1);
	if (op==0) {
		printf("Operação Encerrada");
	}else;

    return (0);
}
