#include <stdio.h>
int main(){
int arr1[50], arr2[50], arr3[100];
int m,n,i,j,k=0;
printf("enter the size of first array");
scanf("%d",&m);
printf("Enter the elements of the sorted first array");
for(i=0;i<m;i++)
{
scanf("%d",&arr1[i]);
}
printf("enter the size of the second array");
scanf("%d",&n);
printf("enter the elements of the sorted second array");
for(i=0; i<n; i++)
{
scanf("%d",&arr2[i]);
}
i=0,j=0;
while(i<m && j<n)
{
if(arr1[i]<arr2[j])
{
arr3[k]=arr1[i];
i++;
}
else
{
arr3[k]=arr2[j];
j++;
}
k++;
}
if(i>=m){
while(j<n)
{
arr3[k]=arr2[j];
j++;
k++;
}}
if(j>=n)
{
while(i<m)
{
arr3[k]=arr1[i];
i++;
k++;
}}
printf("merged sortedarray:");
for(i=0; i<k; i++)
{
printf("%d",arr3[i]);
}
printf("\n");
return 0;
}
