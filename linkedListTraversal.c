// #include<stdio.h>
// #include<stdlib.h>

// struct Node
// {
//   int data;
//   struct Node *next;
// };

// void linkedListTravarsal(struct Node *ptr)
// {
//   while (ptr != NULL)
//   {
//     printf("ELEMENT: %d\n",ptr->data);
//     ptr = ptr->next;
//   }
  
// }

// int main()
// {
//    struct Node *head;
//    struct Node *second;
//    struct Node *third;
//    struct Node *fourth;

//    //Allocated memory for nodes in the linked list in Heap

//    head = (struct Node *)malloc(sizeof (struct Node));
//    second = (struct  Node *)malloc(sizeof(struct Node));
//    third = (struct Node *)malloc(sizeof(struct Node));
//    fourth = (struct Node *)malloc(sizeof(struct Node));

//    head->data = 10;
//    head->next = second;

//    second->data = 120;
//    second->next = third;

//    third->data = 130;
//    third->next = fourth;

//    fourth->data = 155;
//    fourth->next = NULL;

//     linkedListTravarsal(head);
// }

#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

int linkedListTraversal(struct node *ptr)
{
  while (ptr != NULL)
  {
    printf("element: %d\n",ptr->data);
    ptr = ptr->next;
  }
  
}

int main()
{
 struct node * head;
 struct node * second;
 struct node * third;
 struct node * fourth;

 head = (struct node *) malloc(sizeof(struct node));
 second = (struct node *) malloc(sizeof(struct node));
 third = (struct node *) malloc(sizeof(struct node));
 fourth = (struct node *) malloc(sizeof(struct node));

 head->data = 34;
 head->next = second;

 second->data = 87;
 second->next = third;

 third->data = 32;
 third->next = fourth;

 fourth->data = 843;
 fourth->next = NULL;

 linkedListTraversal(head);

  return 0;
}