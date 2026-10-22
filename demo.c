
#include <stdio.h>

int main() {
    int a[100], n, i;
    int currentSum, maxSum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    currentSum = a[0];
    maxSum = a[0];

    for (i = 1; i < n; i++) {
        if (currentSum + a[i] < a[i]) {
            currentSum = a[i];
        } else {
            currentSum = currentSum + a[i];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("Maximum subarray sum = %d\n", maxSum);

    return 0;
}
