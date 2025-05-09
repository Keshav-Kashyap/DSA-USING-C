#include<stdio.h>
#include<stdlib.h>

struct  circularQueue
{

    int size;
    int f;
    int r;
    int* arr;


};

int isEmpty(struct circularQueue *q){
    if(q->r == q->f){
        return 1;
    }
    return 0;
}

int isFull(struct circularQueue *q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    return 0;
}

void enqueue(struct circularQueue *q , int val){
    if(isFull(q)){
        printf("The Queue is full");

    }else{
      
        q->r= (q->r+1)%q->size;
        q->arr[q->r]= val;
        printf("Enqued Element: %d\n", val);
    }
}

int dequeue(struct circularQueue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("The Queue is empty");

    }
    else{
        q->f = (q->f+1)%q->size;
        a = q->arr[q->f];

    }
}


int main (){
struct circularQueue q;
q.size =4;
q.f= q.r=0;
q.arr = (int *)malloc(q.size*sizeof(int));

enqueue(&q,12);
enqueue(&q,15);
enqueue(&q,16);

printf("Dequeing Elements %d\n", dequeue(&q));
printf("Dequeing Elements %d\n", dequeue(&q));
printf("Dequeing Elements %d\n", dequeue(&q));


//Again
enqueue(&q,12);
enqueue(&q,15);
enqueue(&q,16);

if(isEmpty(&q)){
    printf("Queue is empty");

}
if(isFull(&q)){
    printf("Queue is Full");

}





    return 0;
}