//Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n; i++) {
        int prev_greater = -1;
        for(int j = 0; j < i; j++) {
            if(arr[j] > arr[i]) {
                prev_greater = arr[j];
                break;
            }
        }
        if(i > 0) printf(", ");
        printf("%d", prev_greater);
    }
    printf("\n");
    return 0;
}
