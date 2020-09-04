#include <iostream>
#include <math.h>
#include <cstdio>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    cout << "\t" << "_________________________________________________________________" << "\n" << endl;
    cout << "\t" << "x" << "\t" << "\t" <<"\t"<< "f(x)" << "\t" << "\t" << "\t" << "Modificacion f(x)" << "\t" << endl;
    cout << "\t" << "_________________________________________________________________" << "\n" << endl;
    
for (float i = 0; i <= 1; i = i + 0.01) {
        cout << '\t' << scientific <<std::setprecision(3) << i << '\t' << '\t' << std::setprecision(6) << 5 - sqrt(25 + (i * i)) 
        << '\t' << "\t"<< std::setprecision(8) <<5 - sqrt(25 + (i * i))<< '\t'
        << endl; 
    }
    return 0;
}