//directly assign a value to a pointer
#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,result,*p=NULL;
    p=&result;
    printf("[*]Enter value of a and b: ");
    scanf("%d%d",&a,&b);
    *p = a+b;
    printf("%d",*p);
    printf("\n%d",result);
    getch();
    return 0;
}