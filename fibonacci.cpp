#include <iostream>
using namespace std;

int fibonacci(int opt);

int main(int argc, char const *argv[]){
    char option;
    int terminos;
    while(true){
        cout << "Cuantos trminos de la serie de Fibonacci quieres ver?" << endl;
        cin >> terminos;
        fibonacci(terminos);
        cout << "Quieres continuar? [S/N] ";
        cin >> option;
        if(option == 'n' or option == 'N') break;
    }
    return 0;
}

int fibonacci(int opt){
    int a=0, b=1, c;
    if (opt == 0){
        cout << endl;
    }else{
        if(opt == 1) cout << a << endl;
        else if(opt == 2){
            cout << a << endl;
            cout << b << endl;
        }
        else{
            cout << a << endl;
            cout << b << endl;
            for (size_t i = 2; i < opt; i++){
                c =  a + b;
                cout << c << endl;
                a = b;
                b = c;
            }
        }
        
    }
    
    
}

