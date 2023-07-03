
// Q2 write a programe to print the factorial of number n using for loop.


#include<stdio.h>
#include<stdio.h>
void main(){
int j,e,n,i = 1;

clrscr();

printf("enter any number: ");
scanf("%d",&j);

for(e = 1;e<=j;e++)
{
    n=e*i;
    i=n;
}
printf("the factorial is %d",i);

    getch();
}
