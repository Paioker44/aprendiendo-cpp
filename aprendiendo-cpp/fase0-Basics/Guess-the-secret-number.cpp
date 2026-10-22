// Adivina el numero secreto.cpp 


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
    srand(time(0));                     // inicializa el azar (una sola vez, al inicio)
    int numJugador = 0;
    int contador = 0;
    int record = 1000;
    
    bool intentarDeNuevo = true;
    cout << "Let's find a secret number" << endl;
    
    while (intentarDeNuevo != 0) {
        int secreto = rand() % 100 + 1;
        numJugador = 0;
        while (numJugador != secreto) {
            
            cout << "Enter a number(1-100): " << endl;
            cin >> numJugador;
            contador += 1;
            
            if (numJugador < secreto) {
                cout << "Your secret number is greater" << endl;
                
            }
            else if (numJugador > secreto) {
                cout << "Your secret number is smaller" << endl;
                
            }
            else {
                cout << "Congrats, you found it in: " << contador << " tries" << endl;
            }
            


            
        }
        if (contador < record) {
            record = contador;
        }
        
        contador = 0;
        cout << "Do you want to try again?(1/0), previous record: " << record << endl;
        cin >> intentarDeNuevo;
    }
    
    }




