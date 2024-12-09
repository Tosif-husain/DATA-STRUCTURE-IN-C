#include <stdio.h>

void display(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d\n", arr[i]);
  }
}

void insertion_sort(int *arr, int size)
{

  int key, j;

  for (int i = 0; i < size; i++)
  {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

void main()
{
  int arr[20];
  int size;

  printf("enter number: ");
  scanf("%d", &size);
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
    printf("\n");
  }

  display(arr, size);
  printf("\n");
  insertion_sort(arr, size);
  display(arr, size);
}