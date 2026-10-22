// EnemyGenerator.cpp 

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;


int findUpperNum(int arr[], int tam) {
    int numEnemy = 0;
    int upper = arr[0];
    for (int i = 0; i < tam; i++) {
        
        if (upper < arr[i]) {
            upper = arr[i];
            numEnemy = i;
        }
    }
    return numEnemy;
}

int main()
{
    srand(time(0));
    int enemys;
    int biggestEnemy = 0;
    cout << "How many enemies do you want?" << endl;
    cin >> enemys;

    int* life = new int[enemys];

    for (int i = 0; i < enemys; i++) {
        life[i] = rand() % 51 + 50;
        cout <<"Enemy "<< i + 1 <<": " << life[i] << " of life" << endl;
    }
    biggestEnemy = findUpperNum(life, enemys);
    cout<<"The strongest enemy is the #" << biggestEnemy + 1;
    
    delete[] life;
}
