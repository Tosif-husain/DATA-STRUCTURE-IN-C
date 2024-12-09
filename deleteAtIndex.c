#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

int linkedListTravesal(struct node *ptr)
{
  while (ptr!=NULL)
  {
    printf("ELEMENT: %d\n",ptr->data);
    ptr = ptr->next;
  }
  
}

struct node *deleteAtIndex(struct node *head, int index)
{
  struct node *p = head;
  struct node *q = head->next;

  for (int i = 0; i < index-1; i++)
  {
    p = p->next;
    q = q->next;
  }
  p->next = q->next;
  free(q);

  return head;
}

int main()
{
  struct node *head;
  struct node *second;
  struct node *third;
  struct node *fourth;
  struct node *fifth;

  head = (struct node*) malloc(sizeof(struct node));
  second = (struct node*) malloc(sizeof(struct node));
  third = (struct node*) malloc(sizeof(struct node));
  fourth = (struct node*) malloc(sizeof(struct node));
  fifth = (struct node*) malloc(sizeof(struct node));

  head->data = 234;
  head->next = second;

  second->data = 534;
  second->next = third;

  third->data = 533;
  third->next = fourth;

  fourth->data = 643;
  fourth->next = fifth;

  fifth->data = 960;
  fifth->next = NULL;

  linkedListTravesal(head);
  printf("\n");

  head = deleteAtIndex(head,3);
  linkedListTravesal(head);

  return 0;
}