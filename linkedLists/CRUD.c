
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
} Node;


Node* createNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));

    if(newNode == NULL){
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


Node* insertStart(Node* head, int data){
    Node* newNode = createNode(data);
    newNode->next = head;
    return newNode;
}


Node* insertEnd(Node* head, int data){
    Node* newNode = createNode(data);

    if(head == NULL){
        return head = newNode;

    } 

    Node* current = head;
    while(current->next != NULL){
        current = current->next;
    }

    current->next = newNode;
    return head;
}


Node* delete(){}


void printList(Node* head){
    Node* current = head;

    while(current != NULL){
        printf("%d --> ", current->data);
        current = current->next;
    }
    
    printf('empty list');  
}

void freeList(Node* head){
    
    Node* soul = head;
    Node* grimReaper;

    while(soul != NULL){
        grimReaper = soul->next;
        free(soul);
        soul = grimReaper;
    }
}


int main(){

}



