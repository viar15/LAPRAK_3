/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int bulan;
    
    cin >> bulan;
    
    switch (bulan){
        case 1 :
        cout << "Januari memiliki 31 hari." << endl;
            break;
          case 2 :
        cout << "Februari memiliki 28 hari." << endl;
            break;
          case 3 :
        cout << "Maret memiliki 31 hari." << endl;
            break;
          case 4 :
        cout << "April memiliki 30 hari." << endl;
            break;
          case 5 :
        cout << "Mei memiliki 31 hari." << endl;
            break;
          case 6 :
        cout << "Juni memiliki 30 hari." << endl;
            break;    
          case 7 :
        cout << "July memiliki 31 hari." << endl;
            break;
          case 8 :
        cout << "Agustus memiliki 31 hari." << endl;
            break;
          case 9 :
        cout << "September memiliki 30 hari." << endl;
            break;
          case 10 :
        cout << "Oktober memiliki 31 hari." << endl;
            break;
          case 11 :
        cout << "November memiliki 30 hari." << endl;
            break;
          case 12 :
        cout << "Desember memiliki 31 hari." << endl;
            break;
            
        default:
         cout << "Pilih bulan diantara 1 sampai 12" << endl;
             
    }

    return 0;
}
