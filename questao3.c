#include <stdio.h>
#include <limits.h>
#include <string.h>

int main(void){
    int i=5, *p;
    p = &i;
    printf("O endereco de memoria eh: %d\n", p);
    printf("O valor de p eh: %d\n\n", *p);
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
    return 0;
}
/*R.: O �%x� serve para converter o n�mero que corresponde ao endere�o de mem�ria, que o ponteiro �p� armazena (4094).
�*p� d� o valor cujo ela est� apontado (i=5), como est� acompanhado da opera��o �*p+2�, ent�o ficaria 5 + 2 = 7,
imprimindo na tela no tipo double de valor 7.
�**&p� retorna o pr�prio valor 5.
�3**p� � a mesma coisa de 3*5, pois o ponteiro est� retornando o valor da vari�vel i, cujo o valor � 5, ent�o o
retorno na tela ser� 15 no tipo �double�.
�**&p+4� retorna 9.
*/
