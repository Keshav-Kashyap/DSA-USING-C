#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;

};

void linkedlistTraversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element : %d\n",ptr->data);
        ptr= ptr->next;
    }
}


struct Node * insertAtFirst(struct Node * head, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data= data;
    return ptr;

     
}

struct Node * insertAtIndex(struct Node * head, int data,int index){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data= data;
    struct Node *p = head;
    int i =0;
    while(i!=index-1){
        p=p->next;
        i++;

    }
    
    ptr->next= p->next;
    p->next = ptr;

    return head;


}

struct Node * insertAtEnd(struct Node *head, int data){
struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
ptr->data= data;
struct Node *p = head;


while(p->next != NULL){
    p = p->next;
      

}

p->next = ptr;
ptr->next = NULL;
return head;

    }



    struct Node * insertAfterNode(struct Node *head,struct  Node * prevNode, int data ){
        struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
        ptr->data = data;
        ptr->next = prevNode->next;
        prevNode->next = ptr;


        return head;


        
    }

int main(){ 

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head= (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head -> data = 10;
    head -> next = second;

    second ->data= 20;
    second ->next = third;

    third -> data= 30;
    third -> next=fourth;

    fourth -> data=40;
    fourth -> next=NULL;
    printf("Linked List Before Insertion\n");
    linkedlistTraversal(head);

//case:1
printf("Linked List Insert First Insertion\n");
head= insertAtFirst(head,55);
linkedlistTraversal(head);

//case:2
printf("Linked List  Insert Between Insertion\n");
head= insertAtIndex(head,45,3 );
linkedlistTraversal(head);

//case:3
printf("Linked List  Insert at The End Insertion\n");
head= insertAtEnd(head,78 );
linkedlistTraversal(head);

//case:4
printf("Linked List  Insert After Given Node Insertion\n");
head= insertAfterNode(head,second,78);
linkedlistTraversal(head);

    return 0;
}