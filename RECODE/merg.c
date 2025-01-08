#include<stdio.h>

void sortArray(int arr[],int size)

{
	int j, k ,temp;
	for(j=0;j<=size-1;j++)
		{   
		for(k=j+1;k<=size-1;k++)
			{
			if(arr[j]>arr[k])
				{
				temp=arr[j];
				arr[j]=arr[k];
				arr[k]=temp;
				}
			}
		}
}

int main()

{
 	int n,m,i,j,k,temp,a[100],c[200],b[100];
 	printf("\n enter 1st your array limit : ");
 	scanf("%d",&n);
 	//first array insertion 
 	printf("\n enter 1st array elements : ");
 	for(i=0;i<=n-1;i++)
 		{
 			scanf("%d",&a[i]);
 		}
 	printf("\n first array : ");
 	for(i=0;i<=n-1;i++)
 		{
 			printf("  %d  " , a[i]);
 		}
 	//first array sortiong
 	sortArray(a,n);
 	printf("\n \n sorted 1starray : ");
 	for(i=0;i<=n-1;i++)
 		{
 			printf("  %d  ",a[i]);
 		}
 	//second array insertion
 	printf("\n \n enter 2ndd your array limit : ");
 	scanf("%d",&m);
 	printf("\n enter 2nd array elements : ");
 	for(j=0;j<=m-1;j++)
 		{
 			scanf("%d",&b[j]);
 		}
 	printf("\n second array : ");
 	for(j=0;j<=m-1;j++)
 		{
 			printf("  %d  " , b[j]);
 		}
 	//second array sorting
 	sortArray(b,m);
 	printf("\n \n sorted 2ndarray : ");
 	for(j=0;j<=m-1;j++)
 		{
 			printf("  %d  ",b[j]);
 		}
 //merging started
 	for(i=0;i<=n-1;i++)
 		{
 			c[i]=a[i];
 		}
 	for(j=0;j<=(n+m)-1;j++)
 		{
 			c[i+j]=b[j];
 		}
 	printf("\n \n merged array : ");
 	for(k=0;k<=(m+n)-1;k++)	
 		{
 			printf("  %d  ",c[k]);
 		}
 	//sorting of merged array
 	sortArray(c,m+n);
 	printf("\n \n sorted mergedarray : ");
 	for(j=0;j<=(m+n)-1;j++)
 		{
 			printf("  %d  ",c[j]);
 		}
 	return 0;
}
 
