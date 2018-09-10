/*p = i; //ILEGAL, pois o i deveria vir acompanhado com ‘&’, para o ponteiro p acolher o endereço de i
q = &j; //legal
p = &*&i; //ILEGAL
i = (*&)j; //ILEGAL
i = *&j; //legal
i = *&*&j; //legal
q = *p; //legal, porém a variável ‘q’ guardou o valor de p, porém não o endereço.
i = (*p)++ + *q;  //ILEGAL*/
