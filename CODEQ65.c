//Q65 Search in a sorted array using binary search.
#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d sorted elements: ", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int target;
    printf("Enter element to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);
    if (result != -1)
        printf("Found at index %d\n", result);
    else
        printf("-1\n");

    return 0;
}