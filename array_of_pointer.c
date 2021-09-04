#include<stdio.h>
#include<conio.h>

int main(){
    int arr[20],n;
    int *p[20]; // array that can hold 20 int pointers

    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",arr+i);
    
    }

    for (int i = 0; i < n; i++)
    {
        p[i] = arr+i; // p[i] = &arr[i]


    }

    for(int i=0;i<n;i++)
        printf("%d\t",*(p[i]));
    
    getch();
    return 0;
    

}