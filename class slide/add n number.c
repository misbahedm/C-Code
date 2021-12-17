#include<stdio.h>
main()
{
int n, sum=0, c;
printf("enter the numbers\n");
scanf("%d",&n);
for (c=1; c<=n; c++)
{
sum=sum+c;
}
printf("sum=%d", sum);
return 0;
}


