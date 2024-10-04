#include<stdio.h>

int main(){
    struct{
        char a[64];
        volatile int b;
    }locals;

    locals.b = 0;
    gets(locals.a);

    if(locals.b != 0){
        //system("/bin/sh");
        printf("You win!\n");
    }
}