#include <stdio.h>

//gcc -o example8 example8.c -no-pie -fno-stack-protector 
//echo 1 | sudo tee /proc/sys/kernel/randomize_va_space

int main(){
    char nome[32];
    puts("hello world");
    fgets(nome,128,stdin);
}