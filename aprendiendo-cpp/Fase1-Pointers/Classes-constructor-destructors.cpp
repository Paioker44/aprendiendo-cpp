// Classes-constructor-destructors.cpp 
//Lección 1.4

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


class Enemigo {
private:                       
    string nombre;
    int vida;
    int ataque;

public:                        
    Enemigo(string n, int v, int a) {         
        nombre = n;
        vida = v;
        ataque = a;
        cout << nombre << " aparece" << endl;
    }

    ~Enemigo() {                       
        cout << nombre << " desaparece" << endl;
    }

    bool estaVivo() const {
        return vida > 0;
    }

    void atacar(Enemigo& otro) {
        if (!estaVivo()) {
            return;
        }
        otro.recibirDanio(ataque);
    }

    void recibirDanio(int danio) {
        vida = vida - danio;
        cout << nombre << " recibio: " << danio << endl;
        if (vida <= 0) {

            vida = 0;
            
            cout << nombre << " murio" << endl;

        }
    }

    void curar(int cura) {
        vida = vida + cura;
        if (vida > 100) {
            vida = 100;
        }
    }

    void mostrar() const{
        cout << "Vida de " << nombre << ": " << vida<<endl;
        
    }

  
  
    

};
    
class EnemyGenerator {
private: 
    int* vidas;
    int cantidad;

public:
    EnemyGenerator(int c) {
        srand(time(0));
            
        cantidad = c;
        vidas = new int[c];
        for (int i = 0; i < c; i++) {
            vidas[i] = rand() % 51 + 50;
        }
    }
    ~EnemyGenerator() {
        cout << "horda terminada";
        delete[] vidas; 
    }

    void mostrar() {
        for (int j = 0; j < cantidad; j++) {
            cout << "Enemigo " << j + 1 << ": " << vidas[j] << " de vida" << endl;
        }
    }


    int indiceMasFuerte() {
        int numEnemy = 0;
        int upper = vidas[0];
        for (int i = 0; i < cantidad; i++) {
                
            if (upper < vidas[i]) {
                upper = vidas[i];
                numEnemy = i;
            }
        }
        return numEnemy;
    }
};



int main() {
    Enemigo goblin("Goblin", 90, 60);   // imprime "Goblin aparece"
    Enemigo Ogro("Ogro", 130, 90);

    while (Ogro.estaVivo() && goblin.estaVivo()) {
                
        
        Ogro.atacar(goblin);
        goblin.atacar(Ogro);
        
        
    }


    //int cant;
    //cout << "ingresa la cantidad de enemigos: ";
    //cin >> cant;


    //EnemyGenerator enemigos(cant);
    //enemigos.mostrar();
    //cout << "El enemigo mas fuerte es el #" << enemigos.indiceMasFuerte() + 1 << endl;
       
}


       
}

