#include <stdio.h>

//gcc -o example7 example7.c -no-pie
//echo 0 | sudo tee /proc/sys/kernel/randomize_va_space

int main(){
    char nome[128];
    puts("ola mundo");
    fgets(nome,127,stdin);

    printf(nome);

    fgets(nome,127,stdin);

    puts(nome);
}