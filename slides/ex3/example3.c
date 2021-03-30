#include <stdio.h>

//gcc -o example3 example3.c -no-pie -fno-stack-protector -z execstack

int main(){
    char nome[32];
    fgets(nome,64,stdin);
}