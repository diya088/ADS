#include <stdio.h>
int main(){
int a,b,c;
a=1;
b=1;
printf("%d\n%d\n",a,b);
for(int i=2; i<=10; i++){
c=a+b;
printf("%d\n",c);
a=b;
b=c;
}
return 0;
}
