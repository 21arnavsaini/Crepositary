//Q59: Count even and odd numbers in an array.
#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;

    // Ask for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Ask for the array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Display results
    printf("\nEven=%d, Odd=%d\n", even, odd);

    return 0;
}

