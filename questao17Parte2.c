//Parte 2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Testanto o tempo com a funcao qsort de ordenacao
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main ()
{
    int n=5, i;
    float *x;
    clock_t start_time, end_time;
    start_time = clock;
    //Alocacao de memoria para o vetor x
     x = (float*) malloc(n*sizeof(float));
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

    //Usando o qsort
     qsort(x, n, sizeof(float), compare);
     printf("\n\n\nO vetor x ordenado eh: ");
     for(i=0; i<n; i++)
        printf("%f, ", x[i]);
     free(x);
     end_time = clock();
     printf( "\n\nO tempo de execucao foi de %lu clicks\n", (end_time - start_time)/CLOCKS_PER_SEC );
     return 0;
}
//Conclusao os tempos em ambos os programas foram quase identicos.
