#include <iostream>
#include <fstream>
#include <string>
#include "algorithms.h"
using namespace std;

int main() {
    string item;
    int data[100], count=0;
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
    int* output;
    // Bubble Sort
    output = bubbleSort(data, count);
    cout << "Bubble sort output:" << endl;
    outFile << "Bubble Sort:\t";
    for(int i=0;i<count;i++){
        outFile << output[i] << ' ';
        cout << output[i] << "\t";
    }
        
    output = quickSort(data, 0, count-1);
    cout << endl << "Quick sort output: " << endl;
    outFile << endl << "Quick Sort:\t";
    for(int i=0;i<count;i++){
        outFile << output[i] << ' ';
        cout << output[i] << "\t";
    }
    

    void close();
    return 0;
}