/**
 * @file main.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2024-03-25
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include<stdio.h>
#include"tools.h"

int main()
{
    int seleccion;
    char *opciones[] = {"Opcion 1", "Opcion 2", "Salir"};

    seleccion = showMenu(3, opciones, "Ejemplo de Menu");

    printf("%i", seleccion);
    return 0;
}
