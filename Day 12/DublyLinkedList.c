#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
    struct Node* prev;
};

void linkedListTraversal(struct Node * head){

    struct Node * p= head ;
    while(p != NULL){

        printf("Element: %d\n", p->data);

        if(p->next == NULL){
            break;
        }
        p=p->next;


    }
    printf("\n\n");

  while(p!=NULL){
    printf("Element: %d\n", p->data);
    p = p->prev;
  }

 

}

// struct Node * deleteAtFirst(struct Node * head){

// return head;

// }

// struct Node * deleteAtEnd(struct Node * head){
 
// return head;

// }

// struct Node * deleteAtGivenIndex(struct Node * head, int index){
   
//     return head;
// }

// struct Node * deleteByValue(struct Node * head , struct Node *prevNode){


//     }


   

//     return head;
// }


int main (){


    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));

head->data = 10;
head->next = second;
head->prev = NULL;

second->data = 20;
second->next = third;
second->prev = head;

third->data = 30;
third->next = fourth;
third->prev= second;

fourth->data = 40;
fourth->next = NULL;
fourth->prev = third;

printf("Before:\n");
linkedListTraversal(head);


//  head = deleteAtFirst(head);

// head = deleteAtEnd(head);

// head = deleteAtGivenIndex(head,2);
// head = deleteByValue(head,second);
// printf("After:\n");
// linkedListTraversal(head);

    return 0;
}