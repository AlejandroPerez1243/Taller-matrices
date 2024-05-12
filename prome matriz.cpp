#include <iostream>
#include <vector>
//3. Promedio de notas
using namespace std;

void promedio(int canti, int materias, vector<float>& promedios_materia, vector<float>& promedios_estudiante) {
    promedios_materia.clear();
    promedios_estudiante.clear();

    for (int j = 0; j < materias; j++) {
        cout << "Ingrese la cantidad de estudiantes para la materia " << j + 1 << ": ";
        cin >> canti;
        
        vector<float> notas_estudiante(canti);
        float suma_materia = 0;

        for (int i = 0; i < canti; i++) {
            cout << "Ingrese la nota del estudiante " << i + 1 << " de la materia " << j + 1 << ": ";
            cin >> notas_estudiante[i];
            suma_materia += notas_estudiante[i];
        }

        float promedio_materia = suma_materia / canti;
        cout << "El promedio de notas de la materia " << j + 1 << " es: " << promedio_materia << endl;
        promedios_materia.push_back(promedio_materia);

        for (int i = 0; i < canti; i++) {
            if (j == 0) {
                promedios_estudiante.push_back(notas_estudiante[i]);
            } else {
                promedios_estudiante[i] += notas_estudiante[i];
            }
        }
    }

    cout << "\nPromedio total por estudiante:\n";
    for (int i = 0; i < canti; i++) {
        promedios_estudiante[i] /= materias;
        cout << "Estudiante " << i + 1 << ": " << promedios_estudiante[i] << endl;
    }

    // Ordenar los promedios de los estudiantes de mayor a menor
    for(int i = 0; i < canti; i++) {
        for(int j = i + 1; j < canti; j++) {
            if(promedios_estudiante[i] < promedios_estudiante[j]) {
                float aux = promedios_estudiante[i];
                promedios_estudiante[i] = promedios_estudiante[j];
                promedios_estudiante[j] = aux;
            }
        }
    }

    // Mostrar los promedios de los estudiantes ordenados
    cout << "\nPromedio total de los estudiantes ordenado de mayor a menor:\n";
    for(int i = 0; i < canti; i++) {
        cout << "Estudiante " << i + 1 << ": " << promedios_estudiante[i] << endl;
    }
}

int main() {
    int canti, materias;
    char op;
    vector<float> promedios_materia;
    vector<float> promedios_estudiante;

    do {
        cout << "Ingrese la cantidad de materias: ";
        cin >> materias;
        promedio(canti, materias, promedios_materia, promedios_estudiante);
        
        cout << "\nDesea repetir el proceso (s/n)? ";
        cin >> op;
    } while (op == 's');

    return 0;
}

