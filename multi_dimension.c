#include<stdio.h>
#include<conio.h>

void show_matrix(int row,int column,int (*mat)[20]){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++)
            printf("%d\t",*(*(mat + i) + j));
        printf("\n");
    }
}
void add_matrix(int row,int column,int mat1[][20],int mat2[][20]){
    int mat3[20][20];
    for (int i = 0; i < row; i++)
    {
        for(int j=0;j<column;j++)
            mat3[i][j] = mat1[i][j] + mat2[i][j];
    }

    printf("\n\n[*]The sum is: \n\n");
    show_matrix(row,column,mat3);
    
}

int main(){
    int row,column,mat1[20][20],mat2[20][20];

    printf("[*]Enter row and column: ");
    scanf("%d%d",&row,&column);

    for(int i=0;i<row;i++){
        for (int j = 0; j < column; j++)
        {
            printf("[*]Enter element of matrix1[%d][%d]: ",i,j);
            scanf("%d",(*(mat1 + i) + j));
        }
        

    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("[*]Enter element of matrix2[%d][%d]: ",i,j);
            scanf("%d",(*(mat2 + i ) + j));
        }
        
    }

    
    
    printf("\n\n[*]First matrix: \n\n");
    show_matrix(row,column,mat1);

    printf("\n\n[*]Second matrix: \n\n");
    show_matrix(row,column,mat2);

    add_matrix(row,column,mat1,mat2);

    getch();
    return 0;



}