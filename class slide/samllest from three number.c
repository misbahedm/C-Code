#include<stdio.h>
#include<conio.h>
void main()
{
int  x,y,z;
printf("enter three integer numbers: ");
scanf("%d %d %d", &x,&y,&z);
if(x<y && x<z)
printf("%d is smallest number",x);
else if(y<x && y<z)
printf("%d is smallest number",y);
else
printf("%d is smallest number",z);
getch();
}
