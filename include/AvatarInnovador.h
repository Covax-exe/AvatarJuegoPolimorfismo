#pragma once
#include "Avatar.h"
#include <iostream>

class AvatarInnovador : public Avatar
{
private:
    int paso;
    int subPasoLateral;

public:
    AvatarInnovador() : paso(0), subPasoLateral(0) {}

    void mover(char) override
    {
        if (paso % 2 == 0)
        {
            if (subPasoLateral % 4 < 2)
            {
                setPosicionColumna(getPosicionColumna() + 1);
                std::cout << "Innovador: derecha → (LATERAL)\n";
            }
            else
            {
                setPosicionColumna(getPosicionColumna() - 1);
                std::cout << "Innovador: izquierda ← (LATERAL)\n";
            }
            subPasoLateral++;
        }
        else
        {
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
