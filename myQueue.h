#ifndef MYQUEUE_H
#define MYQUEUE_H

#include <vector>
#include <string>

template <class T>
class myQueue {
public:
    myQueue(); // Default constructor

    void enqueue(const T& item); // Insert item at rear
    T dequeue(); // Remove item from front
    bool isempty(); // Check if queue is empty

protected:
    std::vector<T> elts; // Vector to store elements
};

#include "myQueue.cpp" // Include the implementation file

#endif
