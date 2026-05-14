#include<stdio.h>
#define MAX 100

int stack[MAX];
int top=-1;

int isFull(){
    return top==MAX-1;
}
int isEmpty(){
    return top==-1;
}

void push(int val){
    if(isFull()){
        printf("Stack Overflow\n");
    }else{
        stack[++top]=val;
        printf("%d Pushed Successfully\n",val);
    }
}
void pop(){
    int val;
    if(isEmpty()){
        printf("Stack Underflow\n");
    }else{
        val=stack[top--];
        printf("Popped Element is %d\n",val);
    }
}

void peek(){
    if(isEmpty()){
        printf("Stack is Empty\n");
    }else{
        printf("Top Element is %d\n",stack[top]);
    }
}

void display(){
    if(isEmpty()){
        printf("Stack is Empty\n");
    }else{
        printf("Stack Elements are:\n");
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}

int main(){
    int choice,val;
    do{
        printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
        printf("Enter Your Option: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:printf("Enter ELement to Push: ");
                scanf("%d",&val);
                push(val);
                break;
            case 2:pop();
                break;
            case 3:peek();
                break;
            case 4:display();
                break;
            case 5:printf("Exiting the program\n");
                break;
            default:printf("Invalid Option\n");
        }
    }while(choice!=5);
    return 0;
}