#include<stdio.h>
#include<stdlib.h>

struct stack {
  int top;
  int size;
  int *arr;
};

int isEmpty(struct stack *ptr){
  // if (ptr->top == -1)
  // {
  //   return 1;
  // }
  // else{
  //       return 0; 
  // }
  return ptr->top == -1;
  
}

int isFull(struct stack *ptr){
  // if (ptr->top == ptr->size-1)
  // {
  //   return 1;
  // }
  // else{
  //   return 0;
  // }
  return ptr->top == ptr->size-1;
}

void push(struct stack *ptr, int val){
  if(isFull(ptr)){
    printf("stack is overflow! cannot push %d\n",val);
  }
  else{
    ptr->top ++;
    ptr->arr[ptr->top] = val;
    printf("element %d\n",val);
  }
}

int pop(struct stack *ptr){
  if (isEmpty(ptr))
  {
    printf("stack is underflow cannot pop\n");
    return-1;
  }
  else{
    ptr->top--;
    return ptr->arr[ptr->top];
  }
}

int peek(struct stack *ptr, int i){
  int index = ptr->top-i+1;
  if (index < 0)
  {
    printf("invalid peek oparetion\n");
  }
  return ptr->arr[index];
}

int stackTop(struct stack *ptr){
  return ptr->arr[ptr->top];
}

int stackBottom(struct stack *ptr){
  return ptr->arr[0];
}

int main(){
  struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
  sp->top = -1;
  sp->size = 5;
  sp->arr = (int *)malloc(sp->size * sizeof(int));

  printf("before pushing, full: %d\n", isFull(sp));
  printf("before pushing, empty: %d\n", isEmpty(sp));

  push(sp,103);
  push(sp,105);
  push(sp,106);
  push(sp,107);
  push(sp,108); //pushed 5 values...
  // push(sp,108); //stack overflow!...

  printf("after pushing, full: %d\n", isFull(sp));
  printf("after pushing, empty: %d\n", isEmpty(sp));

  printf("\nstack top %d\n",stackTop(sp));
  printf("stack Bottom %d\n",stackBottom(sp));

  printf("\npopped %d from the stack\n", pop(sp));
  printf("popped %d from the stack\n", pop(sp));

  for (int j = 0; j < sp->top + 1; j++)
  {
    printf("\nthe value at index %d is %d\n",j, peek(sp,j));
  }
  

  return 0;
}

