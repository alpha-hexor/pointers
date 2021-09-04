#include<stdio.h>
#include<conio.h>
#include<string.h>

char *rev(char str[]){
    int len = strlen(str);
    char temp;
    for(int i=0,j=(len-1);i<(len/2);i++,j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str;
}
int main(){
    char str[30];

    printf("[*]Enter a string: ");
    gets(str);

    //reverse the string
    char *s = rev(str);
    printf("%s",s);
    getch();
    return 0;
}