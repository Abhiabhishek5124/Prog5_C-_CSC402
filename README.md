# Generic Queue Implementation in C++

## Overview
This C++ program demonstrates the implementation of a **generic queue** using templates. The queue supports three data types: `int`, `string`, and `double`. The program reads data from an input file, enqueues the data into respective queues, and then dequeues and displays the elements. This project highlights the use of **templates**, **file handling**, and **custom data structures** in C++.

## Features
- **Generic Queue**: A template-based queue implementation that works with any data type.
- **File Handling**: Reads data from an input file and enqueues it into the appropriate queue.
- **Queue Operations**: Supports `enqueue`, `dequeue`, and `isempty` operations.
- **Dynamic Data Handling**: Processes integers, strings, and doubles from the input file.

## Programming Concepts Used
1. **Templates**:
   - The `myQueue` class is implemented as a template to support multiple data types (`int`, `string`, `double`).
   - This allows the queue to be reusable and type-agnostic.

2. **File Handling**:
   - The program reads data from an input file using `ifstream`.
   - It processes integers, strings, and doubles dynamically based on the file content.

3. **Custom Data Structure**:
   - The queue is implemented using a `std::vector` to store elements.
   - Provides basic queue operations: `enqueue`, `dequeue`, and `isempty`.

4. **User Input**:
   - The program prompts the user to enter the file path for the input file.
   - Handles file opening errors gracefully.

5. **Queue Operations**:
   - **Enqueue**: Adds an element to the rear of the queue.
   - **Dequeue**: Removes and returns the element from the front of the queue.
   - **IsEmpty**: Checks if the queue is empty.

## How to Run
1. **Compile the Code**:
   - Compile the program using a C++ compiler (e.g., `g++`):
     ```bash
     g++ -o generic_queue main.cpp myQueue.cpp -std=c++11
     ```

2. **Prepare the Input File**:
   - Create an input file with the following format:
     ```
     3       // Number of integers
     10 20 30
     2       // Number of strings
     Hello World
     3       // Number of doubles
     1.1 2.2 3.3
     ```

3. **Run the Program**:
   - Execute the compiled program:
     ```bash
     ./generic_queue
     ```
   - Enter the path to the input file when prompted.

4. **Observe the Output**:
   - The program will display the dequeued integers, strings, and doubles in sequence.

## Code Structure
- **`myQueue.h`**:
  - Defines the `myQueue` class template.
  - Declares queue operations: `enqueue`, `dequeue`, and `isempty`.

- **`myQueue.cpp`**:
  - Implements the `myQueue` class methods.

- **`main.cpp`**:
  - Reads data from the input file.
  - Enqueues data into the appropriate queue.
  - Dequeues and displays the elements.

## Dependencies
- **C++ Compiler**: Ensure you have a C++ compiler installed (e.g., `g++`).
- **C++11 or Later**: The program uses features from C++11, such as templates and file handling.

## Future Enhancements
- **Error Handling**: Add robust error handling for invalid file formats or data.
- **Dynamic File Path**: Allow the user to specify the file path as a command-line argument.
- **Extended Data Types**: Support additional data types (e.g., `char`, `float`).
- **Queue Size Limit**: Implement a maximum size for the queue to prevent memory overflow.

---

This README provides a professional overview of the program, including **programming concepts used**, **features**, **how to run**, **code structure**, **dependencies**, and **future enhancements**. It’s ready to be used as your project's `README.md` file.
