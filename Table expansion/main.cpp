#include <cstdlib>
#include <ctime>
#include "Stack.hpp"


int main(){

    srand((unsigned)time(nullptr));

    Stack pila;
    int n;

    cout << "Entrada: ";
    cin >> n;
    cout << "\nSalida\n";

    for(int i = 0; i < (n * 4); i++){

        if ((rand() % 100 + 1) <= 50) {

            int value = rand() % (10 * n) + 1;

            printf("ins: %i ", value);
            pila.push(value);

        }else{

            printf("out: %i ", pila.top());
            pila.pop();
        }
        pila.print();
    }

    return 0;
}