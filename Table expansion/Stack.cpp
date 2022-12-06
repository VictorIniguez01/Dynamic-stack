#include "Stack.hpp"


Stack::Stack(){

    n = 1;
    s = 0;
    buffer = new int[n];
}

Stack::~Stack(){ delete [] buffer; }

void Stack::push(int newValue){

    if(full()){

        n *= 2;
        int *t = new int[n];

        for(int i = 0; i < size(); i++) t[i] = buffer[i];

        delete [] buffer;
        buffer = t;
    }

    buffer[s] = newValue;
    s++;
}

int Stack::pop(){

    if(empty()){
        
        printf("POP DENIED ");
        return 0;
    } else if(size() == (capacity() / 4)){
        
        n /= 2;
        int *t = new int[n];

        for(int i = 0; i < size(); i++) t[i] = buffer[i];

        delete [] buffer;
        buffer = t;
    }

    s--;
    return buffer[s];
}

int Stack::top(){

    if(empty()){ return 0; }
    return buffer[s - 1];
}

void Stack::print(){

    cout << "[";
    for(int i = 0; i < n; i++){ (i < size()) ? printf(" %i", buffer[i]) : printf("  "); }
    cout << " ]\n";
}