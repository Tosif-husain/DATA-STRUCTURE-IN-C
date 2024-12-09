#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node *create() {
  struct node *head, *second, *third;

  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));

  head->data = 2;
  head->next = second;

  second->data = 3;
  second->next = third;

  third->data = 4;
  third->next = NULL;

  return head;
}

void display(struct node *ptr) {
  while (ptr != NULL)
  {
   printf("%d\n",ptr->data);
   ptr = ptr->next;
  }
  
}

struct node *insertAtFirst(struct node *head, int value) {
  struct node *ptr = (struct node *)malloc(sizeof(struct node));

  ptr->data = value;
  ptr->next = head;

  return ptr;
}

struct node *insertAtLast(struct node *head, int value) {
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  struct node *p = head;

  while (p->next != NULL)
  {
    p = p->next;
  }
  ptr->data = value;
  p->next = ptr;
  ptr->next = NULL;
  
  return head;
}

struct node *insertAtIndex(struct node *head, int value, int index) {
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  struct node *p = head;
  for (int i = 0; i < index-1; i++)
  {
    p = p->next;
  }
  ptr->data = value;
  ptr->next = p->next;
  p->next = ptr;

  return head;
}

int main() {
  struct node *head;

  head = (struct node *)malloc(sizeof(struct node));

  head = create();
  display(head);
  printf("\n");

  head = insertAtFirst(head,1);
  display(head);
  printf("\n");

  head = insertAtLast(head,5);
  display(head);
  printf("\n");

  head = insertAtIndex(head,51,3);
  display(head);
  printf("\n");
  
}