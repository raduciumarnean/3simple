#include <iostream>
#include <math.h>
using namespace std;

void treisimple()
{
    float x = 1, y = 1, z = 1, sol = 0;
    int op;
    cin >> op;
    if(op == 1)
    {
        cout << "\n  Y este: ";
        cin >> y;
        cout << "  Z este: ";
        cin >> z;
        sol = (z * y) / 100;
    }
        else if(op == 2)
        {
            cout << "\n  X este: ";
            cin >> x;
            cout << "  Z este: ";
            cin >> z;
            sol = (x * 100) / z;
        }
            else
            {
                cout << "\n  X este: ";
                cin >> x;
                cout << "  Y este: ";
                cin >> y;
                sol = (x * 100) / y;
            }
    cout << "\n Solutia este: " << sol <<"\n";
}

int main()
{
    cout << "\n   X ----------------  Y   \n" << "   Z ---------------- 100   \n\n";
    cout << "  1.X   2.Y   3.Z\n" << "  Necunoscuta: " ;
    int i = 1;
    while(i == 1)
    {
        treisimple();
        cout << "\n Doriti sa mai efectuati un calcul?\n 1.DA   2.NU\n Raspuns: ";
        cin >> i;
    }
    return 0;
}
