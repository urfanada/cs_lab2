#include <stdio.h>

int main()
{

    float n, a,s=0,i=1;
scanf("%f", &n);
while (i <= n) 
{
  s+=1.0/i;
  i++;
}
printf("%f",s);

return 0;
}