/**11) Hacer un programa para ingresar una lista de 8 números y luego informar si
todos están ordenados en forma creciente. En caso de haber dos números
“empatados” considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No
Ordenado”
*/

#include <iostream>
using namespace std;

int main()
{
    int num, i, mayor;
    int const ING=8;
    int cont=0;

    cout << "INGRESAR 8 NÚMEROS ENTEROS: ";
    for (i=0; i<ING; i++){
            cin >> num;

        if(i==0)
        {
            mayor = num;
            cont++;

        }
        else if (num>=mayor)
        {
            mayor=num;
            cont++;
        }
    }
    if(cont==ING)
    {
        cout << "CONJUNTO ORDENADO";
    }
    else
    {
        cout<< "CONJUNTO DESORDENADO";
    }
    return 0;
}
