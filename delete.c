#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node *create(){
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

struct node *First(struct node *head, int val) {
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  ptr->next = head;
  ptr->data = val;

  return ptr;
}

struct node *Last(struct node *head, int val) {
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  struct node *p = head;

  while (p->next != NULL)
  {
    p = p->next;
  }
  ptr->data = val;
  p->next = ptr;
  ptr->next = NULL;

  return head;
}

struct node *Index(struct node *head, int val, int ind) {
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  struct node *p = head;
for (int i = 0; i < ind-1; i++)
{
  p = p->next;
}
ptr->data = val;
ptr->next = p->next;
p->next = ptr;

return head;
}

struct node *Dfirst(struct node *head) {
  struct node *ptr = head;

  head = head->next;
  free(ptr);

  return head;
}

struct node *Dlast(struct node *head) {
  struct node *p = head;
  struct node *q = head->next;

  while (q->next != NULL)
  {
    p = p->next;
    q = q->next;
  }
  p->next = q->next;
  free(q);
  return head;
}

struct node *Dindex(struct node *head, int index) {
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
int main() {
  struct node *head;
  head = (struct node *)malloc(sizeof(struct node));

  head = create();
  display(head);

  printf("\n");
  head = First(head,1);
  display(head);

  printf("\n");
  head = Last(head,10);
  display(head);

  printf("\n");
  head = Index(head,110,3);
  display(head);

  printf("\n");
  head = Dfirst(head);
  display(head);

  printf("\n");
  head = Dlast(head);
  display(head);

  printf("\n");
  head = Dindex(head,2);
  display(head);
}