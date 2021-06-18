// clasepractica9.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


/*void rellenar(int matriz, int X, int Y)
{
    srand((unsigned)time(NULL));
    for (int i1 = 0; i1 < X; i1++)
    {
        for (int i2 = 0; i2 < Y; i2++)
        {
            matriz[i1][i2] = rand() % 101;
            cout << "|" << matriz[i1][i2]<<"|";
        }
        cout << endl;
    }
    cout << "veamos la matriz " << matriz << endl;
}*/


int main()
{

    int matriz[3][2];
    int asignacion = 0;
    int filas = 1;
    int columnas = 1;
    int asignacion_din = 0;
    cout << "Cuantas filas quieres?" << endl;
    cin >> filas;
    cout << "cuantas columnas quieres?" << endl;
    cin >> columnas;
    //creacion de la matriz dinamica
    int** Puntuero = new int* [filas];
    for (int g = 0; g < filas; g++)
    {
        Puntuero[g] = new int[columnas];
    }

    for (int g = 0; g < filas; g++)
    {
        for (int g_i = 0; g_i < columnas; g_i++)
        {
            Puntuero[g][g_i] = asignacion_din;
            asignacion_din++;
        }
    }

    for (int g = 0; g < filas; g++)
    {
        for (int g_i = 0; g_i < columnas; g_i++)
        {
            cout << Puntuero[g][g_i] << " ";
        }
        cout << endl;
    }
    cout << endl;



    //creacion del arreglo dinámico
    delete[] Puntuero;
    Puntuero = NULL;





        for (int contador = 0; contador < 3; contador++)
        {
            for (int contador_i = 0; contador_i < 2; contador_i++)
            {
                matriz[contador][contador_i] = asignacion;
                asignacion++;
            }
        }
    
        for (int contador = 0; contador < 3; contador++)
        {
            for (int contador_i = 0; contador_i < 2; contador_i++)
            {
                cout << matriz[contador][contador_i];
                cout << " ";
            }
            cout << endl;
        }
        
}

