/**
 * @file main.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2024-03-22
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <vector>
#include "tools.hpp"

using namespace std;

using namespace tools;

int main()
{
    vector<string> opciones;
    opciones.push_back("Opcion 1");
    opciones.push_back("Opcion 2");
    opciones.push_back("Salir");

    int opcion = showMenu(opciones, "Menu");

    while(opcion != 2) {
        pausa();
        opcion = showMenu(opciones, "Menu");
    }

    return 0;
}
