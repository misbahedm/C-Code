#include<stdio.h>
main()
{
int c, n, fact=1;
printf("enter a number\n");
scanf("%d",&n);
for (c=1; c<=n; c++)

fact=fact*c;
printf("factorial=%d", fact);
return 0;
}


