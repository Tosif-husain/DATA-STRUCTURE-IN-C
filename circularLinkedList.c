#include<stdio.h>
#include<stdlib.h>

// struct node {
//   int data;
//   struct node *next;
// };

// void display(struct node *head) {
//   struct node *ptr = head;
//   do{
//     printf("%d\n",ptr->data);
//     ptr = ptr->next;
//   } while (ptr != head);
  
// }

// struct node *InsertAtFirst(struct node *head, int value) {
//   struct node *ptr = (struct node *)malloc(sizeof(struct node));
//   struct node *p = head->next;

//   while (p->next != head)
//   {
//     p = p->next;
//   }
//   ptr->data = value;
//   p->next = ptr;
//   ptr->next = head;
//   head = ptr;

//   return head;
// }

// struct node *create() {

//   struct node *head, *second, *third;

//   head = (struct node *)malloc(sizeof(struct node));
//   second = (struct node *)malloc(sizeof(struct node));
//   third = (struct node *)malloc(sizeof(struct node));

//   head->data = 1;
//   head->next = second;

//   second->data = 2;
//   second->next = third;

//   third->data = 3;
//   third->next = head;

//   return head;
// }

// int main() {
//   struct node *head;

//   head = create();
//   display(head);

//   printf("\n");
//   head = InsertAtFirst(head,0);
//   display(head);
// }

struct node{

  int data;
  struct node *next;
};

struct node *create() {
  struct node *head, *second, *third;

  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));

  head->data = 20;
  head->next = second;

  second->data = 21;
  second->next = third;

  third->data = 22;
  third->next = head;

  return head;
}

void display(struct node *head) {
  struct node *ptr = head;
  do
  {
    printf("%d\n",ptr->data);
    ptr = ptr->next;
  } while (ptr != head);
  
}

struct node *InsertAtFirst(struct node *head, int value) {
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  struct node *p = head->next;
  while (p->next != head){

    p = p->next;    
  }
  p->next = ptr;
  ptr->next = head;
  ptr->data = value;
  head = ptr;

  return head;
}

struct node *InsertAtBetween(struct node *head, int value, int index) {
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  struct node *p = head;

  for (int i = 0; i < index-1; i++)
  {
    p = p->next;
  }
  ptr->next = p->next;
  p->next = ptr;
  ptr->data = value;

  return head;
}

struct node *InsertAtLast(struct node *head, int value) {
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  struct node *p = head;
  while (p->next != head){
    
    p = p->next;
  }
  p->next = ptr;
  ptr->next = head;
  ptr->data = value;

  return head;
}



struct node *dfirst(struct node *head){
  struct node *p = head;
  struct node *q = head;
  while(p->next != head){
    p = p->next;
  }
  head = head->next;
  p->next = head;
  free(q);

  return head;
}

struct node *DeleteAtBetween(struct node *head, int index) {
  struct node *q = head;
  struct node *p = head->next;

  for (int i = 0; i < index-1; i++)
  {
    p = p->next;
    q = q->next;
  }
  q->next = p->next;
  free(p);

  return head;
}

struct node *DeleteAtLast(struct node *head) {
  struct node *q = head;
  struct node *p = head->next;

  while (p->next != head)
  {
    p = p->next;
    q = q->next;
  }
  q->next = head;
  free(p);

  return head;
}

int main() {

  struct node *head;

  head = create();
  display(head);

  printf("\ninsert at first\n");
  head = InsertAtFirst(head,19);
  display(head);

  printf("\ninsert at between\n");
  head = InsertAtBetween(head,101,2);
  display(head);

  printf("\ninsert at last\n");
  head = InsertAtLast(head,111);
  display(head);

  // printf("\ndelete at first\n");
  // head = DeleteAtFirst(head);
  // display(head);
   printf("\ndelete at first\n");
  head = dfirst(head);
  display(head);

  printf("\ndelete at Between\n");
  head = DeleteAtBetween(head,2);
  display(head);

  printf("\ndelete at Last\n");
  head = DeleteAtLast(head);
  display(head);

  return 0;
}
