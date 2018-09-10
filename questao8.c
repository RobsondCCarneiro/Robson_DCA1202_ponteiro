/*
p = mat + 1; /* Este é válido, pois mostra o valor que foi guardado no segundo
 espaço (mat[1]), também deslocou 4 bytes na última casa do endereço de memória.
 Veja a captura da tela do algoritmo e da tela de resposta do programa: */

//p = mat++; //Inválida porque não foi aceita pelo compilador

/*p = ++mat; /*Também não foi aceito, talvez porque esses incrementos sejam aceitos apenas por valor e não
por referência (ponteiros). */

/*x = (*mat)++; /*Esperava x = 3, já que o valor que o ponteiro *mat retornou tinha
valor 2 e como foi incrementado +1, porque ++ seria equivalente a (*mat)++ ⇒ (*mat)
 = (*mat)+1. Veja o algoritmo abaixo e a saída que deu. */
