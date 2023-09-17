/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
     float a, b, c, x1, x2;
     cin >> a >> b >> c;
     int D = pow(b, 2) - (4*a*c);
    
    if (D > 0) {
       
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        cout << "x1 adalah " << x1 << endl;
        cout << "x2 adalah " << x2 << endl;
     
    } else if (D == 0) {
        double x1 = -b / (2 * a);
        cout << "Akar-akar persamaan: x1 = x2 = " << x1 << endl;
    } 
    else {
        
        x1 = -b / (2 * a) + (sqrt(abs(-D)) / 2*a);
        x2 = -b / (2 * a) - (sqrt(abs(-D)) / 2*a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
      
      
    }
    

    return 0;
}
