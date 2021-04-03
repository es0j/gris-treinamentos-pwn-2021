#include <stdio.h>
#include <stdlib.h>

//gcc -o example6 example6.c -no-pie
int admin=0;

int main(){
    char nome[32];
    int *adminptr = &admin;
    
    fgets(nome,31,stdin);
    printf(nome);

    if (admin){
        system("/bin/sh");
    }
}