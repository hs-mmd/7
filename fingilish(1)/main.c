#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
char string[100];
scanf("%s", string);
int count = 0;

for(int i = 0; i < strlen(string); i++)
 {
       if(string[i]=='a' || string[i]=='u' ||string[i]=='o' || string[i]=='i' ||string[i]=='e' )
       count++;
 }
  int a;
  a=pow(2,count);
  printf("%d",a);

return 0;
 }



