#include<stdio.h>
int main() {
  int    valor;
  int   *p1;
  float  temp;
  float *p2;
  char   aux;
  char  *nome = "Ponteiros";
  char  *p3;
  int    idade;
  int    vetor[3];
  int   *p4;
  int   *p5;

  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("(a)   %d \n", valor);
  /*Sim, pois o ponteiro que estava apontando para a variavel valor estava sendo apontada pelo ponteiro p1
    que receceu o 20 que repassou para o que estava o ponteiro*/

  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("(b)   %.1f \n", temp);
  /*Sim, pois o ponteiro que estava apontando para a variavel valor estava sendo apontada pelo ponteiro p2
    que receceu o 29.0 que repassou para o que estava o ponteiro, alem de que na saida estava determinado
    como float de 1 casa decimal*/


  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("(c)   %c \n", aux);
  /*Sim, pois o 'aux' que estava recendo do ponteiro que estava apontando para a primeira posicao do
    vetor 'nome' que estava guardado a letra 'P', entao o aux recebe o 'P' pois isso estava enderecado no ponteiro 'p3'*/

  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("(d)   %c \n", aux);
  /*Sim, pois o 'aux' que estava recendo do ponteiro que estava apontando para a primeira posicao do
    vetor 'nome' que estava guardado a letra 'e', entao o aux recebe o 'e' pois isso estava enderecado no ponteiro 'p3'*/

  /* (e) */
  p3 = nome;
  printf("(e)   %c \n", *p3);
  /*Sim, pois o ponteiro tinha recebido apenas a primeira posicao do vetor que havia o valor 'P'.*/

  /* (f) */
  p3 = p3 + 4;
  printf("(f)   %c \n", *p3);
  /*Sim pois o ponteiro estava apontadado para nome[0], entao foi deslocado quatro posicoes, apontando para a letra 'e'
  armazenada em nome[4]. */


  /* (g) */
  p3--;
  printf("(g)   %c \n", *p3);
  /*Sim, pois deslocou menos uma posicao, apontando para a posicao do vetor nome[3] que tem a letra 't' armazenada.*/

  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("(h)   %d \n", idade);
  /*Sim, pois o ponteiro ja apontava apenas a primeira posicao do vetor, entao a variavel 'idade' recebeu apenas o valor que p4
  estava apontando, ou seja, o numero 31'*/

  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("(i)   %d \n", idade);
  /*Como p5 recebeu uma posicao deslocada de p4 que estava apontando para o vetor[], entao o valor armazenado em vetor[[1] eh 45*/

  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("(j)   %d \n", idade);
  /*'p4' dessa vez recebeu o valor de 'p5' deslocado, que havia recebido os enderecos de 'p4' que apontava para todas as
  posicoes do 'vetor[]' entao ta certo imprimir o 27'*/

  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("(l)   %d \n", idade);
  /*Sim , foi esperado ja que voltamos a posicao vetor[0] que retorna o valor cuja o ponteiro apontava que eh 31*/

  /* (m) */
  p5 = &vetor[2] - 1;
  printf("(m)   %d \n", *p5);
  /*Sim, pois imprime o valor que estava armazenado na posicao de 'vetor[1]', que eh 45*/

  /* (n) */
  p5++;
  printf("(n)   %d \n", *p5);
  return(0);
  /*Como incrementou uma posicao entao o vetor retornou o valor que estava armazendo em 'vetor[2]' que eh 27*/
}
