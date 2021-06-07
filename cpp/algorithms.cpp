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