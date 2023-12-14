#include<stdio.h>
int stack[5], top=-1;
void push();
void pop();
void peek();
void display();
int main()
	{
		int choice;
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.peek\n");
		printf("4.display\n");
		printf("Enetr your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			push();
			break;
				case 2:
				pop();
				break;
			case 3:
			peak();
			break;
		case 4:
		display();
		break;
			default:
			printf("enter a valid choice");
			}
			return 0;
			}
		void push()
		{
			int item;
			if(top==5-1)
		{
			printf("stack is overflow");
		}
		else
		{
			printf("Enter the elements:");
			
			top=top+1;
			stack[top]=item;
			}
		}
	 	void pop()
		{
			if(top==-1)
		{
		 	 printf("stack is underflow");
		 }
		 else
		 {
		   printf("\n deleted:%d",stack[top]);
		   top=top-1;
		  }
		  }
		 void peek()
		 {
		   	if(top==-1)
		  	{
		    		printf("stack is empty");
		   	}
		  else
		   	{
		   		 printf("the top element is:%d",stack[top]);
		    	}
		   }
		  void display()
		  {
		  int i;
		  for(i=top; i>=0;i++)
		  {
		    printf("\n current stack element are:");
		    printf("%d\t",stack[i]);
		    }
		   }
		
	
		
