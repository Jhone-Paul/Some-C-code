#include <stdlib.h>
#include <stdio.h>

void q_sort(int *, int, int);
void swap(int *, int *);
int partition(int *, int, int);

int main()
{
    int i =0;
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int N = sizeof(arr) / sizeof(arr[0]);
 
    
    q_sort(arr, 0, N - 1);
    printf("Sorted array: \n");
    for (i = 0; i < N; i++){
     	   printf("%d ", arr[i]);
    }
    return 0;
}

void q_sort(int *arr, int i, int j) {
    if (i < j) {
        int pivot = partition(arr, i, j);
        q_sort(arr, i, pivot - 1);
        q_sort(arr, pivot + 1, j);
    }
}

int partition(int *arr, int i, int j) {
    int pivot = arr[j];
    int temp = i - 1;
    int k;

    for (k = i; k < j; k++) {
        if (arr[k] <= pivot) {
            temp = temp + 1;
            swap(&arr[k], &arr[temp]);
        }
    }
    swap(&arr[temp + 1], &arr[j]);
    return temp + 1;
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

