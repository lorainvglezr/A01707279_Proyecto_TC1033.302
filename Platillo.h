// Nombre: Lorain Valeria González Rivas
// Matrícula: A01707279
// Fecha: Miércoles, 22 de noviembre de 2023
// Materia: Pensamiento Computacional Orientado a Objetos

/**
 * Clase Platillo, en donde se manejan las características de
 * platillo que se le asignó predeterminadamente al usuario.
 */

#pragma once
#include <string>

class Platillo{

private:
    //Declaración de las variables de instancia
    float precio;
    std::string nombre_plato;
    int ingredientes;
    int cupo_clase;
    float calorias;

public:
    //Constuctor
    Platillo():precio(0), nombre_plato(""), ingredientes(0), cupo_clase(0),calorias(0){};
    Platillo(float pre, std::string nom, int ing, int cup, float cal): precio(pre), nombre_plato(nom), ingredientes(ing), cupo_clase(cup), calorias(cal){};


    // Métodos miembros de la clase

    // get variables
    float get_precio();
    std::string get_nombre_plato() const;
    int get_ingredientes();
    int get_cupo_clase();
    float get_calorias();

    // set variables
    void set_precio(float);
    void set_nombre_plato(std::string);
    void set_ingredientes(int);
    void set_cupo_clase(int);
    void set_calorias(float);
};

float Platillo::get_precio(){
    return precio;
}
std::string Platillo::get_nombre_plato() const {
    return nombre_plato;
}
int Platillo::get_ingredientes(){
    return ingredientes;
}
int Platillo::get_cupo_clase(){
    return cupo_clase;
}
float Platillo::get_calorias(){
    return calorias;
}

void Platillo::set_precio(float pre){
    precio = pre;
}
void Platillo::set_nombre_plato(std::string nom){
    nombre_plato = nom;
}
void Platillo::set_ingredientes(int ing){
    ingredientes = ing;
}
void Platillo::set_cupo_clase(int cup){
    cupo_clase = cup;
}
void Platillo::set_calorias(float cal){
    calorias = cal;
}
