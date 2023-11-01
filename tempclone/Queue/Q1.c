nclude <stdio.h>
#include <stdlib.h>
int front = -1, back = -1, size = 0;
int queue[10];

int enqueue(int x){
  if (size < 10)
  {
      back = (back + 1) % 10;
      size += 1;
      queue[back] = x;
      printf("%d inserted into queue\n",x);
      return(1);
    }
  else 
  {
      printf("queue is full");
      return(0);
    }
}

int dequeue(){
  if (size > 0)
  {
      front = (front + 1) % 10;
      size -= 1;
      return (1);
      printf("%d removed from queue\n", queue[front]);
    }
  else 
    return (0);
}

int frontq()
{
  if (size > 0)
  {
      printf("front of queue is %d\n", queue[front + 1]);
      return(1);
    }
  else
    return (0);
}

int isempty()
{
  if (size == 0)
    return (1);
  else
    return (0);
}

int main()
{
    enqueue(5);
    frontq();
    enqueue(6);
    frontq();
    dequeue();
    frontq();
}
