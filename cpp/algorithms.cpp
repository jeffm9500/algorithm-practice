#include <iostream>
#include "algorithms.h"
using namespace std;

int * bubbleSort(int *a, int len)
{
    int temp;
    for(int i = 0; i<len; i++) {
        for(int j = i+1; j<len; j++) {
            if(a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return a;
}

int * quickSort(int *a, int lo, int hi){
    if (hi > lo){
        int p = partition(a, lo, hi);
        quickSort(a, lo, p-1);
        quickSort(a, p+1, hi);
    }
    return a;
}

int partition(int *a, int lo, int hi){
    int pivot = a[hi], i = lo, temp;
    for (int j = 0; j < (hi-lo); j++){
        if (a[j] < pivot){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
        }
    }
    temp = a[i];
    a[i] = a[hi];
    a[hi] = temp;
    return i;
}