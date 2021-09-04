//array of function pointers

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

    printf("[*]Enter value of a and b: ");
    scanf("%d%d",&a,&b);

    int (*pfunction[4])(int,int) = {add,sub,mult,div};
    /* 
     pfunction[0] = address of add()
     pfunction[1] = address of sub()
     pfunction[2] = address of mult()
     pfunction[3] = address of div() 
    */
    printf("[*]Press 1 to add\n[*]Press 2 to sub\n[*]Press 3 to mult\n[*]Press 4 to divide\n[*]Enter your option: ");
    scanf("%d",&opt);
    opt -= 1; //as index starts from 0;
    printf("[*]Result is: %d",pfunction[opt](a,b));
    getch();
    return 0;
}