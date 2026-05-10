#include <stdio.h> 
#include <stdbool.h>

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
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

