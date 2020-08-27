#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define max 100
char pop();
void push(char val);
char peek();
int prec(char ch);
void inflix_to_postfix(char e[100]);
char st[max];
int top=-1;
int main()
{
char e[100];
//char postfix[100];
printf("enter an infix expression\n");
gets(e);
inflix_to_postfix(e);
/*printf("postfix expression\n");
puts(postfix);*/
return 0;
}
void inflix_to_postfix(char e[100])
{
int n,j=0,i;
n=strlen(e);
char post[n];
for(i=0;e[i]!='\0';i++)
{
if(isalpha(e[i]))
{
post[j]=e[i];
j++;
}
else if(e[i]=='(')
{
push(e[i]);
}
else if(e[i]==')')
{
while(peek()!='(')
{
post[j]=pop();
j++;
}
pop();
}
else
{
while((prec(e[i])<prec(peek()))&&(peek()!='('))
{
post[j]=pop();
j++;
}
push(e[i]);
}
}
printf("postfix expression\n:");
puts(post);
}
void push(char val)
{
if(top==max-1)
{
printf("overflow\n");
}
else
{
top++;
st[top]=val;
}
}
char pop()
{
char val;
if(top==-1)
{
printf("underflow");
}
else
{
val=st[top];
top--;
}
return val;
}
char peek()
{
char val=st[top];
return val;
}
int prec(char ch)
{
switch(ch)
{
case '*':return 4;
break;
case '/':return 4;
break;
case '+':return 2;
break;
case '-':return 1;
break;
}
}




