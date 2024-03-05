#include<stdio.h>

void shellsort(int a[], int n) {
    int gap, i, j, temp;
    for(gap = n/2; gap > 0; gap/=2) {
        for(i = gap; i < n; i++) {
            for(j = i - gap; j>=0 && a[j] > a[j + gap]; j-=gap) {
                temp = a[j];
                a[j] = a[j+gap];
                a[j+gap] = temp;
            }
        }
    }
}

int main() {
    int a [] = {8,7,6,5,4,3,2,1};
    int n = sizeof(a) / sizeof(a[0]);

    shellsort(a, n);

    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    printf("\n");

    return 0;
}

