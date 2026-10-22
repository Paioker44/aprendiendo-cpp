#include <iostream>
using namespace std;

int countVocals(string text, int tam) {
    int cont = 0;                  
    for (int i = 0; i < tam; i++) { 

        if(text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u'){
            cont += 1;
        }
    }
    return cont;
}

int main() {
    string name = "Paolo";
    cout << countVocals(name, name.size());   
}