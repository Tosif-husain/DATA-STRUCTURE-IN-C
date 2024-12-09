#include <stdio.h>

void display(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d\n", arr[i]);
  }
}

// void bubbleSort(int *arr, int size) {
//   int temp;
//   for (int i = 0; i < size-1; i++)
//   {
//     printf("working number in pass %d\n",i+1);
//     for (int j = 0; j < size-1-i; j++)
//     {
//       if (arr[j] > arr[j+1])
//       {
//         temp = arr[j];
//         arr[j] = arr[j+1];
//         arr[j+1] = temp;
//       }

//     }

//   }

// }

void bubbleSortAdaptive(int arr[], int size)
{
  int temp;
  int isSorted = 0;
  for (int i = 0; i < size - 1; i++)
  {
    printf("working pass on this array %d\n", i + 1);
    isSorted = 1;
    for (int j = 0; j < size - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        isSorted = 0;
      }
    }
    if (isSorted)
    {
      return;
    }
  }
}

int main()
{
  int arr[] = {12, 32, 1, 2, 3, 4, 5, 100};
  int size = sizeof(arr) / sizeof(int);

  display(arr, size);
  // printf("\n");
  // bubbleSort(arr, size);
  // display(arr,size);
  printf("\n");
  bubbleSortAdaptive(arr, size);
  display(arr, size);

  return 0;
}