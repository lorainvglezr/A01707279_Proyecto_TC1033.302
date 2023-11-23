// Nombre: Lorain Valeria González Rivas
// Matrícula: A01707279
// Fecha: Miércoles, 22 de noviembre de 2023
// Materia: Pensamiento Computacional Orientado a Objetos

/**
 * Clase Factura, en esta clase se establecen las variables que tienen en común las personas y el platillo
 */


#pragma once

#include <string>
#include "Cliente.h"
#include "Platillo.h"

#include <iostream>
#include <vector>

class Factura {
public:
    //Constuctor
    Factura(Cliente cliente) : cliente(cliente) {}

    void agregarPlatillo(Platillo platillo) {
        platillos.push_back(platillo);
    }

    void mostrarFactura() {
        double total = 0;
        std::cout << "Factura para " << cliente.get_nombre() << " ("
                  << cliente.get_edad() << " años, " << cliente.get_genero()
                  << "):" << std::endl;
        for (auto &&Platillo : platillos) {
            std::cout << "" << Platillo.get_nombre_plato() << " - "
                      << Platillo.get_precio() << std::endl;
            total += Platillo.get_precio();
        }
        std::cout << "Total: " << total << std::endl;
    }

//Declaración de las variables de instancia generales para la clase
private:
    Cliente cliente;
    std::vector<Platillo> platillos;
};