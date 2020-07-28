#include<stdio.h>
#define max 10
int queue[max];
int f=-1;
int r=-1;
void insert(int);
int delete_element();
int peek();
void display();
int main()
{
	int opt,val;
	char ch;
	printf("1.INSERT AN ELEMENT\n");
	printf("2.DELETE AN ELEMENT\n");
	printf("3.PEEK\n");
	printf("4.DISPLAY THE QUEUE\n");
	printf("5.EXIT\n");
	while(1)
	{
		printf("ENTER YOUR OPTION\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				do{
				printf("ENTER AN ELEMENT TO BE INSERTED:\n");
				scanf("%d",&val);
				insert(val);
				printf("DO YOU WANT TO ENTER MORE?\n");
				scanf(" %c",&ch);
				}while(ch=='y');
				break;
			case 2:
				val=delete_element();
				if(val!=-1)
				{
					printf("\nTHE NUMBER DELETED IS:%d",val);
				}
				break;
			case 3:
				val=peek();
				if(val!=-1)
				{
					printf("\n THE FIRST VALUE IN QUEUE IS:%d",val);
				}
				break;
			case 4:
				display();
				break;
		}
	}
	return 0;
}

void insert(int val)
{
	if((f==0)&&(r==max-1))
	{
		printf("OVERFLOW\n");
	}
	else if(f==-1&&r==-1)
	{
		f=r=0;
		queue[r]=val;
	}
	else if(r==max-1&&f!=0)
	{
		r=0;
		queue[r]=val;
	}
	else
	{
		r++;
		queue[r]=val;
	}
}
int delete_element()
{
	int val;
	if(f==-1&&r==-1)
	{
		printf("\n UNDERFLOW");
		return -1;
	}
	val=queue[f];
	if(f==r)
	{
		f=r=-1;
	}
	else
	{
		if(f==max-1)
		{
			f=0;
		}
		else
		{
			f++;
		}
	}
	return val;
}
int peek()
{
	if(f==-1&&r==-1)
	{
		printf("\n QUEUE IS EMPTY");
		return -1;
	}
	else
	{
		return queue[f];
	}
}
void display()
{
	int i;
	printf("\n");
	if(f==-1&&r==-1)
	{
		printf("OVERFLOW\n");
	}
	else if(f==0&&r!=max-1)
	{
		for(i=f;i<=r;i++)
		printf("\t %d",queue[i]);
	}
	
	else
	{
		for(i=f;i<max;i++)
		{
			printf("\t %d",queue[i]);
		}
		for(i=0;i<=r;i++)
		{
			printf("\t %d",queue[i]);
		}
	}
}

