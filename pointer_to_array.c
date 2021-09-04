#include<stdio.h>
#include<conio.h>

int main(){
    int arr[20],n;
    int (*pa)[20];
    pa = &arr;
    printf("[*]Enter range: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",arr+i);
    }
    
    for(int i=0;i<n;i++){
        printf("%d\n",pa);
        pa ++;
    }
    getch();
    return 0;
    
}