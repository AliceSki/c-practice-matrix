#include <stdio.h>
int main(){
    int a[10][10], b[10][10],sum [10][10];
    int r,c,i,j;
    printf("Enter number of rows of both matrices");
    scanf("%d",&r);
    printf("Enter number of columns of both matrices");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        
            printf("Enter elements of matrix a : ",&i,&j);
            scanf("%d", &a[i][j]);
        };
    };
        for (i=0;i<r;i++)
        {
            for (j=0;j<c;j++)
            {
                printf("%d  ",a[i][j]);
            };
             printf("\n");
        };
 
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        
            printf("Enter elements of matrix b : ",&i,&j);
            scanf("%d", &b[i][j]);
        };
    };
        for (i=0;i<r;i++)
        {
            for (j=0;j<c;j++)
            {
                printf("%d  ",b[i][j]);
            };
             printf("\n");
        };
       for(i=0;i<r;i++)
       {
           for(j=0;j<c;j++)
           {
       
                sum[i][j]= (a[i][j]+b[i][j]);
       }
       }
printf("The sum is \n");
                for(i=0;i<r;i++){
                    for(j=0;j<c;j++)
                    {
                        printf("%d ",sum[i][j]);
                    }
                    printf("\n");
                };
            
        }
    
