#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int Conjuntos()
{

  int vetorA[10];
  int vetorB[10];
  int tamVetor = 0;
  int tamVetorU = 0;
  int *vetorR;
  int *vetorU;
  int *vetorIn = malloc(sizeof(int)*tamVetor);
  int *vetorDif;
  int k = 0;
  int i;
  srand(time(NULL));// inicia a funcao rand semente;

  for (int i = 0; i < 10; i++)
      vetorA[i] =  rand() % 100;

  for (int i = 0; i < 10; i++)
      vetorB[i] =  30 + ( rand() % 70 );

  printf("Elementos de A:{ ");

  for (int i = 0; i < 10; i++)
      printf("%d, ",vetorA[i]);

  printf("}\n");

  // imprimi vetor b

  printf("Elementos de B:{ ");
  for (int i = 0; i < 10; i++)
      printf("%d, ",vetorB[i]);

  printf("}\n");

  //verifica quais numeros sao repetidos

  int j = 0;
  for(int i = 0; i < 10; i++)
      for (int j = 0; j < 10; j++)
        if (vetorA[i] == vetorB[j])
        {
          tamVetor++;
          vetorIn[k] = vetorA[i];
          vetorIn = realloc(vetorIn,sizeof(int)*tamVetor);
          k++;
        }

  printf("Os elementos da Intersecao entre A e B sao: { ");
  for(int i = 0; i < tamVetor; i++)
    printf("%d, ", vetorIn[i]);

  printf("}\n");

  int aux = 20 - tamVetor; //identifica o tamanho de vetorU
  k=0; //variavel auxiliar
  vetorU = malloc(sizeof(int)*aux); //dinamicamente vetorU
  for(i=0; i<10; i++) //Coloca -1 nos repetidos de B
    for(j=0; j<tamVetor; j++){
      if(vetorB[i] == vetorIn[j])
        vetorB[i] = -1;
    }

  for(i=0; i<aux; i++){ //Preenche vetorU
    if(i<10)
      vetorU[i] = vetorA[i];
    else{
      if(vetorB[k] != -1)
        vetorU[i] = vetorB[k];
      k++;
    }
  }

  printf ("Os elementos da uniao entre A e B sao: { ");
  for (int i = 0; i < aux; i++)
    printf("%d, ", vetorU[i]);
  printf("}\n");

}

int main()
{

    Conjuntos();

    return 0;
}