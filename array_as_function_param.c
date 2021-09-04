//a function which will receive array as parameter
#include<stdio.h>
#include<conio.h>
void show(int n,int arr[]){
    for(int i=0;i<n;i++)
        printf("%d\t",*(arr+i));
}
int sum(int n,int *list){
    int s=0;
    for (int i = 0; i < n; i++)
    {
        s+= *(list+i);
    }
    return s;
    
}
int main(){
    int arr[20],n;

    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",arr+i);
    }

    printf("\n\n[*]The array is: \n\n");
    show(n,arr);
    int s = sum(n,arr);
    printf("\n\n[*]Sum is: %d",s);
    getch();
    return 0;
    
}