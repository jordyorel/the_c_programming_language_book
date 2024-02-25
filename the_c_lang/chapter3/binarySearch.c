#include<stdio.h>

int binarysearch(int x, int v[], int n) {
    size_t low, high, mid;  
    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;
        if(x < v[mid]) 
            high = mid - 1;
        else if(x > v[mid]) 
            low = mid + 1;
        else 
            return mid;
    }
    return -1;
}

int main() {
    int x = 6;
    int v[10] = {1,2,3,4,5,6};
    int n = sizeof(v) / sizeof(v[0]);

    printf("Element %d is at index %d.\n", x, binarysearch(x, v, n));

    return 0;
}