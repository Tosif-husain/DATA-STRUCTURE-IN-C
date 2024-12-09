#include<stdio.h>

  int linearSearch(int arr[], int size, int element)
  {
    for (int i = 0; i < size; i++)
    {
      /* code */
      if (arr[i]==element)
      {
        /* code */
        return i;
      }

    }
    return -1;
  }

  int main()
  {
     int arr[] = {1,23,44,56,77,54,56,77};
     int size = sizeof(arr)/sizeof(int);
     int element = 23;
     int searchIndex = linearSearch(arr,size,element);
     printf("THE ELEMENT %d was found at index %d\n",element,searchIndex);

     return 0;
  }

