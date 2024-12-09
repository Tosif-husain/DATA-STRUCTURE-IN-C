#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

int linkedListTraversal(struct node *ptr)
{
  while (ptr != NULL)
  {
    printf("ELEMENT: %d\n", ptr->data);
    ptr = ptr->next;
  }
}

struct node *deleteFirst(struct node *head)
{
  struct node *ptr = head;
  head = head->next;
  free(ptr);

  return head;
};

int main()
{
  struct node *head;
  struct node *second;
  struct node *third;
  struct node *fourth;

  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));
  fourth = (struct node *)malloc(sizeof(struct node));

  head->data = 234;
  head->next = second;

  second->data = 2354;
  second->next = third;

  third->data = 432;
  third->next = fourth;

  fourth->data = 84;
  fourth->next = NULL;

  printf("LINKEDLIST BEFORE DELETION\n");
  linkedListTraversal(head);

  head = deleteFirst(head);
  printf("LINKEDLIST AFTER DELETION\n");
  linkedListTraversal(head);

  return 0;
}
