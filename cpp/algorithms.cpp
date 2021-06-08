#include <iostream>
#include <fstream>
#include <string>
#include "algorithms.h"
using namespace std;

// print array
void printArray(int *a, int len){
    for(int i=0;i<len;i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}
void printArray(int *a, int len, ofstream& outFile){
    if (!outFile.is_open()){
        cerr << "Error opening file" << endl;
        return;
    }
    for(int i=0;i<len;i++){
        outFile << a[i] << ' ';
        cout << a[i] << "\t";
    }
    outFile << endl;
    cout << endl;
}
void printArray(int *a, int len, ofstream& outFile, string outFileName){
    outFile.open(outFileName);
    if (!outFile.is_open()){
        cerr << "Error opening file" << endl;
        return;
    }
    for(int i=0;i<len;i++){
        outFile << a[i] << ' ';
        cout << a[i] << "\t";
    }
    outFile << endl;
    cout << endl;
}

void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
    return;
}

int * bubbleSort(int *a, int len)
{
    for(int i = 0; i<len; i++) {
        for(int j = i+1; j<len; j++) {
            if(a[j] < a[i]) {
                swap(a[i], a[j]);
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
// function used in quick sort
int partition(int *a, int lo, int hi){
    int pivot = a[hi], i = lo;
    for (int j = 0; j < (hi-lo); j++){
        if (a[j] < pivot){
            swap(a[i], a[j]);
            i++;
        }
    }
    swap(a[i], a[hi]);
    return i;
}

int * insertionSort(int *a, int len){
    int key, i, j;
    for (i = 1; i < len; i++){
        key = a[i];
        j = i-1;

        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j++;
        }
        a[j+1] = key;
    }
    return a;
}