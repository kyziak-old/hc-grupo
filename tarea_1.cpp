#include <iostream>
#include <cmath>

typedef float real;

const double xinit = 0.0;
const double xend = 1.0;
const double NSTEPS = 100;
const double dx =  (xend - xinit)/NSTEPS;

real funcion(real x);
real funcionmod(real x);

int main(void) {
    std::cout.precision(8); std::cout.setf(std::ios::scientific);
    real x = 0.0;
    for (int ii = 0; ii < NSTEPS; ii++) {
        x = xinit + ii*dx;
        std::cout << ii*dx << " " << funcion(x) << " " << funcionmod(x) << "\n";
    }
    return 0;
}

real funcion(real x){
    return 5 - std::sqrt(25 + x*x);
}
real funcionmod(real x){
    return 5 - std::sqrt((5+x)*(5+x) - 10*x);
}
