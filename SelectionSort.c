#include <stdio.h>
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5, 6, 4, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
ALGORITHM
Step1:Make a variable (say min_index) and initialize it to the location 0 of the array.
Step2:Traverse the whole array to find the smallest element in the array.
Step3:While traversing the array, if we find an element that is smaller than min_index then swap both these elements.
Step4:After which, increase the min_index by 1 so that it points to the next element of the array.
Step5:Repeat the above process until the whole array is sorted.

TIME COMPLEXITY
Best Case:O(n2)
Average Case:O(n2)
Worst Case:O(n2)
