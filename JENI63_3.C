// Q2 write a programe to print the factorial of number n using for loop.

#include<stdio.h>
#include<conio.h>

void main(){
int j,e,n;

printf("enter any number: ");
scanf("%d",&j);

for(e = 1;e<=10;e++)

{
    n=e*j;
    printf("%d x %d = %d\n",j,e,n);
}

    getch();
}
