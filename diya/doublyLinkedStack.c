#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peek();
void display();
struct node{
int data;
struct node *next, *prev;
};
struct node *top= NULL, *newnode, *temp;
void main()
{
int choice=0;
do{
printf("\n 1.push");
printf("\n 2.pop");
printf("\n 3.peek");
printf("\n 4.display");
printf("\n 5.exit");
printf("\n enter your choice:");
scanf("%d",&choice);
switch(choice){
case1:
push();
display();
break;
case2:
pop();
display();
break;
case3:
peek();
break;
case4:
display();
break;
case5:
exit(0);
default:
printf("invalid choice");
}
} while(choice!=5);
}
void push(){
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the element:");
scanf("%d",&newnode->data);
newnode->next=top;
newnode-> prev=NULL;
if(top!=NULL)
top-> prev=newnode;
top= newnode;
}
void pop(){
if(top==NULL)
{
printf("stack underflow\n");
}
else{
temp= top;
printf("deleted element= %d\n",temp-> data);
top=top-> next;
if(top!=NULL)
top->prev=NULL;
free(temp);
}
}
void peek(){
if(top==NULL){
printf("stack is empty\n");
}else{
printf("top element=%d\n",top->data);
}}
void diaplay(){
if(top==NULL){
printf("stack is empty\n");
}
else{
temp=top;
printf("\nstack:\n");
printf("top->");
while (temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
printf("NULL");
}}
