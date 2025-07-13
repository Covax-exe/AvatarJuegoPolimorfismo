# AvatarInnovador: Movimiento Creativo

## Descripción de la innovación

El personaje **AvatarInnovador** alterna entre dos tipos de patrones de movimiento para diferenciarse del resto:

---

### Movimiento Diagonal Repetitivo ⬈
El avatar se mueve en diagonal de la siguiente forma:
- Una posición hacia **arriba**
- Una posición hacia la **derecha**

Este patrón genera un desplazamiento que sube en zigzag hacia la derecha y le da un comportamiento distinto al resto de los personajes.

#### Ejemplo del movimiento diagonal:
| Turno | Dirección                 | Cambio                 |
|-------|---------------------------|------------------------|
|   1   | Diagonal arriba-derecha ⬈ | Fila -1, Columna +1    |
|   2   | Diagonal arriba-derecha ⬈ | Fila -1, Columna +1    |
| Repite|                           |                        |

---

### Movimiento Circular ⥁
El avatar realiza un desplazamiento en forma de círculo pequeño sobre 4 pasos:
- **Arriba**
- **Derecha**
- **Abajo**
- **Izquierda**

Esto crea un bucle continuo que representa un patrón circular cerrado.

#### Ejemplo del movimiento circular:
| Subpaso | Dirección  |   Cambio   |
|---------|------------|------------|
|    1    | Arriba ↑   | Fila -1    |
|    2    | Derecha →  | Columna +1 |
|    3    | Abajo ↓    | Fila +1    |
|    4    | Izquierda ←| Columna -1 |

---

## Beneficio del diseño
- Distingue al **AvatarInnovador** mediante patrones visuales claros y diferenciados.
- Le da personalidad propia frente a otros avatares (no aleatorio, no manual).
- Refuerza el polimorfismo aplicado a distintos comportamientos sin modificar la lógica del juego.
