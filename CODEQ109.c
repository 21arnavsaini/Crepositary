//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>
int main() {
    int n, k, i;
    int arr[21];
    long long windowSum = 0, maxSum;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid value of k");
        return 0;
    }

    windowSum = 0;
    for (i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    maxSum = windowSum;

    for (i = k; i < n; i++) {
        windowSum = windowSum - arr[i - k] + arr[i];
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    printf("%lld", maxSum);
    return 0;
}
