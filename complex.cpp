#include "complex.hpp"

        n_complex::n_complex(){
            real=0;
            im=0;
        }
        void n_complex::s_print(){
            printf("El valor es: %d + %d\n", real, im );
            //std::cout<<"El valor es: "<<real<<" " <<im<<"i "<<std::endl;
        }

        n_complex::n_complex(float r, float i){
            real=r;
            im=i;
        }
        n_complex n_complex::operator*(n_complex mult){
            n_complex Result;
            Result.real=real*mult.real-im*mult.im;
            Result.im=im*mult.real+real*mult.im;
            return Result;

        }
        n_complex& n_complex::operator=(n_complex other){
            real=other.real;
            im=other.im;
            return *this;
        }
