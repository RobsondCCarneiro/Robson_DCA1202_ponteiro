/*p = i; //ILEGAL, pois o i deveria vir acompanhado com �&�, para o ponteiro p acolher o endere�o de i
q = &j; //legal
p = &*&i; //ILEGAL
i = (*&)j; //ILEGAL
i = *&j; //legal
i = *&*&j; //legal
q = *p; //legal, por�m a vari�vel �q� guardou o valor de p, por�m n�o o endere�o.
i = (*p)++ + *q;  //ILEGAL*/
