#include<stdlib.h>
#include<stdio.h> 
struct Node {
	int data;
	struct Node* next;
};

void Insert Insert(Node** pointerToHead,int x)
{
	struct Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = NULL;
	if(*head != NULL) temp->next = *head;
	head = temp;
	return head;
}


void Print(Node* head) {
    printf("List is: ");
    while(head != NULL)
    {
        printf(" %d", head->data);
        head= head->next;
    }
    printf("\n");
}

int main() {
  Node*  head = NULL; //empty list;
    printf("How many numbers?\n");
    int n,i,x;
    scanf("%d",&n);
    for(i = 0;i<n;i++){
        printf("Enter the number \n");
        scanf("%d",&x);
        head = Insert(head,x);
        Print(head);
    }
}

