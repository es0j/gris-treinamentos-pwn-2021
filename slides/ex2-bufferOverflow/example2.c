#include <stdio.h>
#include <unistd.h>

//gcc -o example2 example2.c -no-pie -fno-stack-protector

void shell(){
    execve("/bin/sh",NULL,NULL);    
}


int main(){
    char nome[16];
    fgets(nome,64,stdin);

}