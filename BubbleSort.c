#include <stdio.h>
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5, 6, 4, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
ALGORITHM
Step1:Starting with the first element(index = 0), compare the current element with the next element of the array.
Step2:If the current element is greater than the next element of the array, swap them.
Step3:If the current element is less than the next element, move to the next element. Repeat Step 1.

TIME COMPLEXITY
Best Case:O(n)
Average Case:O(n2)
Worst Case:O(n2)
