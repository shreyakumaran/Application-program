//NAME:SHREYA KUMARAN
//APPLICATION PROGRAM 1:
// to keep the track of students attendence-->therefore sorting the  names in the attendance
//register alphabetically
//TASK: develop a program that takes a list of names in an
//attendance register as input and sorts them alphabetically using the
//quick sort algorithm
//DATE EXCEUTED:02/08/23


#include <stdio.h>
#include <string.h>

void Swap(char *a, char *b) {
//CREATE TEMP VARIABLE OF SIZE 100
    char temp[100];
//SWAP USING strcpy function which copies a string of variableto another
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

int Partition(char arr[][100], int start, int end) {
    char pivot[100];
    strcpy(pivot, arr[end]);

    int i = (start - 1);

    for (int j = start; j <= end - 1; j++) {
//strcmp function compares 2 string
        if (strcmp(arr[j], pivot) < 0) {
            i++;
            Swap(arr[i], arr[j]);
        }
    }
    Swap(arr[i + 1], arr[end]);
    return (i + 1);
}

void QuickSort(char arr[][100], int start, int end) {
    if (start < end) {
        int pi = Partition(arr, start, end);
        QuickSort(arr, start, pi - 1);
        QuickSort(arr, pi + 1, end);
    }
}

int main() {
    int n;

    printf("Enter the number of names in the attendance register: ");
    scanf("%d", &n);

    char names[n][100];

    printf("Enter the names:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    QuickSort(names, 0, n - 1);

    printf("\nSorted list of names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
