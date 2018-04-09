#include <stdio.h>

int main()
{
   int array[10][10],m,n;
   m=0;
   n=0;

   printf("Enter numbers of row and column\n");
   scanf("%d%d",&m,&n);

   int i,j;

   for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("Enter elements for array[%d][%d]:\n",i,j);
        scanf("%d",&array[i][j]);
    }
    printf("\n");
   }

   for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d\t",array[i][j]);
    }
    printf("\n");
   }

   return 0;
}
