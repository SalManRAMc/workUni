#include <stdio.h> 
#include <stdlib.h>

int index = -1;
int isempty(char *stack);
int push(char input);
int pop();
int top();
/**
 *
 *
 */

char stack[10]


int main(int argc, char **argv)
{

}






int push(char newest_item)
{
    if (index >= size) 
	{
		printf("insufficient memory available\n");
		return (-1);
	}
	else
	{
		stack[++index] = newest_item;
		printf("%c inputted in stack\n", stack[*index]);
	}
    return (1);
}

int isempty()
{
	if (*index <= 0)
	{
		printf("stack is empty\n");
		return (0);
	}
	else
		printf("stack isn't empty\n");
	return (1);
}

int pop()
{
	return (--index);
}

int top()
{
	if (index >= 0)
	{
		printf(" %c with index %i is currently at the top of stack\n", stack[index], index);
		return (stack[*index]);
	}
	else
	{
		printf("stack is empty\n");
		return (0);
	}
}

