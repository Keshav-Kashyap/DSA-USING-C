#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data ;
    struct Node *next;
};

void linkedListTraversal(struct Node * head){
    struct Node * ptr = head;
    printf("Element:%d\n",ptr->data);
    ptr= ptr->next;

   do{
        printf("Element:%d\n",ptr->data);
        ptr= ptr->next;
    } while(ptr!=head);

}


struct Node * insertAtFirst(struct Node * head, int data){

    struct Node * ptr = (struct Node * )malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head->next;
    while(p->next  != head)
    {
        p= p->next;
    }

    p->next = ptr;
    ptr->next = head;

    head = ptr;


return head;

}



struct Node * insertAtGivenIndex(struct Node *head, int data, int idx){
    struct Node *p= (struct Node *)malloc(sizeof(struct Node));
    p->data = data;
    struct Node *q = head;

     for(int i = 0; i<idx-1; i++){

   q= q->next;


     }

    p->next = q->next;
    q->next = p;
    return head;



}



struct Node * insertAtEnd(struct Node *head, int data){
struct Node * ptr=  (struct Node *)malloc(sizeof(struct Node));
struct Node * q= head;
ptr->data = data;
while(q->next != head){
q=q->next;
}
q->next = ptr;
ptr->next = head;
return head;
}

struct Node * insertAtGivenValue(struct Node * head, struct Node * prevNode,  int value)
{
    struct Node * ptr= (struct Node *)malloc(sizeof(struct Node));
    ptr->data = value;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
   return head;
}



int main (){

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));


    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = head;

    printf("Before:\n");
    linkedListTraversal(head);

   
    // head = insertAtFirst(head, 300);

    // head = insertAtGivenIndex(head,200, 2);

    // head  = insertAtEnd(head,20);
    head = insertAtGivenValue(head, second, 100);

    printf("After:\n");
    linkedListTraversal(head);







    return 0;
}