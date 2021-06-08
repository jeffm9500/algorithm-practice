#ifndef ALROGITHMS_H
#define ALGORITHMS_H

#include <iostream>
#include <fstream>
#include <string>

// helper functions
void printArray(int *a, int len);
void printArray(int *a, int len, std::ofstream& outFile);
void printArray(int *a, int len, std::ofstream& outFile, std::string outFileName);
void swap(int& x, int& y);


// sorting algorithms
int * bubbleSort(int *a, int len);
int * quickSort(int *a, int lo, int hi);
int partition(int *a, int lo, int hi); //helper function for quicksort
int * insertionSort(int *a, int len);



#endif