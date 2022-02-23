#include <iostream>

using namespace std;

int main()
{
    int opcion;

    cout << "Selecione la opcion que quiere realizar"<< endl;
    cout << "1.Agendar Cita" << endl;
    cout << "2.Modificar Cita" << endl;
    cout << "3.Eliminar Cita" << endl;
    cout << "4.Lista de citas vigentes" << endl;
    cout << "5.Limpiar Pantalla" << endl;
    cout << "6. Salir" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1: cout << "Ingrese su nombre" << endl;
        cout << "Ingrese la hora del tratamiento (formato 24 horas)" << endl;
        cout << "Ingrese el nombre del tratamiento" << endl;
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        exit;
        break;
    default:
        cout << "No ingreso opcion correcta" << endl;


    }

}