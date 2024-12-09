#include<stdio.h>

void display(int *arr, int size) {
  for (int i = 0; i < size; i++)
  {
    printf("%d\n",arr[i]);
  }
  
}
 
void selection_sort(int *arr, int size) {
  int temp, minIndex;
  for (int i = 0; i < size-1; i++)
  {
    minIndex = i;
    for (int j = i+1; j < size; j++)
    {
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
      
    }
    temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
  }
  
}

void main() {
  int arr[20];
  int size;

  printf("enter number: ");
  scanf("%d",&size);
  for (int i = 0; i < size; i++)
  {
    scanf("%d",&arr[i]);
  }

  display(arr,size);
  printf("\n");
  selection_sort(arr,size);
  display(arr,size);
}