#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main()
{
    char str[50];
    int test,i,j;
    scanf("%d",&test);

    for( i=0 ; i<test ; i++)
    {
        scanf("%s",str);
        int count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;

        for(j=0 ; str[j]!='\0' ; j++)
        {
            if(str[0]=='0')
                return 0;
            if(str[j]=='0')
                count0++;
            if(str[j]=='1')
                count1++;
            if(str[j]=='2')
                count2++;
            if(str[j]=='3')
                count3++;
            if(str[j]=='4')
                count4++;
            if(str[j]=='5')
                count5++;
            if(str[j]=='6')
                count6++;
            if(str[j]=='7')
                count7++;
            if(str[j]=='8')
                count8++;
            if(str[j]=='9')
                count9++;

        }

        if( count0>=4 || count1>=4 || count2>=4 || count3>=4 || count4>=4 || count5>=4 || count6>=4 || count7>=4 || count8>=4 || count9>=4)
            printf("Ronde!\n");
        else if ( (str[0]==str[1] && str[0]==str[2]) || (str[1]==str[2] && str[1]==str[3]) || (str[2]==str[3] && str[2]==str[4]) || (str[3]==str[4] && str[3]==str[5]) || (str[4]==str[5] && str[4]==str[6]) || (str[5]==str[6] && str[5]==str[7]))
            printf("Ronde!\n");
        else if ( str[0]==str[7] && str[1]==str[6] && str[2]==str[5] && str[3]==str[4] )
            printf("Ronde!\n");
        else
            printf("Rond Nist\n");


        j=0;
    }


    return 0;
}
