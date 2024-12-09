#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
  struct node *prev;
};

struct node *create()
{
  struct node *head, *second, *third;

  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));

  head->data = 2;
  head->next = second;
  head->prev = NULL;

  second->data = 3;
  second->next = third;
  second->prev = head;

  third->data = 4;
  third->next = NULL;
  third->prev = second;

  return head;
}

void display(struct node *ptr)
{
  while (ptr != NULL)
  {
    printf("%d\n", ptr->data);
    ptr = ptr->next;
  }
}

struct node *reverse(struct node *head)
{
  struct node *current = head;
  struct node *temp = NULL;

  while (current != NULL)
  {
    temp = current->prev;
    current->prev = current->next;
    current->next = temp;
    current = current->prev; // Move to the next node in the original list
  }

  // After the loop, temp points to the old head.
  // The new head is the last valid node we processed.
  if (temp != NULL)
  {
    head = temp->prev; // Adjust head to point to the new head
  }

  return head;
}

void main()
{
  struct node *head;

  head = create();
  printf("Original List:\n");
  display(head);

  printf("\nReversed List:\n");
  head = reverse(head); // Assign the return value to head
  display(head);
}
