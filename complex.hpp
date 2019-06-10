#ifndef COMPLEX_HPP
#define COMPLEX_HPP
#include <iostream>
class n_complex{
public:
        n_complex();
        n_complex(float r, float i);
        n_complex operator*(n_complex mult);
        n_complex& operator=(n_complex other);
        void s_print();

private:
    float real;
    float im;

};

#endif // COMPLEX_HPP
