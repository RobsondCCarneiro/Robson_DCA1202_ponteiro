#include <stdio.h>

int main(){
    char xc = {'1', '2', '3', '4'};
    int xi =  {1, 2, 3, 4};
    float xf = {1, 2, 3, 4};
    double xd = {1, 2, 3, 4};

    char *c; //x for declarado char?
    int *i; //x for declarado como int?
    float *f; //x for declarado como float?
    double *d; //x for declarado com double?
    c = &xc;
    i = &xi;
    f = &xf;
    d = &xd;

    printf("### Verificar o deslocamento da posicao de memoria em CHAR ###");
    printf("\nO endereco de xc eh: %X", &xc);
    printf("\nO endereco que *c (*x em char) esta apontando eh: %X, c+1 eh: %X, c+2 eh: %X, c+3 eh: %X\n\n\n", c, c+1, c+2, c+3);
    //Sim o deslocamento foi de 1 byte como o esperado para char.

    printf("### Verificar o deslocamento da posicao de memoria em INT ###");
    printf("\nO endereco de xi eh: %X", &xi);
    printf("\nO endereco que *i (*x em int) esta apontando eh: %X, i+1 eh: %X, i+2 eh: %X, i+3 eh: %X\n\n\n", i, i+1, i+2, i+3);
    //Sim, ocorreu como esperado, pois o deslocamento foi de 4 bytes a cada posicao do ponteiro.

    printf("### Verificar o deslocamento da posicao de memoria em FLOAT ###");
    printf("\nO endereco de xf eh: %X", &xf);
    printf("\nO endereco que *f (*x em float) esta apontando eh: %X, f+1 eh: %X, f+2 eh: %X, f+3 eh: %X\n\n\n", f, f+1, f+2, f+3);
    //Como o float tambem ocupa 4 bytes, entao ele ocorreu do jeito que eu esperava


    printf("### Verificar o deslocamento da posicao de memoria em DOUBLE ###");
    printf("\nO endereco de xc eh: %X", &xd);
    printf("\nO endereco que *d (*x em int) esta apontando eh: %X, d+1 eh: %X, d+2 eh: %X, d+3 eh: %X\n\n\n", d, d+1, d+2, d+3);
    //O deslocamento real foi de 8 bytes, como o esperado.
}
