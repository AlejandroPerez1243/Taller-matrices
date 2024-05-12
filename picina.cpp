#include <iostream>
//2. Piscina
using namespace std;

int main() {
    // Representación de la piscina como una matriz
    int piscina[5][5] = {
        {0 , 0, 0, 0,  0},
        {0 , 19,32,80, 0},
        {0 , 65,60,77, 0},
        {0 , 20,4,12,  0},
        {0 , 0, 0, 0,  0}
    };
    
    int pelota;
    cout << "En qué baldosa deseas tirar la pelota? ";
    cin >> pelota;
    
    int fila = 5;
    int columna = 5;
    int f = -1, c = -1;
    

    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            if (piscina[i][j] < pelota && piscina[i][j] != 0) {
                f = i;
                c = j;
            }
        }
    }
    
    if (f == 0 && c == 0) {
        cout << "No hay baldosas menores que la seleccionada." << endl;
    } else {
        cout << "La baldosa menor se encuentra en la fila " << f << " y en la columna " << c << endl;
    }
    
    return 0;
}


