#include<stdio.h>

int binarySearch(int arr[], int size, int element)
{
  int low, mid, high;
  low = 0;
  high = size - 1;

  while (low <= high)
  {
    mid = (low + high)/2;

    if (arr[mid] == element)
    {
      return mid;
    }
    if (arr[mid] < element)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    } 
  }
  return -1;
}

int main()
{
  int arr[] = {1,23,45,66,77,88,90,433,221,344,453};
  int size = sizeof(arr)/sizeof(int);
  int element = 88;
  int serachIndex = binarySearch(arr, size, element);
  printf("element %d was found at index %d\n",element,serachIndex);

  return 0;
}



