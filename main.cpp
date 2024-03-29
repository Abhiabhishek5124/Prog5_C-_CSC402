#include <iostream>
#include <fstream>
#include "myQueue.h"

using namespace std;

int main() {
    myQueue<int> intQueue;
    myQueue<string> stringQueue;
    myQueue<double> doubleQueue;

    string filepath;
    cout << "Enter the input file path: ";
    cin >> filepath;

    ifstream inputFile(filepath);
    if (!inputFile.is_open()) {
        cout << "Error opening file. Exiting program." << endl;
        return 1;
    }

    int numInts;
    inputFile >> numInts;

    int intValue;
    for (int i = 0; i < numInts; i++) {
        inputFile >> intValue;
        intQueue.enqueue(intValue);
    }

    int numStrings;
    inputFile >> numStrings;
    string stringValue;
    inputFile.ignore(); // Ignore newline character
    for (int i = 0; i < numStrings; i++) {
        getline(inputFile, stringValue);
        stringQueue.enqueue(stringValue);
    }

    int numDoubles;
    inputFile >> numDoubles;
    double doubleValue;
    for (int i = 0; i < numDoubles; i++) {
        inputFile >> doubleValue;
        doubleQueue.enqueue(doubleValue);
    }

    inputFile.close(); // Close the input file

    cout << "\nQueued Integers\n";
    while (!intQueue.isempty()) {
        cout << intQueue.dequeue() << endl;
    }

    cout << "\nQueued Strings\n";
    while (!stringQueue.isempty()) {
        cout << stringQueue.dequeue() << endl;
    }

    cout << "\nQueued Doubles\n";
    while (!doubleQueue.isempty()) {
        cout << doubleQueue.dequeue() << endl;
    }

    cout << "\nProgram execution completed.\n";
    return 0;
}
