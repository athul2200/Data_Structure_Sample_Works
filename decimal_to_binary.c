#include<stdio.h>
# define MAX 100

int stack[MAX];
int top=-1;

void push(int val){
    if(top==MAX-1){
        printf("Stack Overflow");
    }else{
        stack[++top]=val;

    }
}
void pop(){
    int val;
    if(top==-1){
        printf("Stack Underflow");
    }else{
        val=stack[top--];
        printf("%d",val);
    }
}

int main(){
    int n,rem;
    printf("Enter a decimal Number :");
    scanf("%d",&n);
    
    if(n==0){
        printf("Binary : 0\n");
        return 0;
    }
    while(n>0){
        rem=n%2;
        push(rem);
        n=n/2;
    }
    printf("Binary : ");
    while(top!=-1){
        pop();
    }
    return 0;
}