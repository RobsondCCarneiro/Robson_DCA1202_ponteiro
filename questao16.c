#include<stdio.h>
#include<stdlib.h>
//Esta funcao serve para ordenar os numeros em ordem crescente e recebe o vetor x em referencia (ponteiro)
void ordena(float *x, int tam){
    float aux;
    int indmin, i;
    //Ordenacao por Insertion Sort
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
int main (){
    int n=5, i;
    float *x;
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
     return 0;
}
