#include<stdio.h> //include header
#include<stdlib.h>
#define SIZE 5
int top = -1,arr[SIZE];
// function declaration 
void push();

void pop();

void traversal();

int main() // main function - landing function
{
   	int choice;
	do
	{
		printf("\n 1.push \n 2.pop \n 3.traversal \n 4.Exit \n");
		printf("\n \n please select your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push(); //function calling	
				break;
			case 2:
				pop();
				break;
			case 3:
				traversal();
				break;
			case 4:
				break;
			default:
				printf("\n invalid choice");
				break;
		}
	}while(choice != 4);
	return(0);
}
//function definition

void push()
{	
	int n;
		
	if (top == SIZE - 1)

	{

		printf("\n STACk FULL \n");

	}

	else

	{
		printf("\n add your element : ");
		scanf("%d",&n);
		top=top+1;
		arr[top]=n;
	}	
}


void pop()

{
	if (top==-1)

	{

		printf("\n under flw");

	}

	else

	{

		printf("\n poped element%d ",arr[top]);
		top=top-1;

	}
}

void traversal()

{
	int i;
	
        if (top==-1)
     	{
	
		printf("\n under flw");

	}

	else

	{
		printf("\n element in this stack : ");
		for(i=top;i>=0;i--)
		printf(" %d ",arr[i]);
	}

}
