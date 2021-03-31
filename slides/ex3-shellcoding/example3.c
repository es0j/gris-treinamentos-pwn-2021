#include <stdio.h>

//gcc -o example3 example3.c -no-pie -fno-stack-protector -z execstack
//echo 0 | sudo tee /proc/sys/kernel/randomize_va_space


int main(){
    char nome[32];
    fgets(nome,64,stdin);
}