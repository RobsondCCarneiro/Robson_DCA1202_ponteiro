#include<stdio.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d    ",i);
    printf("vet[%d] = %.1f   ",i, vet[i]);
    printf("*(f + %d) = %.1f   ",i, *(f+i));
    printf("&vet[%d] = %X  ",i, &vet[i]);
    printf("(f + %d) = %X  ",i, f+i);
  }
}
/* Como vet[i], com i = 0, � , 4 mostra o que foi armazenada na vari�vel que
 justamente s�o esses valores e *(f+i) faz o ponteiros mostrar o valor da vari�vel que
ele est� apontando que � justamente o vetor vet[] que mostra exatamente esses
valores. &vet[i] mostra o endere�o das vari�veis do vetor e o ponteiro (f+i) mostra
todos os endere�os de mem�ria armazenado. Como a vari�vel do tipo int precisa
utilizar 4 bytes da mem�ria, ent�o o endere�o que incremente 4 em 4 a medida que i
incrementa de 1, faz com que a sa�da seja esperada nesse algoritmo.  */
