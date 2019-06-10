#include "fibonacci.h"
#include <iostream>
using namespace std;
void fibonacci(){
    int opt;
    
        cout << "Cuantos trminos de la serie de Fibonacci quieres ver?" << endl;
        cin >> opt;
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