int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
//} //Esse programa ir� imprimir os valores do vetor vet[], que � 4, 9 e 13.

//int main(){
//  int vet[] = {4,9,13};
//  int i;
  for(i=0;i<3;i++){
    printf("%X ",vet+i);
  }
} //Este programa ir� imprimir os endere�os em hexadecimal, porque �%X� serve para endere�os.
