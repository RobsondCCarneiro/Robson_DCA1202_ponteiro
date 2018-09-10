#include<stdio.h>
#include<stdlib.h>
int main (){
    int n=5, i;
    float *x;
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

    //Ordenacao por Selection Sort
    int tam = n, aux, j, indmin;
    for (i=0; i<tam-1; i++)
    {
        indmin=i;
        for (j=i+1; j < tam; j++)
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
     printf("\n\n\nO vetor x ordenado eh: ");
     for(i=0; i<n; i++)
        printf("%f, ", x[i]);
     free(x);
     return 0;
}
