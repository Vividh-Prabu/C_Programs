cmake_minimum_required(VERSION 4.0)
project(C_Language C)

set(CMAKE_C_STANDARD 11)

add_library(C_Language STATIC library.c
        library.c
        library.c
        Introduction.c
        Scanf.c
        "cmake-build-debug/Conditional Statement.c"
        "Positive Check.c"
        "Leap Year check.c"
        Calculator.c
        "Switch Case.c"
        "For loop.c"
        "While loop.c"
        Factorial.c
        "Do while.c"
        "Sum of digits.c"
        "Armstrong Number.c"
        Reverse.c
        Palindrome.c
        "Prime Number Check.c"
        "Nested Loop.c"
        "Prime check between N.c"
        Arrays.c
        "Sum and Average Array.c"
        "Max and Min.c"
        "String Array.c"
        "String Function.c"
        "2D Array.c"
        Matrix.c
        "Swapping numbers.c"
        Example.c
        "Reverse Array.cpp"
        "Positive number check.cpp"
        "Insertion sort.c"
        "Selection Sort.c"
        "Binary search.c"
        "Merge Sort.c"
        "Linear search.c"
        "Binary Search normal method.c"
        "Bubble sort.c"
        "Array Operations.c"
        "Quick sort.c"
        "Bitwise Operator.c"
        "Swap Without 3rd Variable.c"
        "Fibonacci Series.c"
        "String Read.c"
        Practise.c
        "ASCII Conversion.c"
        "Unique Check.c"
        "Limits Check.c"
        "Merge Unique Values.c"
        "Matrix Symmetric check.c"
        "Remove Duplicate.c"
        "GCD 2 numbers.c"
        "GCD Array.c"
        Realloc.c
        Calloc.c
)
