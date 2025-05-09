#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node * head){

    struct Node * ptr = head;
    do{
        printf("Element: %d\n", ptr->data);
       ptr=  ptr->next;
    }while(ptr != head);

}

struct Node * deleteAtFirst(struct Node * head){

    struct Node * p= head;
    struct Node * q = head;
    while(q->next !=head ){
        q = q->next;

    }
    q->next = head->next;
    head= head->next;

    free(p) ;

return head;

}

struct Node * deleteAtEnd(struct Node * head){
    struct Node * p = head;
    struct Node *q = head->next;
    while(q->next != head){
        q= q->next;
        p = p->next;
    }

p->next = head;
free(q);
return head;

}

struct Node * deleteAtGivenIndex(struct Node * head, int index){
    struct Node * p = head;
    struct Node * q = head->next;

    for(int i = 0 ; i<index-1; i++){
        p = p->next;
        q = q ->next;

    }
    p->next = q->next;

    free(q);
    return head;
}

struct Node * deleteByValue(struct Node * head , struct Node *prevNode){

    struct Node * p = head;
    struct Node * q = head->next;

    while(q != prevNode && q!= head  ){
        q = q->next;
        p = p->next;
    }

    if(q->data == prevNode->data){
        p->next = q->next;
        free(q);
    }else {
        printf("Value does not exits..\n");
    }


   

    return head;
}


int main (){


    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));

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


//  head = deleteAtFirst(head);

// head = deleteAtEnd(head);

// head = deleteAtGivenIndex(head,2);
head = deleteByValue(head,second);
printf("After:\n");
linkedListTraversal(head);

    return 0;
}