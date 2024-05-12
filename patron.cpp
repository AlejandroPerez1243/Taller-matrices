#include <iostream>
//4. Proporciones
using namespace std;

int contarepeticiones(char patron[3][3], char matrizgrande[5][5], int columnas, int filas) {
    int contador = 0;
    for (int i = 0; i < filas - 2; i++) {
        for (int j = 0; j < columnas - 2; j++) {
            bool encontrado = true;
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    if (patron[k][l] != matrizgrande[i + k][j + l]) {
                        encontrado = false;
                        break;
                    }
                }
                if (!encontrado) {
                    break;
                }
            }
            if (encontrado) {
                contador++;
            }
        }
    }
    return contador;
}
        
int main() {
    char patron[3][3] = {{'*', '*', '*'}, {'*', '0', '0'}, {'*', '*', '0'}};

    char matrizgrande[5][5] = {{'*', '*', '*', '0', '0'},
                              {'*', '0', '0', '0', '0'},
                               {'*', '*', '0', '0', '0'},
                               {'*', '*', '*', '0', '0'},
                               {'*', '0', '0', '0', '0'}};
    int filas = 5;
    int columnas = 5;

    int repeticiones = contarepeticiones(patron, matrizgrande, columnas, filas);
    cout << "El patron se repite " << repeticiones << " veces." << endl;

    return 0;
}
