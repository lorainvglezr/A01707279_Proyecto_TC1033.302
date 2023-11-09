// Nombre: Lorain Valeria González Rivas
// Matrícula: A01707279
// Fecha: Miércoles, 8 de noviembre de 2023
// Materia: Pensamiento Computacional Orientado a Objetos

/**
 * Clase Cliente, en esta clase se establecen las variables que son características
 * del cliente que está en el restaurante, maneja los datos personales de
 * la persona que entra al restaurante.
 */

#include <string>

class Cliente{

private:
    //Declaración de las variables de instancia
    std::string nombre;
    int edad;
    std::string genero;
    float disp_dinero;

public:
    //Constuctor
    Cliente():nombre(""), edad(0), genero(""), disp_dinero(0){};
    Cliente(std::string nom, int ed, std::string gen, float dis_din): nombre(nom), edad(ed), genero(gen), disp_dinero(dis_din){};


    // Métodos miembros de la clase

    // get variables
    std::string get_nombre();
    int get_edad();
    std::string get_genero();
    float get_disp_dinero();

    //set variables
    void set_nombre(std::string);
    void set_edad(int);
    void set_genero(std::string);
    void set_disp_dinero(float);
};

std::string Cliente::get_nombre(){
    return nombre;
}
int Cliente::get_edad(){
    return edad;
}
std::string Cliente::get_genero(){
    return genero;
}
float Cliente::get_disp_dinero(){
    return disp_dinero;
}

void Cliente::set_nombre(std::string nom){
    nombre = nom;
}
void Cliente::set_edad(int ed){
    edad = ed;
}
void Cliente::set_genero(std::string gen){
    genero = gen;
}
void Cliente::set_disp_dinero(float dis_din){
    disp_dinero = dis_din;
}