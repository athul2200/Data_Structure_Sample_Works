#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*left;
    struct node*right;
};

struct node*createnode(int val){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

void inorder(struct node*root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
    
}

void preorder(struct node*root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right); 
    }
}

void postorder(struct node*root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

int main(){
    struct node*root=createnode(50);
    root->left=createnode(30);
    root->right=createnode(70);
    root->left->left=createnode(20);
    root->left->right=createnode(40);
    root->right->left=createnode(60);
    root->right->right=createnode(80);

    printf("Inorder Traversal\n");
    inorder(root);

    printf("\nPreorder Traversal\n");
    preorder(root);

    printf("\nPostorder Traversal\n");
    postorder(root);

    return 0;
}