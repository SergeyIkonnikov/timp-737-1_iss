#include <stdio.h>
#include <math.h>
int main ()
{int x, b=0, n;
scanf ("%d",&n);
for (int i=1;i<=n;i++)
{
scanf ("%d",&x);
b=(-1)*x+b;
}
printf ("%d\n",b);
return 0;}
