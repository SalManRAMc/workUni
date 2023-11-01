#include <stdio.h> 
#include <stdlib.h>

char input[50] = { '(',')',')' };
int isempty();
int push(char input);
int pop();
int top();
/**
 *
 *
 */
int ind = -1;
int flag = -1;
int size = 10;
char stack[10];


int main(int argc, char **argv)
{
	int i = 0;
	while(input[i])
	{
		if(input[i] == '(')
			flag++;
		else
		{
			flag--;
		}
		i++;
	}

	if (flag >= 0 || flag < -1)
		printf("brackets statement is unbalanced\n");
	else
		printf("Statement is balanced\n");
	return (0);
}






int push(char newest_item)
{
    if (ind >= size) 
	{
		printf("insufficient memory available\n");
		return (-1);
	}
	else
	{
		stack[++ind] = newest_item;
		printf("%c inputted in stack\n", stack[ind]);
	}
    return (1);
}

int isempty()
{
	if (ind <= 0)
	{
		printf("stack is empty\n");
		return (1);
	}
	else
		printf("stack isn't empty\n");
	return (0);
}

int pop()
{
	return (--ind);
}

int top()
{
	if (ind >= 0)
	{
		printf(" %c with ind %i is currently at the top of stack\n", stack[ind], ind);
		return (stack[ind]);
	}
	else
	{
		printf("stack is empty\n");
		return (0);
	}
}

