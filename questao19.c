#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Onde nla eh o numero de linha de a, o n eh o numero de de coluna de a e consequentemente o numero de linha de b
//e ncb eh o numero de coluna da matriz b
//Funcao de multiplicar matrizes (Produto matricial)
void matriz(int **A, int **B, int **C, int nla, int n, int ncb){
    int i=0, j=0, k, aux=0;
    for (i=0; i<nla; i++){
        for (j=0; j<ncb; j++){
            C[i][j] = 0;
            for(k=0; k<n; k++){
                aux+=A[i][k]*B[k][j];
            }
            C[i][j] = aux;
            aux=0;
        }
    }
}
int main(){
    int nla, n, ncb, i, j;
    int **A, **B, **C;

    //Gerando o tamanho das matrizes aleatoriamente entre 1 e 5
    srand(time(0));
    nla = 1+rand()%5; //numero de linhas da matriz A
    n = 1+rand()%5; //numero de colunas da matriz A e numero de linhas da coluna B
    ncb = 1+rand()%5; //numero de colunas da matriz B
    printf("*****Tamanho da matriz gerado aleatoriamente*****");
    printf("\nnumero de linhas da matriz A: %i", nla);
    printf("\nnumero de colunas da matriz A e numero de linhas da coluna B: %i", n);
    printf("\nnumero de colunas da matriz B: %i\n\n", ncb);

    //Alocacao do matriz principal (para indicar o numero de linhas ao alocador)
    A = (int **) malloc(nla*sizeof(sizeof(int *)));
    B = (int **) malloc(n*sizeof(sizeof(int*)));
    C = (int **) malloc(nla*sizeof(sizeof(int*)));

    //Alocacao de cada vetor linha (para indicar os numeros de coluna na alocacao)
    //Alocacao das colunas da matriz A e C por ter o mesmo numero de linhas
    for(i=0; i<nla; i++){
        A[i] = (int *) malloc(n*sizeof(int));
        C[i] = (int *) malloc(ncb*sizeof(int));
    }
    //Alocacao das colunas da matriz B
    for(i=0; i<n; i++){
        B[i] = (int *) malloc(ncb*sizeof(int));
    }


    //Preenchendo a matriz A de forma aleatoria
    srand(time(0));
    for(i=0; i<nla; i++){
        for(j=0; j<n; j++){
            A[i][j]=-5+rand()%10;
        }
    }
    //Preenchendo a matriz B de forma preguicosa para teste
    for(i=0; i<n; i++){
        for(j=0; j<ncb; j++){
            B[i][j]=-5+rand()%5;
        }
    }

    printf("***Matrizes geradas aleatoriamente***");
    //Imprimindo as matrizes criadas no sistema
    //Matriz A
    printf("\nA matriz A eh: \n");
    for(i=0; i<nla; i++){
        for(j=0; j<n; j++){
            printf("%i | ", A[i][j]);
        }
        printf("\n");
    }
    //Matriz B
    printf("\n\nA matriz B eh: \n");
    for(i=0; i<n; i++){
        for(j=0; j<ncb; j++){
            printf("%i | ", B[i][j]);
        }
        printf("\n");
    }
    //Chamado da funcao para executar o produto matricial
    matriz(A, B, C, nla, n, ncb);

    //Imprimindo a matriz C
    printf("\n\n\n******A matriz C (resultante do produto matricial) eh:********\n");
    for(i=0; i<nla; i++){
        for(j=0; j<ncb; j++){
            printf("%i | ", C[i][j]);
        }
        printf("\n");
    }
    free(A);
    free(B);
    free(C);
    return 0;
}
