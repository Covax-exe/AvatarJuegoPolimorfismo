#pragma once
#include "Avatar.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

class AvatarCPU : public Avatar
{
public:
    AvatarCPU() { std::srand(static_cast<unsigned>(std::time(nullptr))); }
    void mover(char /*direccion*/) override
    {
        int dir = std::rand() % 4; // un número de 0 a 3
        char tecla;
        switch (dir)
        {
        case 0:
            tecla = 'W';
            std::cout << "CPU: me muevo ARRIBA ↑\n";
            break;
        case 1:
            tecla = 'S';
            std::cout << "CPU: me muevo ABAJO ↓\n";
            break;
        case 2:
            tecla = 'A';
            std::cout << "CPU: me muevo IZQUIERDA ←\n";
            break;
        case 3:
            tecla = 'D';
            std::cout << "CPU: me muevo DERECHA →\n";
            break;
        }
        // usamos lógica del padre para aplicar el movimiento
        Avatar::mover(tecla);
    }
};
