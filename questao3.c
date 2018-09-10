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
/*R.: O ‘%x’ serve para converter o número que corresponde ao endereço de memória, que o ponteiro ‘p’ armazena (4094).
‘*p’ dá o valor cujo ela está apontado (i=5), como está acompanhado da operação ‘*p+2’, então ficaria 5 + 2 = 7,
imprimindo na tela no tipo double de valor 7.
‘**&p’ retorna o próprio valor 5.
‘3**p’ é a mesma coisa de 3*5, pois o ponteiro está retornando o valor da variável i, cujo o valor é 5, então o
retorno na tela será 15 no tipo ‘double’.
‘**&p+4’ retorna 9.
*/
