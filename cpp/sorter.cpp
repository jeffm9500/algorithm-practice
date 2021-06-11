#include <iostream>
#include <fstream>
#include <string>
#include "algorithms.h"
using namespace std;

int sort(string fileName, string outFileName) {
    cout << "sorting " << fileName << " into " << outFileName << endl;
    // input a space-delimited file of integers
    string item;
    ifstream inFile;
    int data[1000], count=0;
    // count is the measured size of the array
    if (fileName.empty()){
        inFile.open("../input.txt", ios::in);
    } else{
        inFile.open(fileName, ios::in);
    }
    
    if (inFile.is_open()) {
        cout << "file open, printing input:" << endl;
        while (!inFile.eof()){
            getline(inFile, item, ' '); //grab entire line (array)
            cout << item << "\t";
            try {
                data[count++] = stoi(item);
            } catch (invalid_argument &e) {
                cout << e.what() << endl;
                cout << "Invalid input array. Array must be space-separated integers" << endl;
            }
            
        }
        cout << endl;
    }
    
    ofstream outFile;
    if (outFileName.empty()){
        outFile.open("../output.txt");
    } else {
        outFile.open(outFileName);
    }
    
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