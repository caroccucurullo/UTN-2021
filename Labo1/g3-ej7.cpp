/**7) Hacer un programa que permita ingresar el sueldo de 10 empleados y
determine:
- El sueldo máximo.
- El sueldo mínimo.
- El sueldo promedio.
- Cantidad de sueldos mayores a $50000.
*/
#include <iostream>
using namespace std;


int main()
{
    float sueldo, sueldo_max, sueldo_min, sueldo_prom;
    int x, contmax=0;

    for (x=1; x<=10; x++)
    {
        cout << "INGRESE SU SUELDO: ";
        cin >> sueldo;

        if (x==1)
        {
            sueldo_max = sueldo;
            sueldo_min = sueldo;
        }
        if (x>1)
        {
            if (sueldo_max < sueldo)
            {
                sueldo_max = sueldo;
            }
            if (sueldo_min > sueldo)
            {
                sueldo_min = sueldo;
            }
        }
         if(sueldo>50000){
            contmax++;
        }


        sueldo_prom = sueldo_prom + sueldo;
    }

    float promedio = sueldo_prom / 10;

    cout << endl;
    cout << "El maximo es: " << sueldo_max;
    cout << endl;
    cout << "El minimo es: " << sueldo_min;
    cout << endl;
    cout << "El promedio es: " << promedio;
    cout << endl;
    cout << "La cantidad de sueldos mayores a $50.000 son: "<<contmax;
    cout << endl;


    return 0;
}
