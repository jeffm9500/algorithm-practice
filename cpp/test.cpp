#include <iostream>
#include <fstream>
#include <string>
#include "algorithms.h"
using namespace std;

int main(int argc, char *argv[]){
    // to run multiple tests, use multiple input files and run the program that way
    cout << "Running " << argc << " tests" << endl;
    string out = "../output", outFile;

    //run all tests, with the command line arguments as input file names for arrays to sort
    if (argc > 1) {
        for (int i=1;i<argc;i++){
            cout << "test: " << i << endl;
            outFile = out + to_string(i) + ".txt";
            string inFile(argv[i]);
            sort(inFile, outFile);
        }
    } else {
        // No command line arguments given
        sort("../input.txt", "../output.txt");
    }
    


    return 0;
}