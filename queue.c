#include<stdio.h>
#define MAX 5

int queue[MAX];
int front=-1,rear=-1;

void enqueue(int val){
    if(rear==MAX-1){
        printf("Queue Overflow\n");
    }else{
        if(front==-1)
            front=0;
        rear++;
        queue[rear]=val;
        printf("%d inserted into queue\n",val);
    }
}
void dequeue(){
    if(front==-1||front>rear){
        printf("Queue Underflow\n");
    }else{
        printf("%d removed from the queue\n",queue[front]);
        front++;
    }
}
void display(){
    if(front==-1||front>rear){
        printf("Queue is Empty\n");
    }else{
        printf("Queue Elements are:\n");
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}
int main(){
    int val, choice;
    do{
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:printf("Enter Value to insert: ");
                scanf("%d",&val);
                enqueue(val);
                break;
            case 2:dequeue();
                break;
            case 3:display();
                break;
            case 4:printf("Exiting the program\n");
                break;
            
        }
    }while(choice!=4);
    return 0;
} 