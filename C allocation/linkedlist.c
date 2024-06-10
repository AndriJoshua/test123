#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;  
};

void insertbeginning(struct Node** head, int newData){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;

}

void printlist(struct Node* head){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}


int main(){
struct Node* head = NULL;
insertbeginning(&head,5);
insertbeginning(&head,10);

printlist(head);

}