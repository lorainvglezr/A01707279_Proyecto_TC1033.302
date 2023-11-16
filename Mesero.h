// Nombre: Lorain Valeria González Rivas
// Matrícula: A01707279
// Fecha: Miércoles, 15 de noviembre de 2023
// Materia: Pensamiento Computacional Orientado a Objetos

/**
 * Clase Mesero, en esta clase se establecen las variables que son sólo características
 * del individuo que está atendiendo a las personas del restaurante, dado que se manda a llamar a la clase base,
 * que tiene las características de cualquier persona en el mundo, ya sólo se hacen funciones que 
 * manejan los datos personales financieros de la persona que recibe a los clientes.
 */

#include <string>

class Mesero: public Personas{

private:
    //Declaración de las variables de instancia, propias de esta clase
    float propinas;
    float salario;

public:
    //Constuctor, en donde se manda a llamar a la clase base (Personas)
    Mesero(): Personas(), propinas(0), salario(0){};
    Mesero(std::string nom, int ed, std::string gen, float prop, float sal): Personas(nom, ed, gen), propinas(prop), salario(sal){};


    // Métodos miembros de la clase

    // get variables
    float get_propinas();
    float get_salario();

    //set variables
    void set_propinas(float);
    void set_salario(float);
};


float Mesero::get_propinas(){
    return propinas;
}
float Mesero::get_salario(){
    return salario;
}

void Mesero::set_propinas(float prop){
    propinas = prop;
}
void Mesero::set_salario(float sal){
    salario = sal;
}
