#include <stdio.h>
#include <string.h>

int main()
{
    char str[255];
    int num,i,j;
    scanf("%d",&num);

    for( i=0 ; i<=num ; i++)
    {

       fgets(str, sizeof(str), stdin);
        for ( j = 0; str[j]!='\0'; j++)
        {
            if( str[0] >= 'a' && str[0] <= 'z') //pascal case
              str[0]=str[0]-32;


            if(str[j]!=0 && str[j]!=' ' )
            {
                if( str[j] >= 'A' && str[j] <= 'Z' )
                    str[j]=str[j]+32;

            }


            if( str[j]==' ' )
            {
                if( str[j+1] >= 'a' && str[j+1] <= 'z' )
                {
                     str[j+1]=str[j+1]-32;

                }
                j++;
            }


        }

        puts(str);

         j=0;
    }


    return 0;
}
