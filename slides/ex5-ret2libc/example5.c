#include <stdio.h>

//gcc -o example5 example5.c -no-pie -fno-stack-protector 
//echo 0 | sudo tee /proc/sys/kernel/randomize_va_space

int main(){
    char nome[32];
    fgets(nome,128,stdin);
}