#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
float st[100];
int top=-1;
void push(float st[],float val);
float pop(float st[]);
float evaluate(char exp[]);
float evaluate(char exp[100])
{
int i=0;
float op1,op2,val;
while(exp[i]!='\0')
{
if(isdigit(exp[i]))
{
push(st,(float)(exp[i]-'0'));
}
else
{
op2=pop(st);
op1=pop(st);
switch(exp[i])
{
case '+':
val=op1+op2;
break;
case '-':
val=op1-op2;
break;
case '*':
val=op1*op2;
break;
case '/':
val=op1/op2;
break;
}
push(st,val);
}
i++;
}
return pop(st);
}
void push(float st[100],float val)
{
if(top==99)
{
printf("overflow\n");
}
else
{
top++;
st[top]=val;
}
}
float pop(float st[])
{
float val;
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
int main()
{
float val;
char exp[100];
printf("enter a postfix expression\n");
gets(exp);
val=evaluate(exp);
printf("%.2f",val);
return 0;
}


