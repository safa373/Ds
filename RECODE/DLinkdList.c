#include<stdio.h>
#include<conio.h>

struct Node{

	int data;
	struct Node *link;
}
struct Node *header=NULL;
struct Node *createNode(int data){
	struct Node *newnode;
	newnode = malloc(sizeof(stuct Node));
	newnode -> data=data;
	newnode -> link=NULL;
	newnode -> prev= NULL;
	return newnode;
}
void insertAtFront(int data)
	if(header = null){
		newnode = create_Node(data)
		header = newnode;
	}
	else{
		newnode -> link = header;
		 header -> prev = newnode;
		header = newnode;
	}
}
int main(){
	insertAtFront(2);
}
