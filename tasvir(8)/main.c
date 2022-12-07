#include <stdio.h>

int PrintImage(int n , int arr[n][n] )
{
    int i=0,j=0;

   for(i=0 ; i<n ; i++)
   {
      for(j=0 ; j<n ; j++)
         {
            printf("%d ",arr[i][j]);
         }
          printf("\n");
   }

  return 0;

}

void Convert2Negative(int n , int arr[n][n])
{
    for( int i=0 ; i<n ; i++)
    {
      for( int j=0 ; j<n ; j++)
         {
            scanf("%d",&arr[i][j]);
         }
    }

   for( int i=0 ; i<n ; i++)
   {
      for( int j=0 ; j<n ; j++)
      {
          arr[i][j]=255-arr[i][j];
      }
      printf("\n");
   }

  return;

}


int main()
 {
    int n,i,j;
    int arr[255][255];
    scanf("%d",&n);

    Convert2Negative(n,arr);
    PrintImage(n,arr);



return 0;
}



