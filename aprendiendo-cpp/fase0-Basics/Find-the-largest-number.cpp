
#include <iostream>
using namespace std;

int findUpperNum(int arr[], int tam) {
    
    int upper = arr[0];
    for (int i = 0; i < tam; i++) {
        
        if(upper < arr[i]){
            upper = arr[i];
        }
    }
    return upper;
}

int main() {
    int puntuation[] = {-5, -2, -8};
    cout << findUpperNum(puntajes, 3);   
}