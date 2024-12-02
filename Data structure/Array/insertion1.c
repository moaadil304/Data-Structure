#include <stdio.h>

void insert(int arr[], int n, int pos, int size) {
    // Shift elements to the right to make space for the new element
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = n; // Insert the new element
}

void printArray(int arr[], int size) {                                                                                                                                                                                     
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5}; 
    int n = 6; // Element to insert
    int pos = 4; // Position to insert at
    int size = 5; // Current number of elements in the array

    // Call the insert function
    insert(arr, n, pos, size);

    // Print the updated array
    printArray(arr, size + 1); // Size increases by 1 after insertion

    return 0;
}
