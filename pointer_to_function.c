//pointer to a function
#include<stdio.h>
#include<conio.h>

int max(int a,int b){
    return (a>b)?a:b;
}

int main(){
    int a,b;
    int (*pfunction)(int , int); // pointer to a function which can take 2 values as argument

    pfunction = max; // adress of max() function to the pointer

    printf("[*]Enter value of a and b: ");
    scanf("%d%d",&a,&b);

    printf("[*]The max value is %d",pfunction(a,b));

    getch();
    return 0;

 }
