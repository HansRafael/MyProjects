#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
	int i, employee, customers;
	
	scanf("%d", &employee);
	scanf("%d", &customers);
	int timeByEmployee[employee];
	int itemsByCustomers[customers];

	//Preencher a Lista com os nomes
	for(i = 0; i < employee; i++)
		scanf("%d", &timeByEmployee[i]);

	for(i = 0; i < customers; i++)
		scanf("%d", &itemsByCustomers[i]);
	
		
	int tempoGasto[employee]; //vetor que servira para marcar o tempo gasta em CADA CAIXA
	int t =0;

	while(t < customers){ //loop até q todos sejam atendidos
		if(t < employee){ //Verifica se tem caixa disponivel
			tempoGasto[t] = itemsByCustomers[t] * timeByEmployee[t];
			t++;
		}
		else{
			int index = tempoGasto[0]; //pegamos o tempo no primeiro caixa
			int z = 0;
			for(i = 0; i < employee; i++)  //e percorremos o nosso vetor tempoGasto para ver se temos algum caixa disponivel
				if(index > tempoGasto[i])  //Caso o tempo seja maior
				{
					index = tempoGasto[i]; //atribuimos o novo valor para continuarmos a comparacao
					z = i;     //Pegamos a localizacao no vetor, que representa o Funcionario disponível
				}
			tempoGasto[z] += itemsByCustomers[t] * timeByEmployee[z];
	
			z = 0;
			t++;
		}
	}

	int index = tempoGasto[0];
	for(i=0; i < employee; i++){
		printf("%d ",tempoGasto[i]);
	}
	for(i = 0; i < employee; i++)
		if(index < tempoGasto[i])
			index = tempoGasto[i];
		printf("\n%d\n", index);
}