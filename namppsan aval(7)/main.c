#include <stdio.h>

int is_prime(int a)
{
    if(a==1)
        return 0;

    int rem,j=2;
    while( j<=(a/2) )
    {
        if((rem=a%j))
            j++;
        else
           return 0;
    }
    return 1;
}


int jomle_n_om_aval (int a)
{
    int count=0,n=0;
    for(int k=2 ; k<10000 ; k++)
    {
        if( (is_prime(k)) )
            count++;
        if( (is_prime(count)) && (is_prime(k)) )
            n++;
        if(n==a)
             return k;
    }
    return 0;
}

int main()
{
    int test,num;
    scanf("%d\n",&test);

    for(int i=0 ; i<test ; i++)
    {
        scanf("%d",&num);
        printf("%d\n",jomle_n_om_aval(num));


    }

    return 0;
}
