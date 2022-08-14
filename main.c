#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node* next;
};


void insertLL(struct Node** head, int x);   //insert to Linked List
void printLL(struct Node** head);         //print to Linked List

int main(){
    struct Node* head;
    head = NULL;
    printf("How many numbers do you want to insert?\n");
    int n, i, x;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("\nEnter the number:\n");
        scanf("%d", &x);
        insertLL(&head, x);    
        printLL(&head);
    }

    return 0;
}

void insertLL(struct Node** head, int x){
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = *head;
    *head = temp;
}

void printLL(struct Node** head){
    if (*head == NULL){
        printf("Linked List empty");
        return;
    }
    struct Node* n;
    n = *head;
    while(n->next != NULL){
        printf("%d  ", n->data);
        n = n->next;
    }
    printf("%d  ", n->data);
}

