#include "persona.h"
#include <iostream>
using namespace std;

// 5️⃣ Implementación del constructor
// TODO: implementar constructor Persona::Persona(...)

// 6️⃣ Implementación de imprimir_datos()
// TODO: implementar método
    void Persona::imprimir_datos() {
        cout << "Edad: " << edad << endl;
    }
    int Persona::setEdad(int edad_actual) {
    //calcular la edad de jubilacion restante   
    int edad_jubilacion = 67;
    int años_restantes = edad_jubilacion - edad_actual;
    return años_restantes;
}

// 7️⃣ Implementación de setEdad()
// TODO: añadir validación (edad > 0)