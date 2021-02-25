#include "GloboAerostatico.h"


GloboAerostatico::GloboAerostatico()
{
	setTipoActor(TipoActor_Obstaculo);
	tipoObstaculo = TipoObstaculo_GloboAerostatico;
	setDireccion(Direccion_Ninguna);
	setFisico(false);
}


void GloboAerostatico::renderizar(SistemaRenderizacion* _sistemaRenderizacion) {
	Obstaculo::renderizar(_sistemaRenderizacion);
}