#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

// 1️⃣ Definición de la clase
class Persona {

private:
    // 2️⃣ Atributos (estado del objeto)
    int cuenta_banco;
    
    // TODO: definir nombre y edad

public:
    // 3️⃣ Constructor parametrizado
    // TODO: declarar constructor
    int edad;

    // 4️⃣ Métodos públicos
    // TODO: declarar imprimir_datos()
    // TODO: declarar setEdad(int edad)
    void imprimir_datos();
    int setEdad(int edad_actual);
};

#endif // PERSONA_H