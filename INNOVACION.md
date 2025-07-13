# AvatarInnovador: Movimiento Creativo

## Descripción de la innovación

El personaje **AvatarInnovador** alterna entre dos tipos de patrones de movimiento para diferenciarse del resto:

---

### Movimiento Lateral Repetitivo ⬈
El avatar se mueve lateralmente de la siguiente forma:
- Dos posiciones hacia la **derecha**
- Dos posiciones hacia la **izquierda**
- Repite

Esto genera un patrón horizontal que simula un barrido lateral constante.

#### Ejemplo del movimiento lateral:
| Turno | Dirección  | Cambio de Columna |
|-------|------------|-------------------|
|   1   | Derecha →  | +1                |
|   2   | Derecha →  | +1                |
|   3   | Izquierda ←| -1                |
|   4   | Izquierda ←| -1                |
| Repite|            |                   |

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
- Distingue al **AvatarInnovador** mediante patrones visuales predecibles pero no manuales.
- Le da personalidad propia frente a otros avatares (no aleatorio, no controlado por usuario).
- Muestra polimorfismo aplicado a distintos comportamientos.

