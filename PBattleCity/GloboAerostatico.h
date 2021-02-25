#pragma once
#include <iostream>
#include <string>
#include "obstaculo.h"

class GloboAerostatico:
public Obstaculo

{
public:
    GloboAerostatico();
    void renderizar(SistemaRenderizacion* _sistemaRenderizacion);
    void setImagen(unsigned char _simbolo, ColorConsola _colorSimbolo, ColorConsola _colorFondo);
    void movimientoRectangulo();
};