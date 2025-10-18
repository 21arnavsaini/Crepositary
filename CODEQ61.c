//Q61 Search for an element in an array using linear search.
#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    // Traverse the array from start to end
    for (int i = 0; i < n; i++) {
        // If element matches the key, return index
        if (arr[i] == key) {
            return i;
        }
    }
    // If key is not found, return -1
    return -1;
}

int main() {
    int n, key;
    
    // Read the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Read array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read the key to search
    printf("Enter element to search: ");
    scanf("%d", &key);
    
    // Perform linear search
    int result = linearSearch(arr, n, key);
    
    // Display result
    if (result != -1) {
        printf("Found at index %d\n", result);
    } else {
        printf("%d\n", result); // Print -1 for not found
    }
    
    return 0;
}
