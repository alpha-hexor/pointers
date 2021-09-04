//pointer to a function-2nd example
#include<stdio.h>
#include<conio.h>

int add(int a,int b){
    return (a+b);
}
int sub(int a,int b){
    return (a-b);
}
int mult(int a,int b){
    return (a*b);
}
int div(int a,int b){
    return (a/b);
}

int main(){
    int a,b,opt;
    int (*pfunction)(int , int);
    printf("[*]Enter value of a and b: ");
    scanf("%d%d",&a,&b);

    printf("[*]Press 1 to add\n[*]Press 2 to sub\n[*]Press 3 to multiply\n[*]Press 4 to divide\n[*]Enter your option: ");
    scanf("%d",&opt);

    //passing adress of functions
    switch (opt)
    {
    case 1: pfunction = add;
        break;
    case 2: pfunction = sub;
        break;
    case 3:pfunction = mult;
        break;
    case 4:pfunction = div;
        break;
    default:
        break;
    }

    printf("[*]The result is: %d",pfunction(a,b));
    getch();
    return 0;
}