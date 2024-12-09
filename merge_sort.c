#include<stdio.h>

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}

void merge(int arr[], int low, int mid, int high) {
    int i, j, k, b[40];  // Temporary array b[40]
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            b[k] = arr[i];
            i++;
            k++;
        } else {
            b[k] = arr[j];
            j++;
            k++;
        }
        
    }

    while (i <= mid) {
        b[k] = arr[i];
        i++;
        k++;
    }

    while (j <= high) {
        b[k] = arr[j];
        j++;
        k++;
    }

    for (i = low; i <= high; i++) {
        arr[i] = b[i];
    }
}

void merge_sort(int arr[], int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

void main() {
    int arr[] = {23, 45, 67, 89, 21};
    int size = 5;
    display(arr, size);

    printf("\n");
    merge_sort(arr, 0, size - 1);  // Corrected to pass size - 1

    printf("Sorted array:\n");
    display(arr, size);
}