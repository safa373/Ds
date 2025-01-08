#include<stdio.h>
int main()
{
 int n,i,sum=0;
 printf("enter your number ");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
	sum=sum+i;
 }
 printf("\n sum of %d numbers = %d ",n,sum);
return 0;
}
 
