#include<stdio.h>

void win(){
    printf("You win!\n");
}
int main(){
    struct{
        char a[64];
        volatile int (*b)();
    }locals;
    
    //printf("%p", win);
    locals.b = NULL;
    gets(locals.a);

    if(locals.b != NULL){
        locals.b();
    }

    return 0;
}

