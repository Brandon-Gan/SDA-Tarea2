#include "neurona.h"
#include <iostream>

Neurona::Neurona(int neuron_id, double voltage, int x, int y, int r, int g, int b)
    : id(neuron_id), voltaje(voltage), pos_x(x), pos_y(y), red(r), green(g), blue(b) {}

void Neurona::print_info() const {
    std::cout << "Neurona ID: " << id << std::endl;
    std::cout << "Voltaje: " << voltaje << std::endl;
    std::cout << "Posición X: " << pos_x << std::endl;
    std::cout << "Posición Y: " << pos_y << std::endl;
    std::cout << "Rojo: " << red << std::endl;
    std::cout << "Verde: " << green << std::endl;
    std::cout << "Azul: " << blue << std::endl;
    std::cout << std::endl;
}
