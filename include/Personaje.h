#pragma once
#include "IPersonaje.h"

class Personaje : public IPersonaje
{
protected:
    int fila;
    int columna;

public:
    Personaje() : fila(0), columna(0) {}
    virtual ~Personaje() = default;
    int getPosicionFila() const override { return fila; }
    int getPosicionColumna() const override { return columna; }
    void mover(char direccion) override
    {
        // Movimiento por defecto: no hace nada
    }
    void setPosicionFila(int f) override { fila = f; }
    void setPosicionColumna(int c) override { columna = c; }
};