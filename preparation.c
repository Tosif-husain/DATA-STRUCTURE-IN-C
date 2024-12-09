#include<stdio.h>
#include<stdlib.h>

void display(int arr[], int size){
  for (int i = 0; i < size; i++)
  {
    printf("%d\n",arr[i]);
  }
}

void bubbleSort(int arr[], int size){
  int temp;
  for (int i = 0; i < size-1; i++)
  {
    for (int j = 0; j < size-1-i; j++)
    {
      if (arr[j] > arr[j+1])
      {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
      
    }
    
  }
  
}

void insertionSort(int arr[], int size){
  int key,j;
  for (int i = 0; i < size; i++)
  {
    key = arr[i];
    j = i-1;
    while(j >= 0 && arr[j] > key){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = key;
  }
  
}

void selectionSort(int arr[], int size){
  int minIndex,temp;
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
    temp = arr[minIndex];
    arr[minIndex] = arr[i];
    arr[i] = temp;
  }
  
}

int partition(int arr[], int low, int high){
  int pivot = arr[low];
  int i = low+1;
  int j = high;
  int temp;

  do{
      while (arr[i] <= pivot)
      {
         i++;
      }
      while (arr[j] > pivot)
      {
        j--;
      }
      if(i < j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
      
  }while(i < j);
  temp = arr[low];
  arr[low] = arr[j];
  arr[j] = temp;

  return j;
}

void quickSort(int arr[], int low, int high){
  int partitionIndex;
  if(low < high){
  partitionIndex = partition(arr,low,high);
  quickSort(arr,low,partitionIndex-1);
  quickSort(arr,partitionIndex+1,high);
  }
}

void main(){
  int arr[20];
  int size;
  printf("enter size: ");
  scanf("%d",&size);
  for (int i = 0; i < size; i++)
  {
    scanf("%d",&arr[i]);
  }
  
  display(arr,size);
  printf("\n");
  // bubbleSort(arr,size);
  // insertionSort(arr,size);
  // selectionSort(arr,size);
  quickSort(arr,0,size-1);
  display(arr,size);


}