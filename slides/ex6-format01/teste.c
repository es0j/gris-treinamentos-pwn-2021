#include <stdio.h>

int main(){
    int a,b,c,d;
    a=1;
    b=2;
    c=3;
    d=0x11223344;

    puts("Ordem alternativa %2$d: printf(\"%2$d\",a,b); - ");
    printf("%2$d\n",a,b);

    puts("Padding %100d: printf(\"%100d\",a); - ");
    printf("%100d\n",a);

    puts("Modificador de formato %hX: printf(\"%hX\",d); - ");
    printf("%hX\n",d);
    puts("Modificador de formato %hhX: printf(\"%hhX\",d); - ");
    printf("%hhX\n",d);


    puts("Padding por referencia: printf(\"%2$*1$d\", c, a); - ");
    printf("%2$*1$d\n", c, a); // printf("%2$*1$d", width, num);


    puts("Escrita utilizando %n printf(\"%420d%2n\", c, &a); - ");
    printf("%420d%2n\n", c, &a); // printf("%2$*1$d", width, num);

    printf("Escrita realizada a=%d\n",a);
}