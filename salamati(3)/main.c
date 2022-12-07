#include <stdio.h>
#include <string.h>

int main()
{

    char str[5];
    scanf("%s",&str);
    int R=0,Y=0,G=0;
    for(int i=0 ; i<strlen(str) ; i++)
    {
        if(str[i]=='R')
            R++;
        if(str[i]=='Y')
            Y++;
        if(str[i]=='G')
            G++;
    }
    if(R>=3 || (R>=2 && Y>=2) || R+Y==5)
        printf("nakhor lite");
    else
         printf("rahat baash");
    return 0;
}
