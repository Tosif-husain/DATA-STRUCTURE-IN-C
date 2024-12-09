#include<stdio.h>
#include<conio.h>

struct node
{
  int data;
  struct node *next;
};

int linkedListTraversal(struct node *ptr)
{
  while (ptr != NULL)
  {
    printf("ELEMENT: %d\n",ptr->data);
    ptr = ptr->next;
  }
  
}

struct node *deleteAtLast(struct node *head)
{
  struct node *p = head;
  struct node *q = head->next;

 while (q->next != NULL)
 {
  p = p->next;
  q = q->next;
 }
 p->next = NULL;
 free(q);

  return head;
}



int main()
{
  struct node *head;
  struct node *second;
  struct node *third;
  struct node *fourth;

  head = (struct node *) malloc(sizeof(struct node));
  second = (struct node *) malloc(sizeof(struct node));
  third = (struct node *) malloc(sizeof(struct node));
  fourth = (struct node *) malloc(sizeof(struct node));

  head->data = 323;
  head->next = second;

  second->data = 3443;
  second->next = third;

  third->data = 333;
  third->next = fourth;

  fourth->data = 765;
  fourth->next = NULL;

  linkedListTraversal(head);
  printf("\n");

  head = deleteAtLast(head);
  linkedListTraversal(head);
}