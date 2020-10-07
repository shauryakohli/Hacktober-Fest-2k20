#include<stdio.h>
#include<stdio.h>
#define MAX_SIZE 10
typedef struct
{
	int arr[MAX_SIZE];
	int top;
}STACK;
int isFull(STACK *s)
{
	if((s->top)==MAX_SIZE-1)
	return 1;
	else
	return 0;
}
int isEmpty(STACK *s)
{
	if((s->top==-1))
	return 1;
	else
	return 0;
}
void push(STACK *s,int i)
{	
	if(!isFull(s))
	{
		s->top=s->top+1;
		s->arr[s->top]=i;
	}
}	
int pop(STACK *s)
{
	if(!isEmpty(s))
	{
		return s->arr[(s->top)--];
	}
}
int op(int a,int b,char c)
{
	if(c=='+')
	return a+b;
	else if(c=='-')
	return a-b;
	else if(c=='*')
	return a*b;
	else
	return a/b;
}
int main(void)
{
	STACK s,*ptr=&s;
	s.top=-1;
	char input[MAX_SIZE];
	int len=0;
	printf("Enter a prefix expression\n");
	scanf("%s",input);
	while(input[len]!='\0')
	len++;
	for(int i=0;i<len;i++)
	{
		int x=input[len-i-1]-'0';
		if(x>=0 && x<=9)
			push(ptr,x);
		else
		{
			char symbol=input[len-i-1];
			int op1=pop(ptr);
			int op2=pop(ptr);
			push(ptr,op(op1,op2,symbol));
		}
	}
	printf("\nThe value of the expression is %d\n",pop(ptr));
}
