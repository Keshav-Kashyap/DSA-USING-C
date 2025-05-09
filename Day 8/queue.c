#include<stdio.h>
#define SIZE 5
int  queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value){
    if(rear == SIZE-1){
        printf("Overflow!!\n");
        return;

    }
    
    if(front ==-1){
            front =0;
     }
     rear++;
     queue[rear]= value;
     printf("Enqueued: %d\n",value);
     


    }


    void dequeue(){
        if(front == -1 || front>rear){
            printf("Queue is empty(Underflow)!\n");
            return;

        }

        printf("Dequeue: %d\n",queue[front]);
        front++;


    }

    void display(){
        if(front ==-1 || front>rear){
            printf("Queue is Empty!");
            return ;
        }
        printf("Queue elements:");
        for(int i =front;i<=rear;i++){
            printf("%d ", queue[i]);

        }
        printf("\n");
    }


int main (){
int choice, item;
printf("\n---Queue Menu---\n ");
printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");




while(1){
    printf("Enter your choice:");
    scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter value to  enqueue");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exting program!!");
               return 0;
            default:
                printf("Invalid choice! Try again.\n");

            
        }


}






    return 0;
}