// Nombre: Lorain Valeria González Rivas
// Matrícula: A01707279
// Fecha: Miércoles, 15 de noviembre de 2023
// Materia: Pensamiento Computacional Orientado a Objetos

/**
 * Clase padre Personas, en donde se manejan las características de
 * un individuo en general, el cual puede ser un cliente o un mesero (clases hijas).
 */

#include <string>

class Personas{
    
private:
    //Declaración de las variables de instancia generales para clases hijas
    std::string nombre;
    int edad;
    std::string genero;
    
public:
    //Constuctor
    Personas(): nombre(""), edad(0), genero(""){};
    Personas(std::string nom, int ed, std::string gen):nombre(nom), edad(ed), genero(gen){};
    
    
    // Métodos miembros de la clase
    
    // get variables
    std::string get_nombre();
    int get_edad();
    std::string get_genero();
    
    // set variables
    void set_nombre(std::string);
    void set_edad(int);
    void set_genero(std::string);
    
};


std::string Personas::get_nombre(){
    return nombre;
}
int Personas::get_edad(){
    return edad;
}
std::string Personas::get_genero(){
    return genero;
}

void Personas::set_nombre(std::string nom){
    nombre = nom;
}
void Personas::set_edad(int ed){
    edad = ed;
}
void Personas::set_genero(std::string gen){
    genero = gen;
}
