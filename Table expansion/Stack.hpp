#ifndef STACK_HPP
#define STACK_HPP


#include <iostream>
#include <stdio.h>


using namespace std;


class Stack{

    int *buffer;

    int n;  
    int s;  

public:

    Stack();
    ~Stack();

    void push(int);
    int pop();
    int top();

    int size() const{ return s; }
    int capacity() const{ return n; }

    bool full() const { return s == n; }
    bool empty() const { return s == 0; }

    void print();
};


#endif