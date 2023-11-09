// Nombre: Lorain Valeria González Rivas
// Matrícula: A01707279
// Fecha: Miércoles, 8 de noviembre de 2023
// Materia: Pensamiento Computacional Orientado a Objetos

/**
 * Clase Mesero, en esta clase se establecen las variables que son características
 * del individuo que está atendiendo a las personas del restaurante,
 * en esta clase se manejan los datos personales de la persona que recibe a los clientes.
 */

#include <string>

class Mesero{

private:
    //Declaración de las variables de instancia
    std::string nombre;
    int edad;
    std::string genero;
    float propinas;
    float salario;

public:
    //Constuctor
    Mesero():nombre(""), edad(0), genero(""), propinas(0), salario(0){};
    Mesero(std::string nom, int ed, std::string gen, float prop, float sal):nombre(nom), edad(ed), genero(gen), propinas(prop), salario(sal){};

    
    // Métodos miembros de la clase

    // get variables
    std::string get_nombre();
    int get_edad();
    std::string get_genero();
    float get_propinas();
    float get_salario();

    //set variables
    void set_nombre(std::string);
    void set_edad(int);
    void set_genero(std::string);
    void set_propinas(float);
    void set_salario(float);
};

std::string Mesero::get_nombre(){
    return nombre;
}

int Mesero::get_edad(){
    return edad;
}
std::string Mesero::get_genero(){
    return genero;
}
float Mesero::get_propinas(){
    return propinas;
}
float Mesero::get_salario(){
    return salario;
}

void Mesero::set_nombre(std::string nom) {
    nombre = nom;
}
void Mesero::set_edad(int ed){
    edad = ed;
}
void Mesero::set_genero(std::string gen){
    genero = gen;
}
void Mesero::set_propinas(float prop){
    propinas = prop;
}
void Mesero::set_salario(float sal){
    salario = sal;
}