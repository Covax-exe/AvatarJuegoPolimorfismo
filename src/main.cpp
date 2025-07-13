#include <iostream>
#include <vector>
#include "IPersonaje.h"
#include "Avatar.h"
#include "AvatarCPU.h"
#include "AvatarInnovador.h"

int main()
{
    // creamos nuestros personajes
    Avatar cpu;
    AvatarCPU avatarCpu;       // controlado por la CPU
    AvatarInnovador innovador; // nuestro mover creativo

    // inicializamos posiciones
    cpu.setPosicionFila(5);
    cpu.setPosicionColumna(5);
    avatarCpu.setPosicionFila(2);
    avatarCpu.setPosicionColumna(2);
    innovador.setPosicionFila(8);
    innovador.setPosicionColumna(3);

    std::vector<IPersonaje *> personajes = {&cpu, &avatarCpu, &innovador};

    char input;
    for (int turno = 0; turno < 5; ++turno)
    {
        std::cout << "\nTurno " << turno + 1 << " - Ingresa W/A/S/D para mover el humano: ";
        std::cin >> input;
        // movemos a todos con la misma instrucción
        for (auto p : personajes)
        {
            p->mover(input);
            std::cout << " -> Pos: (" << p->getPosicionFila() << ", " << p->getPosicionColumna() << ")\n";
        }
    }
    return 0;
}