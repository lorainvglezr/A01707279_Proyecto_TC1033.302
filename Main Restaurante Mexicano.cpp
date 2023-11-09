// Nombre: Lorain Valeria González Rivas
// Matrícula: A01707279
// Fecha: Miércoles, 8 de noviembre de 2023
// Materia: Pensamiento Computacional Orientado a Objetos

// Descripción este es un proyecto demo para la clase de Pensamiento Computacional Orientado a Objetos
// Este programa simula un restaurante mexicano, en donde se le da al cliente una opción predeterminada
// con datos concretos acerca de la comida que va a ingerir, los datos de facturación del cliente y
// los datos generales del mesero que se le asignó.

// Bibliotecas
#include <iostream>
#include <string>
#include "Platillo.h"
#include "Cliente.h"
#include "Mesero.h"

// Función principal
int main(){
    std::cout << "Bienvenido al Restaurante 'La casona de la abuela' " << std::endl;
    std::cout << "Próximamente se desplegarán los detalles de su estancia aquí" << std::endl;
    std::cout << std::endl;

    // Uso de la clase Platillo, en donde se establecen los valores de la variables
    // y se hace uso de las funciones del documento .h
    Platillo platillo_1(143.58, "Enchiladas", 12, 2, 168);
    std::cout << "El precio (en pesos mexicanos) del platillo es: ";
    std::cout << platillo_1.get_precio() << std::endl;
    std::cout << "El nombre del platillo es: ";
    std::cout << platillo_1.get_nombre_plato() << std::endl;
    std::cout << "La cantidad de ingredientes del platillo es: ";
    std::cout << platillo_1.get_ingredientes() << std::endl;
    std::cout << "La cantidad sugerida de personas para comer del platillo es: ";
    std::cout << platillo_1.get_cupo_clase() << std::endl;

    std::cout << std::endl;

    //Uso de la clase Cliente, en donde se establecen los valores de la variables
    // y se hace uso de las funciones del documento .h
    Cliente cliente_1("Luis", 27, "Hombre",30457.68);
    std::cout << "El nombre del cliente es: ";
    std::cout << cliente_1.get_nombre() << std::endl;
    std::cout << "La edad del cliente es: ";
    std::cout << cliente_1.get_edad() << std::endl;
    std::cout << "El género del cliente es: ";
    std::cout << cliente_1.get_genero() << std::endl;
    std::cout << "La cantidad monetaria disponible (en pesos mexicanos) del cliente es: ";
    std::cout << cliente_1.get_disp_dinero() << std::endl;

    std::cout << std::endl;

    // Uso de la clase Platillo, en donde se establecen los valores de la variables
    // y se hace uso de las funciones del documento .h
    Mesero mesero_1("Maria Fernanda", 21, "Mujer", 17.8, 43050.85);
    std::cout << "El nombre del mesero es: ";
    std::cout << mesero_1.get_nombre() << std::endl;
    std::cout << "La edad del mesero es: ";
    std::cout << mesero_1.get_edad() << std::endl;
    std::cout << "El género del mesero es: ";
    std::cout << mesero_1.get_genero() << std::endl;
    std::cout << "La cantidad promedio de propina (en pesos mexicanos) que recibe el mesero, por mesa, es de: ";
    std::cout << mesero_1.get_propinas() << std::endl;
    std::cout << "La cantidad de dinero (en pesos mexicanos) que recibe el mesero, como salario mínimo por año, es de: ";
    std::cout << mesero_1.get_salario() << std::endl;

    std::cout << std::endl;

    //Desplegue de un mensaje de despedida al usuario
    std::cout << "Esos fueron los datos de su estancia en 'La casona de la abuela' " << std::endl;
    std::cout << "Esperamos que haya disfrutado su visita, vuela pronto!" << std::endl;
    std::cout << std::endl;
}