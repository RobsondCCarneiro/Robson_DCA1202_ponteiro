#include <stdio.h>
#include <limits.h>
#include <string.h>
int main(void){
    int i=3,j=5, valor;
    int *p, *q;
    p = &i;
    q = &j;

    //Determine o valor das seguintes expressões:
    valor = (p == &i);
    printf("\nvalor de i: %d\n", i);
    printf("valor de valor: %d\n", valor);
    /* O valor sera verdade ou 1, ja que eh uma condicao de igualdade, como a variavel ‘p’ nao esta acompanhada de ‘*’,
    entao ela esta dando o valor do endereco de memoria, como a variavel ‘i’ esta acompanhado de ‘&’ entao esta dado o
    endereco de memoria da variavel. */


    valor = *p - *q;
    printf("\nvalor de j: %d\n", j);
    printf("valor de valor: %d\n", valor);
    /* O valor eh: -2. Como as variaveis estao acompanhadas de ‘*’ entao elas irao retornar o valor das variaveis das
    quais cada uma estao apontando, como ‘p’ esta apontando para ‘i’, cujo o valor é 3 e ‘q’ esta apontando para ‘j’,
    cujo o valor eh 5, entao a operacao eh: 3 - 5 =  -2. */


    valor = **&p;
    printf("\nvalor de *p: %d\n", *p);
    printf("valor de valor: %d\n", valor);
    /* O valor retornado eh 3, pois ele esta acessando o endereço de p que esta apontado para i que tem o valor 3 guardado
    na memoria. */


    valor = 3 - *p/(*q) + 7;
    printf("\nvalor de *q: %d\n", *q);
    printf("valor de valor: %d\n", valor);
    /* O valor retornado eh 10, pois o valor que os ponteiros ‘*p’ e ‘*q’ estao apontando para as variaveis ‘i’ e ‘j’,
    respectivamente, cujo os valores são 3 e 5, como as variaveis sao inteiros e ha uma divisao de 3 com 5 (3/5=0.6), entao
    a operacao da maquina armazena zero, ao inves de 0.6. Restando apenas 3 + 7 = 10.*/


    return 0;
}
