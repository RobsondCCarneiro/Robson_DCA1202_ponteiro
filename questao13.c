/*
R.: O ponteiro para uma fun��o serve para referenciar o endere�o de uma fun��o
 Ponteiros para fun��es podem ser passados como argumentos para outras fun��es,
 e a fun��o apontada pode ser invocada a partir de seu ponteiro. Um exemplo
 pr�tico desta capacidade � seu uso em uma rotina de ordena��o de elementos de
 um arranjo.*/
#include<stdio.h>
#include<stdlib.h>
void testarVariavel(int x){
    //Aqui incrementa o valor de x em 1
    x++;
    printf("\n\n#####O valor de x antes que sair da funcao TesteVariavel: %i", x);
}
void testarPonteiro(int *Px){
    //Aqui incrementa o valor de x em 1
    (*Px)++;
    printf("\n\n#####O valor de x antes de sair da funcao TestePonteiro: %i", *Px);
}
int main(){
    //Para reiniciar a funcao rand
    srand(time(0));
    //x recebe valores aleatorios entre 1 e 10
    int x = 1+rand()%10;
    //O ponteiro esta recendo o endereco de x
    int *Px = &x;
    printf("Valor de x originalmente: %i", x);

    //Mostra que se nao passar o valor da variavel pelo ponteiro, o valor nao eh salvo depois que sai da funcao declarada
    testarVariavel(x);
    printf("\n\nO valor de x depois que passou pela funcao TesteVariavel: %i", x);

    testarPonteiro(Px);
    printf("\n\nO valor de x depois que passou pela funcao TestePonteiro: %i", x);
    return 0;
}
