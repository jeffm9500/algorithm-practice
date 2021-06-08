#include <iostream>
#include <fstream>
#include <string>
#include "algorithms.h"
using namespace std;

int main() {
    // input a space-delimited file of integers
    string item;
    int data[100], count=0;
    // count is the measured size of the array
    ifstream inFile("../input.txt", ios::in);
    if (inFile.is_open()) {
        cout << "file open, printing input:" << endl;
        while (!inFile.eof()){
            getline(inFile, item, ' ');
            cout << item << "\t";
            data[count++] = stoi(item);
        }
        cout << endl;
    }
    
    ofstream outFile;
    outFile.open("../output.txt");
    int *bubbleOutput, *quickOutput, *insertionOutput;
    // Bubble Sort
    bubbleOutput = bubbleSort(data, count);
    cout << "Bubble sort output:" << endl;
    outFile << "Bubble Sort:\t";
    printArray(bubbleOutput, count, outFile);
    
    // Quick sort
    quickOutput = quickSort(data, 0, count-1);
    cout << "Quick sort output: " << endl;
    outFile << "Quick Sort:\t";
    printArray(quickOutput, count, outFile);
    
    // Insertion sort
    insertionOutput = insertionSort(data, count);
    cout << "Insertion sort output: " << endl;
    outFile << "Insertion Sort:\t";
    printArray(insertionOutput, count, outFile);
    

    void close();
    return 0;
}