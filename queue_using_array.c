#include<stdio.h>
#include<stdlib.h>

struct queue{
  int size;
  int f;
  int r;
  int *arr;
};

int isEmpty(struct queue *ptr) {

  return ptr->f == ptr->r;
}

int isFull(struct queue *ptr){

  return ptr->r == ptr->size-1;
}

void enqueue(struct queue *ptr,int val) {
  if (isFull(ptr))
  {
    printf("cannot enqueue");
  }
  ptr->r++;
  ptr->arr[ptr->r] = val;
  printf("enqueued element %d\n",val);
}

int dequeue(struct queue *ptr){
  if (isEmpty(ptr))
  {
    printf("cannot dequeue");
  }
  ptr->f++;
  return ptr->arr[ptr->f];
}

void main() {
  struct queue *q;

  q->size = 30;
  q->f=q->r= -1;
  q->arr = (int *)malloc(q->size * sizeof(int));

  enqueue(q,1);
  enqueue(q,2);
  enqueue(q,3);

  printf("dequeue element %d\n",dequeue(q));
  printf("dequeue element %d\n",dequeue(q));
  printf("dequeue element %d\n",dequeue(q));

  if (isEmpty(q))
  {
    printf("queue is empty");
  }
   if (isFull(q))
  {
    printf("queue is full");
  }
}