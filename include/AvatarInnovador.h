#pragma once
#include "Avatar.h"
#include <iostream>

class AvatarInnovador : public Avatar
{
private:
    int paso;

public:
    AvatarInnovador() : paso(0) {}

    void mover(char) override
    {
        if (paso % 2 == 0)
        {
            // Movimiento Diagonal arriba-derecha
            setPosicionFila(getPosicionFila() - 1);
            setPosicionColumna(getPosicionColumna() + 1);
            std::cout << "Innovador: diagonal ⬈ (ARRIBA-DERECHA)\n";
        }
        else
        {
            // Movimiento Circular en 4 pasos
            int subPaso = (paso / 2) % 4;
            switch (subPaso)
            {
            case 0:
                setPosicionFila(getPosicionFila() - 1);
                std::cout << "Innovador: sube ↑ (CIRCULAR)\n";
                break;
            case 1:
                setPosicionColumna(getPosicionColumna() + 1);
                std::cout << "Innovador: derecha → (CIRCULAR)\n";
                break;
            case 2:
                setPosicionFila(getPosicionFila() + 1);
                std::cout << "Innovador: baja ↓ (CIRCULAR)\n";
                break;
            case 3:
                setPosicionColumna(getPosicionColumna() - 1);
                std::cout << "Innovador: izquierda ← (CIRCULAR)\n";
                break;
            }
        }
        paso++;
    }
};
