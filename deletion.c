// #include<stdio.h>

// void display(int arr[], int n)
// {
//   //CODE FOR TRAVERSAL
//   for (int i = 0; i < n; i++)
//   {
//     /* code */
//     printf("%d\n",arr[i]);
//   }
//     printf("\n");
// }

// void indDeletion(int arr[], int size, int index)
// {
//   //CODE FOR DELETION
//   for (int i = index; i < size-1; i++)
//   {
//     /* code */
//     arr[i] = arr[i + 1];
//   }
  
// }

// int main()
// {
//   int arr[100] = {1, 2, 3, 4, 5};
//   int size = 5, index = 0;
//   display(arr,size);
//   indDeletion(arr, size, index);
//   size -= 1;
//   display(arr,size);
//   return 0;
// }

#include<stdio.h>

void display(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    /* code */
    printf("%d\n",arr[i]);
  }
    printf("\n");
}

void indDelertion(int arr[], int size, int index)
{
  for (int i = index; i < size -1; i++)
  {
    /* code */
    arr[i] = arr[i+1];
  }
  
}

int main() 
{
  int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = 10, index = 9;
  display(arr, size);
  indDelertion(arr, size, index);
  size -= 1;
  display(arr, size);
  return 0;
}