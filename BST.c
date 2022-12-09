#include<stdio.h>
#include<stdlib.h>

struct node{
   struct node*left;
   int data;
   struct node*right;
};

 struct node*Newnode(int item)
 {
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    temp->left=NULL;
    temp->right=NULL;
 }
 void inoder(struct node*root)
 {
    if(root!=NULL)
    {
        inoder(root->left);
        printf("%d \n",root->data);
        inoder(root->right);
    }
 }
 struct node *insert(struct node*node,int data)
 {
    if(node==NULL)
    return Newnode(data);
    if(data<node->data)
        node->left=insert(node->left,data);
    else if(data>node->data)
    node->right=insert(node->right,data);
    return node;
 }

 int main(){
 struct node*root=NULL;
 root=insert(root,45);
 insert(root,40);
 insert(root,50);
 insert(root,35);
 insert(root,55);
 insert(root,60);
 insert(root,90);
 insert(root,10);
 printf("inoder traversal:");
 inoder(root);
 return 0;
}