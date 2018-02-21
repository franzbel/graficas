#include "stdafx.h"
#include "EsferaSola.h"
#include "Mundo.h"
#include "ShadeRec.h"

// -------------------------------------------------------------------- default constructor

EsferaSola::EsferaSola(void)
	: Tracer()
{}


// -------------------------------------------------------------------- constructor

EsferaSola::EsferaSola(Mundo* _worldPtr)
	: Tracer(_worldPtr)
{}


// -------------------------------------------------------------------- destructor

EsferaSola::~EsferaSola(void) {}


// -------------------------------------------------------------------- trace_ray

ColorRGB EsferaSola::trace_ray(const Rayo& ray) const {
	ShadeRec	sr(*world_ptr); 	// not used
	double    	t;  				// not used

	if (world_ptr->esfera.impacto(ray, t, sr))
		return (azul);
	else
		return (negro);
}



