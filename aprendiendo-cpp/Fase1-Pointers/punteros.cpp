// 1.1 pointers.cpp 


#include <iostream>
using namespace std;

void curar(int* vida, int cura) {
    
    *vida = *vida + cura;
    if (*vida > 100) {
        *vida = 100;
    }
     
}

void intercambiar(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


void recibirDanio(int* vida, int danio) {
    *vida = *vida - danio;
}


int main()
{
    int a = 1, b = 2;
    
    
    intercambiar(&a, &b);
    cout << a << " " << b << endl;


    int valorCuracion = 30;
    int vida = 80;
    curar(&vida, valorCuracion);
    cout << vida;
}

