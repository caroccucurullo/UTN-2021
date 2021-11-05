#include <iostream>
using namespace std;
#include "rlutil.h"
using namespace rlutil;
#include "funciones.h"

int main()
{
//MENU
    do{
        cls();
        setColor(WHITE);
        cout << "REVENGE" << endl;
        cout << "--------------------------------" << endl;
        cout << "1 - JUGAR" << endl;
        cout << "2 - ESTADISTICAS" << endl;
        cout << "3 - CREDITOS" << endl;
        cout << "--------------------------------" << endl;
        cout << "0 - SALIR" << endl;
        cout << endl << "> ";
        cin >> opcion;

        switch(opcion){
            case 1:
                //FUNCION JUGAR;
            break;
            case 2:
                //ESTADISTICAS;
            break;
            case 3:
                //CREDITOS;
            break;

            case 0:

            break;
        }
        cin.ignore();
        anykey();
    }while(opcion != 0);

    //JUGAR
        //SOLICITAR NOMBRE DE LOS JUGADORES
        //MOSTRAR INFORMACION
            //NUMERO DE RONDA
            //NOMBRE DE JUGADOR
            //TIRADA DE DADOS
            //PUNTAJES ACUMULADOS DE AMBOS JUGADORES
            //CANTIDAD DE DADOS STOCK DE CADA JUGADOR
        //TIRAR UN DADO DE 12 PARA VER QUIEN COMIENZA LA PARTIDA
            //MOSTRAR DADO PARA JUGADOR 1
            //MOSTRAR DADO PARA JUGADOR 2
        //PARTIDA
            //PRIMERA RONDA
                //JUGADOR 1 LANZA DADOS(2) DE 12
                    //SUMAR DADOS DE 12 (ENTRE 2 Y 24): NUMERO OBJETIVO
                    //MOSTRAR: NUMERO OBJETIVO
                //JUGADOR 1 LANZA DADOS(6) DE 6 (DADOS STOCK)
                    //MUESTRA DADOS STOCK
                    //SELECCIONAR DE LOS DADOS STOCK, UNA SUMA DE DADOS (DADOS ELEGIDOS)
                    //QUE IGUALE A NUMERO OBJETIVO: SUMA SELECCIONADA
                    //SI NO OBTIENE OBJETIVO INGRESA 0
                //PUNTAJE JUGADOR 1 RONDA 1
                    //TIRADA EXITOSA: LA SUMA SELECCIONADA POR EL JUGADOR ES IGUAL AL NUMERO OBJETIVO
                        //PUNTAJE: (SUMA SELECCIONADA * DADOS ELEGIDOS) + PUNTAJE ACUMULADO
                        //DESDADE: PASA LOS DADOS ELEGIDOS A SU CONTRINCANTE
                    //TIRADA EXITOSA CON TODOS LOS DADOS: GANA AUTOMATICAMENTE = 10000 + PUNTAJE ACUMULADO
                    //TIRADA FALLIDA: SI DADOS STOCK DE JUGADOR1 != A DADOS STOCK DE JUGADOR2
                        //JUGADOR2 PASA 1 DADO A JUGADOR1
                //JUGADOR 2 (SE REPITE TIRADA 1 RONDA 1)
            //SEGUNDA RONDA
            //TERCER RONDA
            //CUARTA RONDA
            //QUINTA RONDA


    return 0;
}
