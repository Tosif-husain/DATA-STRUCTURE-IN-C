// #include<stdio.h>
// #include<stdlib.h>

// struct node{
//   int data;
//   struct node *next;
//   struct node *prev;
// };

// struct node *create()
// {
//   struct node *head, *second, *third;

//   head = (struct node *)malloc(sizeof(struct node));
//   second = (struct node *)malloc(sizeof(struct node));
//   third = (struct node *)malloc(sizeof(struct node));

//   head->data = 2;
//   head->next = second;

//   second->data = 3;
//   second->next = third;

//   third->data = 4;
//   third->next = NULL;

//   return head;
// }

// void display(struct node *ptr)
// {
//   while (ptr != NULL)
//   {
//     printf("%d\n",ptr->data);
//     ptr = ptr->next;
//   }
  
// }

// struct node *insertAtFirst(struct node *head, int value)
// {
//   struct node *ptr = (struct node *)malloc(sizeof(struct node));
//   ptr->data = value;
//   ptr->next = head;
//   head->prev = ptr;
//   ptr->prev = NULL;
//   head = ptr;

//   return head; 
// }

// struct node *insertAtLast(struct node *head, int value)
// {
//   struct node *ptr = (struct node *)malloc(sizeof(struct node));
//   struct node *p = head;

//   while (p->next != NULL)
//   {
//     p = p->next;
//   }
//   ptr->data = value;
//   p->next = ptr;
//   ptr->prev = p;
//   ptr->next = NULL;

//   return head;
// }

// struct node *insertAtBetween(struct node *head, int value, int index)
// {
//   struct node *ptr = (struct node *)malloc(sizeof(struct node));
//   struct node *p = head;
//   struct node *q = head->next;

//   for (int i = 0; i < index-1; i++)
//   {
//     p = p->next;
//     q = q->next;
//   }
//   ptr->data = value;
//   p->next = ptr;
//   ptr->next = q;
//   ptr->prev = p;
 
//  return head;
// }

// struct node *deleteAtFirst(struct node *head)
// {
//   struct node *p = head;

//   head = head->next;
//   free(p);

//   return head;
// }

// struct node *deleteAtLast(struct node *head)
// {
//   struct node *p = head;
//   struct node *q = head->next;

//   while (q->next != NULL)
//   {
//     p = p->next;
//     q = q->next;
//   }
//   p->next = NULL;
//   free(q);
  
//   return head;
// }

// struct node *deleteAtBetween(struct node *head, int index)
// {
//   struct node *p = head;
//   struct node *q = head->next;

//   for (int i = 0; i < index-1; i++)
//   {
//     p = p->next;
//     q = q->next;
//   }
//   p->next = q->next;
//   free(q);
  
//   return head;
// }

// void main()
// {
//   struct node *head;
//   head = (struct node *)malloc(sizeof(struct node));

//   head = create();
//   display(head);
//   printf("\n");

//   head = insertAtFirst(head,1);
//   display(head);
//   printf("\n");

//   head = insertAtLast(head,5);
//   display(head);
//   printf("\n");
  
//   head = insertAtBetween(head,50,2);
//   display(head);
//   printf("\n");

//   head = deleteAtFirst(head);
//   display(head);
//   printf("\n");

//   head = deleteAtLast(head);
//   display(head);
//   printf("\n");

//   head = deleteAtBetween(head,2);
//   display(head);
//   printf("\n");
// }


#include<stdio.h>
#include<stdlib.h>

struct node{
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

  second->data = 3;
  second->next = third;

  third->data = 4;
  third->next = NULL;

  return head;
}

void display(struct node *ptr)
{
  while (ptr != NULL)
  {
    printf("%d\n",ptr->data);
    ptr = ptr->next;
  } 
}

struct node *insertAtFirst(struct node *head, int value)
{
  struct node *ptr = (struct node *)malloc(sizeof(struct node));

  ptr->data = value;
  ptr->next = head;
  head->prev = ptr;
  ptr->prev = NULL;
  
  return ptr;
}

struct node *insertAtLast(struct node *head, int value)
{
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  struct node *p = head;

  while (p->next != NULL)
  {
    p = p->next;
  }
  ptr->data = value;
  p->next = ptr;
  ptr->prev = p;
  ptr->next = NULL;

  return head;
}

struct node *insertAtBetween(struct node *head, int value, int index)
{
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  struct node *p = head;
  struct node *q = head->next;

  for (int i = 0; i < index-1; i++)
  {
    p = p->next;
    q = q->next;
  }
  ptr->data = value;
  p->next = ptr;
  ptr->prev = p;
  ptr->next = q;

  return head;  
}

struct node *deleteAtFirst(struct node *head)
{
  struct node *ptr = head;

  head = head->next;
  free(ptr);

  return head;
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
  p->next = q->next;
  free(q);
  
  return head;
}

struct node *deleteAtBetween(struct node *head, int index)
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

void main()
{
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

  head = insertAtBetween(head,5,2);
  display(head);
  printf("\n");

  head = deleteAtFirst(head);
  display(head);
  printf("\n");

  head = deleteAtLast(head);
  display(head);
  printf("\n"); 

  head = deleteAtBetween(head,2);
  display(head);
  printf("\n");
}
