#include<stdio.h>

void swap(int v[], int i, int j) {
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void qsort(int v[], int left, int right) {
    int i, last;

    if(left >= right)
        return;
    swap(v, left, (left + right) / 2);
    last = left;
    for(i = last + 1; i <= right; i++)
        if(v[i] < v[left])
            swap(v, ++last, i);
    qsort(v, left, last - 1);
    qsort(v, last+1, right);
}

int main() {

    return 0;
}