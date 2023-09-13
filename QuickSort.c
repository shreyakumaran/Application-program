#include<stdio.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
// Partition the array using the last element as the pivot
int partition(int arr[], int s, int e)
{
    // Choosing the pivot
    int pivot = arr[e];
 
    
    int i = (s - 1);
 
    for (int j = s; j <= e - 1; j++) {
 
        
        if (arr[j] < pivot) {
 
            
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[e]);
    return (i + 1);
}
 

void quickSort(int arr[], int s, int e)
{
    if (s < e) {
 
        
        int p = partition(arr, s, e);
 
        
        quickSort(arr, s, p - 1);
        quickSort(arr, p + 1, e);
    }
}
 

int main()
{
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int N = sizeof(arr) / sizeof(arr[0]);
 
    
    quickSort(arr, 0, N - 1);
    printf("Sorted array: \n");
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    return 0;
}
