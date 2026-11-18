#include<stdio.h>
#define MAX 8
void display(int set[])
{
int i, empty=1;
printf("{");
for(i=0; i<MAX; i++)
{
if(set[i]==1)
{
printf("%d",i+1);
empty=0;
}}
if(empty)
printf("Empty");
printf("}\n");
}
void add(int set[], int element)
{
if(element>=1 && element <=MAX)
{
set[element-1]=1;
printf("%d added successfully.\n",element);
}
else
printf("invalid element.\n");
}
void removeElement(int set[], int element)
{
if(element>=1 && element <= MAX)
{
set[element-1]=0;
printf("%d remo0ved successfully.\n",element);
}
else
printf("Invalid element!\n");
}
void unionSet(int A[], int B[], int c[])
{
int i;
for(i=0; i<MAX; i++)
c[i]=A[i]|B[i];
}
void intersectionSet(int A[], int B[], int c[])
{
int i;
for(i=0; i<MAX; i++)
c[i]=A[i] & B[i];
}
void differenceSet(int A[], int B[], int c[])
{
int i;
for(i=0; i<MAX; i++)
c[i]=A[i]&(~B[i]);
}
int main(){
int A[MAX]={0};
int B[MAX]={0};
int c[MAX]={0};
int choice, element, i;
printf("enter number of elements in set A:");
scanf("%d",&element);
printf("enter elements of set A(1 to %d):",MAX);
for(i=0; i<element; i++)
{
int x;
scanf("%d",&x);
if(x>=1 && x<=MAX)
A[x-1]=1;
else
printf("invalid element %d ignored.\n",x);
}
printf("enter number of elements in set B:");
scanf("%d",&element);
printf("enter elements of set B(1 to %d):",MAX);
for(i=0; i<element; i++)
{
int x;
scanf("%d",&x);
if(x>=1 && x<=MAX)
B[x-1]=1;
else
printf("invalid element %d ignored.\n",x);
}
do{
printf("\n----SET ADT USING BIT STRINGS----\n");
printf("1.Display Sets\n");
printf("2.add elements to set A\n");
printf("3.remove element from set A\n");
printf("4.union (AuB)\n");
printf("5.intersection (AnB)\n");
printf("6.difference (A-B)\n");
printf("7.ifference (B-A)\n");
printf("8.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("set A=");
display(A);
printf("set B=");
display(B);
break;
case 2:
printf("enter element to add:");
scanf("%d",&element);
add(A, element);
break;
case 3:
printf("enter element to remove:");
scanf("%d",&element);
removeElement(A, element);
break;
case 4:
unionSet(A,B,c);
printf("union=");
display(c);
break;
case 5:
intersectionSet(A,B,c);
printf("intersection =");
display(c);
break;
case 6:
differenceSet(A,B,c);
printf("difference(A-B) =");
display(c);
break;
case 7:
differenceSet(B,A,c);
printf("difference(B-A)=");
display(c);
break;
case 8:
printf("Existing program...\n");
break;
default:
printf("invalid choice try again\n");    
}
} while(choice!=8);
return 0;
}                
