#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Testando o tempo com a funcao criada por mim
//Testando o tempo na funcao funcao ordena
void ordena(float *x, int tam){
    float aux;
    int indmin, i;
    //Ordenacao por Selection Sort
    for (i=0; i<tam-1; i++)
    {
        indmin=i;
        for (int j=i+1; j < tam; j++)
        {
            if(x[indmin]>x[j])
                indmin=j;
        }
        if (indmin!=i)
        {
            aux=x[i];
            x[i]=x[indmin];
            x[indmin]=aux;
        }
    }
}

int main(){
    int n=5, i;
    float *x;
    //Comecando a contagem do relogio.
    clock_t start_time, end_time;
    start_time = clock;
    //Alocacao de memoria para o vetor x
     x = (int*) malloc(n*sizeof(float));
     if(x==0){
        printf("Nao foi possivel alocar!!!");
        exit(0);
     }

     //numeros aleatorios em float
     srand(time(0));
     for (i=0; i<n; i++){
        x[i] = 5+rand()%1500;
        x[i] = x[i]/10;
     }

     //Imprimindo o que ficou salvo na memoria
     printf("O valor original do vetor x eh: ");
     for (i=0; i<n; i++)
        printf(" %f,", x[i]);

    //Invocando a funcao 'ordena' que foi declarada acima
     ordena(x, n);
     printf("\n\n\nO vetor x ordenado eh: ");
     for(i=0; i<n; i++)
        printf("%f, ", x[i]);
     free(x);
     end_time = clock();
     printf( "\n\nTempo de execucao foi de %lu clocks\n", (end_time - start_time)/CLOCKS_PER_SEC );
     return 0;
}
