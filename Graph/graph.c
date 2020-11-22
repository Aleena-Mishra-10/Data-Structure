#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct adj;
struct node 
{
char city;
struct node *next;
struct adj *link;
};
struct adj
{
struct node *adj1;
struct adj *link;
};
struct node *g=NULL;
void add_vertex(char v)
{
struct node *t;
struct node *new=(struct node *)malloc(sizeof(struct node));
new->city=v;
new->next=NULL;
new->link=NULL;
if(g==NULL)
{
g=new;
}
else
{
t=g;
while(t->next!=NULL)
{
if(t->city==v)
{
printf("city present");
return ;
}
else{
t=t->next;
}
}
t->next=new;
}
}
void add_edge(char sv,char ev)
{
struct node *t,*ptr;
struct adj *p;
if(g==NULL)
{
printf("empty");
}
else
{
t=g;
while(t->city!=sv)
{
t=t->next;
}
}
ptr=g;
while(ptr->city!=ev)
{
ptr=ptr->next;
}
struct adj *new=(struct adj *)malloc(sizeof(struct adj));
new->adj1=ptr;
new->link=NULL;
if(t->link==NULL)
{
t->link=new;
}
else
{
p=t->link;
while(p->link!=NULL)
{
p=p->link;
}
p->link=new;
}
}
void print_vertex(char v)
{
struct node *t=g;
struct node *ptr;
struct adj *p,*p1;
if(g==NULL){
printf("empty");
}
else
{
while(t->city!=v)
{
t=t->next;
}
ptr=t;
}
p=ptr->link;
if(p==NULL)
{
printf("no adjacent node");
}
else
{
p1=ptr->link;
while(p1!=NULL)
{
printf("%c",p1->adj1->city);
p1=p1->link;
}
}
}
void display_vertex()
{
struct node *t=g;
while(t!=NULL)
{
printf("%c\n|\n",t->city);
t=t->next;
}
}
int main()
{
char v,ch,ch1,ch2,ch3;
int opt;
printf("1.add vertex\n");
printf("2,creation of edge\n");
printf("3.print adjacent\n");
printf("4.display graph\n");
while(1)
{
printf("enter option ");
scanf("%d",&opt);
switch(opt)
{
case 1:
do
{
printf("enter a city name\n");
scanf(" %c",&v);
add_vertex(v);
printf("do you want to enter more?");
scanf(" %c",&ch);
}while(ch=='y');
break;
case 2:
printf("enter scource and destination for edge\n");
scanf(" %c%c",&ch1,&ch2);
add_edge(ch1,ch2);
break;
case 3:
printf("enter vertex for edge");
scanf(
print_vertex('a');
break;
case 4:
display_vertex();
break;
}
}
return 0;
}

