#include <stdio.h>

//gcc -static -o example4 example4.c -no-pie -fno-stack-protector 
//static realiza compilacao estatica. Fica mais facil para obter gadgets

char ez[]= "/bin/sh";


int main(){
    char nome[32];
    fgets(nome,128,stdin);
}