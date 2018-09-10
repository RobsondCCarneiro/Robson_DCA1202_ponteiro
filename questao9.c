int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
//} //Esse programa irá imprimir os valores do vetor vet[], que é 4, 9 e 13.

//int main(){
//  int vet[] = {4,9,13};
//  int i;
  for(i=0;i<3;i++){
    printf("%X ",vet+i);
  }
} //Este programa irá imprimir os endereços em hexadecimal, porque “%X” serve para endereços.
