#include<stdio.h>
//#include<conio.h>

#define N 5
void push();
void pop();
void peek();
void display();
void exit();

int stack [N];
int top=-1;

void main()
{
int x;
int choice;
do
{
printf("\n1.push\n2.pop\n3.peek\n4.display\n0.exit");
printf("\nenter your choice:");
scanf("%d",&choice);


switch(choice)
{
case 1: printf("enter data:");
	scanf("%d",&x);
	push(x);

break;
case 2:pop();
break;
case 3:peek();
break;
case 4:display();
break;
case 0:exit(0);

default:printf("\nenter a valid choice");
}
}

while(choice!=0);
}
void push(int x)
{

if(top==N-1)
{
printf("\nOverflow");
}
else
{
top++;
stack[top]=x;
}
}

void pop()
{
if(top==-1)
{
printf("\nUnderflow");
}
else
{
printf("\nDELETED ELEMENT:%d",stack[top]);
top--;
}
}

void peek()
{
if (top==-1)
{
printf("\nStack Empty");
}
else
{
printf("\ntop element:%d",stack[top]);
}
}


void display()
{
int i;
if (top==-1)
{
printf("\nStack is Empty.Enter Some Data");
}
else
{
printf("\n currrent stack:");
for(i=top;i>=0;i--)
{
printf("%d\t",stack[i]);
}
}
}

