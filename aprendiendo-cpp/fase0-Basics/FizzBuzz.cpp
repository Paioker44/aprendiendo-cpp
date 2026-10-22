#include <iostream>
using namespace std;

int main(){

    for(int num = 0; num < 101; num ++){
        if(num % 3 == 0 && num % 5 == 0){
            cout<<"FizzBuzz"<<endl;
        }else if(num % 3 == 0){
            cout<<"Fizz"<<endl;
        }else if(numero % 5 == 0){
            cout<<"Buzz"<<endl;
        }else{
            cout<<num<<endl;
        }
    }
}