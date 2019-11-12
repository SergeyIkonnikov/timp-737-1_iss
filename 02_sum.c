#include <stdio.h>
#include <math.h>
int main ()
{int x, b=0, n;
scanf ("%d",&n);
for (int i=1;i<=n;i++)
{
scanf ("%d",&x);
b += ((i+1) % 2)*(pow (x, 3));
}
printf ("%d\n",b);
return 0;}
