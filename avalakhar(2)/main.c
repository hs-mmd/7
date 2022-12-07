#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char str1[255],str2[255];
    scanf("%s\n%s",&str1,&str2);
    n=strlen(str2);


    if(str1[0]==str2[n-1] )
        printf("YES");
    else
         printf("NO");


    return 0;
}
