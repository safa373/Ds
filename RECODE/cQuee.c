#include<stdio.h> //include header
#include<stdlib.h>
#define SIZE 5
int front = -1,queue[SIZE];
int rear = -1,queue[SIZE];
// function declaration 
void nQuee();

void dQuee();

void traversal();

int isFull()
{
    return (rear + 1) % SIZE == front;
}

int isEmpty()
{
    return front == -1;
}

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
    if (isFull()) {
        printf("Queue overflow\n");
        return;
    }

    if (front == -1) {
        front = 0;
    }
    rear = (rear + 1) % SIZE;
    queue[rear] = data;
    printf("Element %d inserted\n", data);
}


void dQuee()

{
 	if (isEmpty()) {
        printf("Queue underflow\n");
        return -1;
    }
    int data = queue[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
    return data;
}

void traversal()

{
 if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (i != rear) {
        printf("%d ", queue[i]);
        i = (i + 1) % SIZE;
    }
    printf("%d\n", queue[rear]);

}




