#include <iostream>
using namespace std;

/**Definicion de la funcion factorial**/
int factorial(int);
/**Definicion de la funcion de cajero automático**/
float cajeroAutomatico(float saldo, int opc);

/**Esta es la opcion principal del programa de factorial y cajero automático**/
int main()
{
    int menu, opcCajero, n;
    float saldo = 20000;
    do{
        cout << "\tSeleccione su opcion preferida\n";
        cout << "1. Factorial" << endl;
        cout << "2. Cajero Automatico" << endl;
        cout << "3. Salir" << endl;
        cin >> menu;
        
        switch (menu){
            case 1:
                cout << "Ingrese el numero para buscar su factorial: ";
                cin >> n;
                cout << "Factorial = " << factorial(n);
                break;
            case 2:
                cout << "\nBienvenido a su cajero" << endl;
                do{
                    cout << "Que movimiento desesa realizar?" << endl;
                    cout << "1. Consultar saldo" << endl;
                    cout << "2. Retirar efectivo" << endl;
                    cout << "3. Ingresar saldo" << endl;
                    cout << "4. Salir" << endl;
                    cin >> opcCajero;
                    saldo = cajeroAutomatico(saldo, opcCajero);
                }while(opcCajero != 4);
                break;
            case 3:
                cout << "Adios :)" << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;
        }
        
    }while(menu != 3);
    return 0;
}

/**Funcion para calcular el factorial
    Utiliza recursión llamandose a sí misma para calcular el resultado
**/
int factorial(int n) {
    if(n-1 > 0){
	    return (n) * factorial(n-1);
    }
    return n;
}

/**
    Funcion para el cajero automático
    Recrea las funciones principales de un cajero automático y devuelve el valor del saldo actual del usuario
**/
float cajeroAutomatico(float saldo, int opc){
    float movimiento;
    switch(opc){
        case 1:
            cout << "Su saldo es de: " << saldo << endl;
            break;
        case 2:
            cout << "Cuanto desea retirar? ";
            cin >> movimiento;
            if(movimiento > saldo){
                cout << "No es posible realizar el movimiento porque no cuenta con el saldo suficiente" << endl;
            }else{
                saldo = saldo - movimiento;
                cout << "Retiro realizado, ahora cuenta con un saldo de: "<<saldo<< endl;
            }
            break;
        case 3:
            cout << "Cuanto desea ingresar? ";
            cin >> movimiento;
            if(movimiento > 30000){
                cout << "No es posible realizar ingresos de más de 30000" << endl;
            }else{
                saldo = saldo + movimiento;
                cout << "Ingreso realizado, ahora cuenta con un saldo de: "<<saldo<< endl;
            }
            break;
        case 4:
            cout << "Muchas gracias por visitarnos!" << endl;
            break;
        default:
            cout << "Opcion no valida";
            break;
    }
    return saldo;
}