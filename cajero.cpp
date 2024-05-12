//6.cajero automatico
#include <iostream>
#include <string>
#define user "admin"
#define pasword "admin"
#define banco "bancacol"

using namespace std;

int main() {
    string usuario, pass;
    float saldo = 1000000;
    int op;
    float limit = 2800000;
    float transferencia, num, deposito, retiro;
    string Banco;
    float cuenta2[1000000];

    cout << "BIENVENIDO A BANCACOL " << endl;
    cout << "Ingresa tu usuario: ";
    getline(cin, usuario);
    cout << "Digite la contraseña: ";
    getline(cin, pass);
    cout << "----------------------------" << endl;

    do {
        cout << "Bienvenido al menu, elige una opcion: " << endl;
        cout << "1.) Ver saldo de cuenta" << endl;
        cout << "2.) Depositar dinero" << endl;
        cout << "3.) Retirar dinero" << endl;
        cout << "4.) Realizar una transferencia" << endl;
        cout << "5.) Historial de transacciones" << endl;
        cout << "6.) Cambio de clave" << endl;
        cout << "7.) Bloqueo de tarjeta" << endl;
        cout << "8.) Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> op;
        cin.ignore(); // Limpiar el buffer de entrada

        switch (op) {
            case 1:
                cout << "Su saldo es de: " << saldo << endl;
                break;
            case 2:
                cout << "Digite la cantidad de dinero que desea depositar en su cuenta: ";
                cin >> deposito;
                saldo += deposito;
                cout << "Su nuevo saldo es de: " << saldo << endl;
                break;
            case 3:
                cout << "Recuerde que el diario a retirar es de " << limit << endl;
                cout << "Digite la cantidad de dinero que desea retirar: ";
                cin >> retiro;
                if (retiro <= limit) {
                    saldo -= retiro;
                    cout << "Su saldo era de: " << saldo + retiro << " ahora es de: " << saldo << endl;
                } else {
                    cout << "Vuelva a intentarlo" << endl;
                }
                break;
            case 4:
                cout << "Su saldo es de dinero que desea transferir: " << saldo << endl;
                cout << usuario << " Recuerda que las transferencias por el momento solo se pueden realizar con cuentas registradas en el mismo " << banco << endl;
                cout << "Ingrese el nombre del banco al cual desea realizar la transferencia: ";
                cin >> Banco;
                cout << "Ingrese el numero de la cuenta a la cual desea transferir el dinero: ";
                cin >> num;
                cout << "Ingrese la cantidad de dinero que desea transferir: ";
                cin >> transferencia;
                cout << "RECUERDE QUE ESTA TRANSACCION TIENE UN COSTO DE " << "1500" << endl;
                saldo -= transferencia;
                cout << "Transferencia realizada con exito al numero de cuenta " << num << endl;
                break;
            case 5:
                cout << "Historial de transacciones:" << endl;
                // Aquí deberías mostrar el historial de transacciones
                break;
            case 6:
                cout << "Ingrese la nueva contraseña: ";
                cin >> pass;
                cout << "Contraseña cambiada exitosamente" << endl;
                break;
            case 7:
                cout << "Tarjeta bloqueada" << endl;
                break;
            case 8:
                cout << "Gracias por usar el cajero de BANCACOL" << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;
        }

    } while (op != 8);

    return 0;
}


