# Juego Avatar con Polimorfismo

Este repositorio contiene la implementación de un pequeño juego orientado a objetos usando polimorfismo en C++. Se desarrollaron los siguientes personajes:

## Personajes

1. **Avatar**
   - Movimiento manual con W, A, S, D.
2. **AvatarCPU**
   - Movimiento aleatorio (arriba, abajo, izquierda, derecha).
3. **AvatarInnovador**
   - Movimiento alternando diagonales y circulares (creativo).

## Estructura del proyecto

include/
│ IPersonaje.h
│ Personaje.h
│ Avatar.h
│ AvatarCPU.h
│ AvatarInnovador.h

src/
│ main.cpp


## Ejecución

Compilar con:
```bash
g++ src/main.cpp -I include -o AvatarJuego
./AvatarJuego


