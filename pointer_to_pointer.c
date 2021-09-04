#include<stdio.h>
#include<conio.h>

int main(){
    int a = 10 ,*ptr,**pptr;
    ptr = &a;
    pptr = &ptr;

    printf("%d",**pptr);
    getch();
    return 0;
}