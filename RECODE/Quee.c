#include<stdio.h> //include header
#include<stdlib.h>
#define SIZE 5
int front = -1,arr[SIZE];
int rear = -1,arr[SIZE];
// function declaration 
void nQuee();

void dQuee();

void traversal();

int main() // main function - landing function
{
   	int choice;
	do
	{
		printf("\n 1.nQuee \n 2.dQuee \n 3.traversal \n 4.Exit \n");
		printf("\n \n please select your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				nQuee(); //function calling	
				break;
			case 2:
				dQuee();
				break;
			case 3:
				traversal();
				break;
			case 4:
				break;
			default:
				printf("invalid choice..,");
				break;
		}
	}while(choice != 4);
	return(0);
}
//function definition

void nQuee()
{	
	int n;
		
	if (rear == SIZE - 1)

	{

		printf("\n quee full");

	}

	else

	{
		printf("\n add your element : ");
		scanf("%d",&n);
		rear=rear+1;
		arr[rear]=n;
	}	
}


void dQuee()

{
	if (rear==-1)

	{

		printf("\n under flw");

	}

	else if (rear==front)

	{

		printf("\n deleted element : %d",arr[front]);
		front=-1;
		rear=-1;

	}

	else

	{

		printf("\n deleted element : %d",arr[front]);
		front=front+1;
	}
}

void traversal()

{
	int i;
	
        if (rear==-1)
     	{
	
		printf("\n under flw");

	}

	else

	{
		printf("\n element in this Quee :");
		for(i=front;i<=rear;i++)
		printf("%d",arr[i]);
	}

}
