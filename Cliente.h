// Nombre: Lorain Valeria González Rivas
// Matrícula: A01707279
// Fecha: Miércoles, 15 de noviembre de 2023
// Materia: Pensamiento Computacional Orientado a Objetos

/**
 * Clase Cliente, en esta clase se establecen las variables que son características sólo
 * del cliente que está en el restaurante, maneja los datos personales financieros de
 * la persona que entra al restaurante.
 */

#include <string>
#include "Personas.h"

class Cliente: public Personas{

private:
    //Declaración de las variables de instancia, propias de esta clase
    float disp_dinero;

public:
    //Constuctor, en donde se manda a llamar a la clase base
    Cliente(): Personas(), disp_dinero(0){};
    Cliente(std::string nom, int ed, std::string gen, float dis_din): Personas(nom, ed, gen), disp_dinero(dis_din){};


    // Métodos miembros de la clase

    // get variables
    float get_disp_dinero();

    //set variables
    void set_disp_dinero(float);
};


float Cliente::get_disp_dinero(){
    return disp_dinero;
}

void Cliente::set_disp_dinero(float dis_din){
    disp_dinero = dis_din;
}
