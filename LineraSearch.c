#include <stdio.h>
int linearSearch(int arr[], int n, int key) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      return i;
    }
  }
  return -1;
}
int main() {
  int arr[] = {10, 20, 30, 40, 50};
  int n = sizeof(arr) / sizeof(arr[0]);
  int key = 30;
  int index = linearSearch(arr, n, key);
  if (index == -1) {
    printf("Element not found");
  } else {
    printf("Element found at index %d", index);
  }
  return 0;
}
ALGORITHM
Linear Search ( Array A, Value x)

Step 1: Set i to 1
Step 2: if i > n then go to step 7
Step 3: if A[i] = x then go to step 6
Step 4: Set i to i + 1
Step 5: Go to Step 2
Step 6: Print Element x Found at index i and go to step 8
Step 7: Print element not found
Step 8: Exit

TIME COMPLEXITY
Best Case:O(1)
Average Case:O(n)
Worst Case:O(n)
