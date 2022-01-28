#include <stdio.h>
// ^ Isto é uma diretiva. Ela serve para poder importar uma biblioteca externa
// (no caso, uma nativa do C conhecida como Standard I/O).
// As importações de bibliotecas devem ser a primeira coisa a ser declarada.
// O # simboliza que isso acontecerá antes de qualquer coisa ser executada pelo programa.

// Isto é um comentário. Você pode colocar duas barras
// no meio de um código e o compilador irá pular essa linha ou trecho
/* Você também pode usar /*, caso você queira
fazer um comentário com mais de uma linha.
Todavia, você precisa fechar com */

/**
 * Toda a aplicação em C deve ter uma função main() (principal).
 * Você deve ter reparado que este comentário está com uma cor diferente.
 * Convencionou-se que os comentários, antes de funções, devem ser feitos
 * com /** (Isso se chama Comentário de Cabeçalho). Isso indica a IDE que este
 * comentário descreve para quê serve
 * esta função. Isso acaba sendo incorporado a documentação do projeto
 * ou a dica de código mostrado por uma IDE. Você ainda pode usar
 * alguns parâmetros para indicar.
 * Colocar comentários, como este, não é obrigatório, mas faz parte de boas práticas,
 * pois você precisa lembrar o que esta função faz (e certamente, no futuro, você esquecerá),
 * ou indicar a um colega, como usar a função.
 * Por exemplo, esta função (também chamada de método), retorna um inteiro.
 * Logo, eu posso digitar:
 * RETURN :
 *            Type:   int   Resulta zero
 * Isso indicará a IDE e a documentação que a função retornará um inteiro.
 * Essa indicação de comentário de cabeçalho pode variar entre IDEs e linguagens.
 * */
int main() //A primeira palavra indica o que a função retorna, ou seja, a função,
// deve retornar um inteiro. Em seguida, coloca-se o nome da função, seguido de ().
{//Inicia a função (também conhecido como begin)

    int aInt = calcular(88,32); // uma variável do tipo inteiro
                                //(o nome aInt fui eu quem dei), que vai ser preenchido com o
                                //retorno da função calcular (veja abaixo)
    
    char str[15]; //uma variável do tipo caractere que eu chamei de str.
                  //O [15] significa que ela poderá ter até 15 caracteres.
                  //Vocês ainda vão entender o conceito de vetores.
    
    sprintf (str, "%d", aInt); //sprintf é uma função nativa do C que serve
                               //para transformar inteiros em caracteres,
                               //pois só posso imprimir caracteres no console (ou no dispositivo de saída).
    
    str[15] = strcat(str,"\n");//strcat é uma função nativa do C que serve para concatenar.
                               //Ou seja, juntar uma String (conjunto de caracteres) com outra.
                               //A String (que significa amarra em tradução livre, ou seja, uma amarra de caracteres)
                               //"\n" é um modo de dizer ao compilador que ele deve colocar uma quebra de linha
                               // Usar \n é algo padronizado como quebra de linha em qualquer tipo de texto plano.
                               // Lembrando que quebra de linha seria o equivalente a dar um CTRL+ENTER, em um texto comum.
    printf(str); //printf é uma função nativa do C que serve para mostrar (imprimir)
                 //algo no dispositivo de saída, no caso, no console abaixo.

    return 0; //O retorno da função.
              //Como a função diz que retorna um inteiro (lá no começo da função),
              //ela DEVE retornar um inteiro.
              //Caso você não retorne o inteiro, ela NÃO irá compilar, pois você prometeu que ela retornaria isso.
}//Finaliza a função (também conhecido como end)

/**
 * Você vai notar que esta função que eu criei, tem uma peculiaridade.
 * Repare que dentro dos parênteses há duas variáveis inteiras.
 * Essas variáveis se chamam parâmetros. Elas servem para que a função possa ser reaproveitada
 * a partir de outros termos que serão chamados acima.
 * Repare, em main(), que eu chamo calcular(88,32), mas você pode mudar para qualquer outro número inteiro.
 * O que o método (ou função), fará é calcular os dois valores que você colocar nos parâmetros.
 * No caso de C, se você não colocar os dois valores, ao chamar a função, o compilador falhará.
 * 
 * * INPUTS :
 *       PARAMETERS:
 *           int     valor                Primeiro somando
 *           int     valor2               Segundo somando
 */
int calcular(int valor, int valor2)
{
    int total = valor + valor2; //uma variável inteiro, chamada total, que retorna a soma dos parâmetros valor e valor 2;
    return total; //O retorno do método será um inteiro (como foi descrito no começo do mesmo).
    //Em main(), você pode ver que o retorno deste método retorna uma variável. 
}