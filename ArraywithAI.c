#include <stdio.h> 
#include <stdbool.h>

bool isSorted(int arr[], int n) {
    if (n == 0 || n == 1) return true;
    return (arr[0] <= arr[1]) && isSorted(arr + 1, n - 1);
}

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int n1 = 5;
    
    if (isSorted(arr1, n1)) {
        printf("Array 1: true\n");
    } else {
        printf("Array 1: false\n");
    }
    
    int arr2[] = {90, 80, 100, 70, 40, 30};
    int n2 = 6;
    
    if (isSorted(arr2, n2)) {
        printf("Array 2: true\n");
    } else {
        printf("Array 2: false\n");
    }
    
    return 0;
}

