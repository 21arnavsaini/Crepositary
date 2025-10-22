//Q68: Delete an element from an array.
#include <stdio.h>

int main() {
    int n, pos;
    printf("Enter array size\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Tell which index element to be deleted\n");
    scanf("%d", &pos);
    for(int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    printf("Array after deletion\n");
    for(int i = 0; i < n - 1; i++)
        printf("%d ", arr[i]);
    return 0;
}