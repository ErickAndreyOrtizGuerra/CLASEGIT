#include <iostream>
using namespace std;
void saludar();
void sumar(int a, int b);

int main(){
    saludar();
    sumar();
    return 0;
}
void saludar(){
    cout <<"hola mundo"<<endl;
}
void sumar(int a, int b){
    cout << a+b;
}
