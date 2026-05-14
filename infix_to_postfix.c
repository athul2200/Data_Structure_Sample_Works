#include<stdio.h>
#include<ctype.h>
#define MAX 100

char stack[MAX];
int top=-1;

void push(char ch){
    stack[++top]=ch;

}
char pop(){
    return stack[top--];
}
int priority(char ch){
    if(ch=='+'||ch=='-')return 1;
    if(ch=='*'||ch=='/')return 2;
    if(ch=='^')return 3;
    return 0;
}

int main(){
    char infix[MAX],postfix[MAX];
    int i=0,j=0;

    printf("Enter Infix Expression: ");
    scanf("%s",&infix);

    while(infix[i]!='\0'){
        if(isalnum(infix[i])){
            postfix[j++]=infix[i];

        }else if(infix[i]=='('){
            push(infix[i]);
        }else if(infix[i]==')'){
            while(stack[top]!='('){
                postfix[j++]=pop();
            }
            pop();
        }else{
            while(top!=-1 && priority(stack[top])>=priority(infix[i])){
                postfix[j++]=pop();
            }
            push(infix[i]);
        }
        i++;
    }
    while(top!=-1){
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    printf("Postfix Expression: %s",postfix);
    return 0;
}