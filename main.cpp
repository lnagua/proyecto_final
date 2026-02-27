#include <iostream>
#include "persona.h"
using namespace std;

int main() {

    // 8️⃣ Crear objetos Persona
    // TODO: crear al menos dos objetos usando el constructor
    Persona luis;
    luis.edad=30;
    luis.imprimir_datos();
    int años_restantes = luis.setEdad(34);
    cout << "Años restantes para jubilación: " << años_restantes << endl;

    // 9️⃣ Llamar a imprimir_datos()
    // TODO: mostrar datos de los objetos

    // 🔟 Probar setEdad()
    // TODO: cambiar edad y volver a imprimir

    return 0;
}