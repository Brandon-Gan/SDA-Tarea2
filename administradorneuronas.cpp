#include "administradorneuronas.h"

AdministradorNeuronas& AdministradorNeuronas::getInstance() {
    static AdministradorNeuronas instance;
    return instance;
}

void AdministradorNeuronas::agregar_inicio(const Neurona& neurona) {
    neuronas.insert(neuronas.begin(), neurona);
}

void AdministradorNeuronas::agregar_final(const Neurona& neurona) {
    neuronas.push_back(neurona);
}

void AdministradorNeuronas::mostrar() {
    for (const auto& neurona : neuronas) {
        neurona.print_info();
    }
}
