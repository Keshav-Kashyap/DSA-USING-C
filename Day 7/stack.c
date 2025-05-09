#include<stdio.h>
#define SIZE 5
int stack[SIZE];
int top =-1;

void push(int item){
    if(top == SIZE-1){
        printf("OverFlow!\n");

    } else {
        stack[++top]= item;
        printf("%d Item Inserted.\n",item);
    }
}

void pop(){
    if(top == -1){
        printf("Underflow & Exit\n");

    }
    else {
        int Item = stack[top--];
        printf("%d Item Deleted.\n",Item);
    }
}


void display(){
    if(top == -1){
        printf("The stack is empty!!\n");

    }else{
        printf("Stack Elements:");
        for(int i =0;i<=top ;i++){
            printf("%d ",stack[i]);

        }
        printf("\n");

    }
}

int main (){
int choice , item;
printf("Choice Options:\n");
printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");

while(1){
    printf("Enter Choice:");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Enter The item:");
            scanf("%d",&item);
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("Invalid Choose!!");

    }



}




    return 0;
}