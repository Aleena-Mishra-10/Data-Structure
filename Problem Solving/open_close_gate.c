#include <stdio.h>
int top = -1,c=0;
char stack[100];

// function prototypes
void push(char);
void pop();
void find_top();
int main()
{
int i;
char a[100];
printf("enter expression\n");
scanf("%s", &a);
for (i = 0; a[i] != '\0';i++)
{
if (a[i] == '(')
{
push(a[i]);
}
else if (a[i] == ')')
{
pop();
}
}
find_top();
return 0;
}

// to push elements in stack
void push(char a)
{
stack[top] = a;
top++;
}

// to pop elements from stack
void pop()
{
if (top == -1)
{
printf("-1");
exit(0);
}
else
{
top--;
c++;
}
}

// to find top element of stack
void find_top()
{
if (top == -1)
printf("%d",c);
else
printf("-1");
}


