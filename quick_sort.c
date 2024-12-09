#include<stdio.h>

void display(int arr[], int size) {
  for (int i = 0; i < size; i++)
  {
    printf("%d\n",arr[i]);
  } 
}

int partition(int arr[], int low, int high) {
  int pivot = arr[low];
  int i = low + 1;
  int j = high;
  int temp;

  do
  {
    while (arr[i] <= pivot)
    {
      i++;
    }
    while (arr[j] > pivot)
    {
      j--;
    }
    if (i < j)
    {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    } 
  } while (i < j);

  temp = arr[low];
  arr[low] = arr[j];
  arr[j] = temp;
  
  return j;
}

void quick_sort(int arr[], int low, int high) {
  int partitionIndex;
  if (low < high)
  {
    partitionIndex = partition(arr,low,high);
    quick_sort(arr,low,partitionIndex-1);
    quick_sort(arr,partitionIndex+1,high);
  }
  
}

void main() {
  int arr[] = {15,14,13,12,11,10};
  int size = sizeof(arr)/sizeof(int);
  display(arr,size);
  printf("\n");
  quick_sort(arr,0,size-1);
  display(arr,size);

}