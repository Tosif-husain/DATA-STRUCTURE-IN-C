// #include<stdio.h>
// #include<stdlib.h>

// struct node 
// {
//   int data;
//   struct node *next;
// };

// int traversal(struct node *ptr)
// {
//   while (ptr != NULL)
//   {
//     printf("%d\n",ptr->data);
//     ptr = ptr->next;
//   }
  
// }

// struct node *insertAtFirst(struct node *head, int value)
// {
//   struct node *ptr = (struct node*)malloc(sizeof(struct node));

//   ptr->next = head;
//   ptr->data = value;

//   return ptr;

// }


// struct node *insertAtIndex(struct node *head, int value, int index)
// {
//   struct node *ptr = (struct node *)malloc(sizeof(struct node));

//   struct node *p = head;

//   int i = 0;
//   while(i != index-1)
//   {
//     p = p->next;
//     i++;
//   }
//   ptr->data = value;
//   ptr->next = p->next;
//   p->next = ptr;

//   return head;
// }




// int main()
// {
//   struct node *head;
//   struct node *second;
//   struct node *third;

//   head = (struct node *) malloc(sizeof(struct node));
//   second = (struct node *) malloc(sizeof(struct node));
//   third = (struct node *) malloc(sizeof(struct node));

//   head->data = 23;
//   head->next = second;

//   second->data = 54;
//   second->next = third;

//   third->data = 98;
//   third->next = NULL;

//   traversal(head);
//   printf("\n");

//   head = insertAtIndex(head,60,1);
//   traversal(head);

//   printf("\n");
//   head = insertAtFirst(head,90);
//   traversal(head);

  

//   return 0;
// }

