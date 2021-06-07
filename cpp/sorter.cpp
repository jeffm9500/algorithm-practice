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
    try {
        output=bubbleSort(data, count);
        cout << "printing output:" << endl;
        for(int i=0;i<count;i++){
            outFile << output[i] << ' ';
            cout << output[i] << "\t";
        }
        
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    void close();
    return 0;
}