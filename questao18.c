 //Questao 18
#include<stdio.h>
#include<stdlib.h>
//Funcao para somar os vetores
int soma(int *a, int *b, int *r, int n){
    int i;
    for(i=0; i<n; i++)
        r[i] = a[i] + b[i];
}
int main(){
    int *a, *b, *r, n, i;
    //Solicitacao ao usuario do tamanho do vetor
    printf("Por favor insira o tamanho que desejas sobre os vetores: ");
    scanf("%i", &n);

    //Alocacao dinamica de memoria dos vetor a, b e r de acordo com o tamanho determinado pelo usuario
    a = (int*) malloc(n*sizeof(int));
    if(a==0){
        printf("Nao foi possivel alocar!\n");
        exit(0);
    }
    b = (int*) malloc(n*sizeof(int));
    if(b==0){
        printf("Nao foi possivel alocar!\n");
        exit(0);
    }
    r = (int*) malloc(n*sizeof(int));
    if(r==0){
        printf("Nao foi possivel alocar!\n");
        exit(0);
    }

    //Pedindo ao usuario para preencher os arrays
    for (i=0; i<n; i++){
        printf("digite o valor %i/%i do vetor a: ", i+1, n);
        scanf("%i",&a[i]);
    }
    for (i=0; i<n; i++){
        printf("digite o valor %i/%i do vetor b: ", i+1, n);
        scanf("%i",&b[i]);
    }

    //Chamando a funcao soma declarada acima
    soma(a, b, r, n);

    //Mostrando o que foi armazenado no vetor soma
    printf("\n\nAgora ira aparecer os valores armazenados no vetor soma: (");
    for(i=0; i<n; i++)
        printf(" %i, ", r[i]);
    printf(")");
    //Liberando a memoria que foi alocada anteriormente
    free(a);
    free(b);
    free(r);
    return 0;
}
