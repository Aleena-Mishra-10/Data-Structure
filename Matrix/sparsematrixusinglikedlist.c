#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int v;
	int r;
	int c;
	struct node *next;
};
struct node *create(struct node *head1,struct node *head2,struct node *head3,int v,int r,int c,int m,int n,int q);
void display(struct node *head);
struct node* concatenate(struct node *a,struct node *b);
void add(struct node *v);
struct node *multiply(struct node *head1,struct node *head2,struct node *head3,int n,int c);
struct node *create(struct node *head1,struct node *head2,struct node *head3,int v,int r,int c,int m,int n,int q)
{	
	struct node* t1=head1;
	struct node* t2=head2;
	struct node* t3=head3;
	struct node *t;
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->v=v;
	new->r=r;
	new->c=c;
	new->next=NULL;
	if(q==1){
	if(t1==NULL)
	{	
		t1=(struct node *)malloc(sizeof(struct node));
		t1->r=m;
		t1->c=n;
		t1->next=new;
		t1->v=0;
		(t1->v)++;	
	}
	else
	{
		t=t1;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=new;
		(t1->v)++;
	}
	return t1;
}
	else if(q==2){
if(t2==NULL)
	{	t2=(struct node *)malloc(sizeof(struct node));
		t2->r=m;
		t2->c=n;
		t2->next=new;
		t2->v=0;
		(t2->v)++;	
	}
	else
	{
		t=t2;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=new;
		(t2->v)++;
	}
	return t2;
}
else if(q==3){
if(t3==NULL)
	{	t3=(struct node *)malloc(sizeof(struct node));
		t3->r=m;
		t3->c=n;
		t3->next=new;
		t3->v=0;
		(t3->v)++;	
	}
	else
	{
		t=t3;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=new;
		(t3->v)++;
	}
	return t3;
}
}
void display(struct node *head)
{
	struct node *t,*r,*s;
	t=r=s=head;
	printf("ROW:");
	while(t!=NULL)
	{
		printf("%d\t",t->r);
		t=t->next;
	}
	printf("\n");
	printf("COLUMN:");
	while(r!=NULL)
	{
		printf("%d\t",r->c);
		r=r->next;
	}
	printf("\n");
	printf("VALUE:");
	while(s!=NULL)
	{
		printf("%d\t",s->v);
		s=s->next;
	}
	printf("\n");
}
struct node* concatenate(struct node *a,struct node *b)
{
	struct node *p=NULL;
	a->v=a->v+b->v;
	if(a==NULL)
	{
		return b;
	}
	if(b==NULL)
	{
		return a;
	}
	p=a;
	while(p->next!=NULL)
	{
	p=p->next;	
	}
	p->next=b->next;
    return a;
}
void add(struct node *v)
{	
	struct node *t1=v->next,*t2=v->next,*prev;
	for(;t1!=NULL;t1=t1->next)
	{
		prev=t2;
		t2=t1->next;
		while(t2!=NULL)
		{
			if((t1->r!=t2->r)||(t1->c!=t2->c))
			{
				prev=t2;
				t2=t2->next;
			}
			/*else if(t1->r==t2->r)
			{
				if(t1->c!=t2->c)
				{
					prev=t2;
					t2=t2->next;
				}
			}*/
			else if((t1->r==t2->r)&&(t1->c==t2->c))
				if(t1->v+t2->v!=0)
				{
					t1->v=t1->v+t2->v;
					prev->next=t2->next;
					t2=t2->next;
				}
		}
	}
}
struct node *multiply(struct node *head1,struct node *head2,struct node *head3,int n,int c)
{
	struct node *t1=head1->next;
	struct node *t2=head2->next;
	for(;t1!=NULL;t1=t1->next)
	{
		for(;t2!=NULL;t2=t2->next)
		{
			if(t1->c==t2->r)
			{
			head3=create(head1,head2,head3,(t1->v)*(t2->v),t1->r,t2->c,n,c,3);
			}	
		}
	}
	return head3;
	
}
int main()
{	
	struct node *head1=NULL;
	struct node *head2=NULL;
	struct node *head3=NULL;
	int n,m,a[30][30],b[30][30],i,j,c,d,opt;
	printf("1.ENTER FOR MATRIX 1\n");
	printf("2.ENTER FOR MATRIX 2\n");
	printf("3.CONCATENATION\n");
	printf("4.ADDITION\n");
	printf("5.MULTIPLICATION\n");
	while(1)
	{
		printf("enter your choice\n");
		scanf("%d",&opt);
	switch(opt)
	{
	case 1:
	printf("enter size for 1st matrix\n");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
			head1=create(head1,head2,head3,a[i][j],i,j,m,n,1);
			}
		}
	}
	display(head1);
	break;
	case 2:
	printf("enter size for 2nd matrix\n");
	scanf("%d%d",&c,&d);
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			if(b[i][j]!=0)
			{
			head2=create(head1,head2,head3,b[i][j],i,j,c,d,2);
			}
		}
	}
	display(head2);
	break;
	case 3:
		head1=concatenate(head1,head2);
		display(head1);
		break;
	case 4:
		add(head1);
		display(head1);
		break;
	case 5:
	head3=multiply(head1,head2,head3,n,c);
		display(head3);
		break;
	case 6:
		exit(0);
		break;
}
}
	return 0;
}
