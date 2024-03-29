#include "myQueue.h"

template <class T>
myQueue<T>::myQueue() {
    // Default constructor does nothing
}

template <class T>
void myQueue<T>::enqueue(const T& item) {
    elts.push_back(item); // Insert item at rear
}

template <class T>
T myQueue<T>::dequeue() {
    T front_item = elts.front(); // Get the front item
    elts.erase(elts.begin()); // Remove item from front
    return front_item;
}

template <class T>
bool myQueue<T>::isempty() {
    return elts.empty(); // Check if vector is empty
}
