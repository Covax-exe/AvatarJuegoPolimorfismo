// ==================
// include/Avatar.h
// ==================
#pragma once
#include "Personaje.h"

class Avatar : public Personaje
{
public:
    Avatar() { /* se puede inicializar la posición si se quiere */ }
    void mover(char direccion) override
    {
        int nuevaF = getPosicionFila();
        int nuevaC = getPosicionColumna();
        switch (direccion)
        {
        case 'W':
        case 'w':
            nuevaF--;
            break; // Arriba
        case 'S':
        case 's':
            nuevaF++;
            break; // Abajo
        case 'A':
        case 'a':
            nuevaC--;
            break; // Izquierda
        case 'D':
        case 'd':
            nuevaC++;
            break; // Derecha
        default:
            return; // si presionan otra tecla, no pasa naa
        }
        setPosicionFila(nuevaF);
        setPosicionColumna(nuevaC);
    }
};
