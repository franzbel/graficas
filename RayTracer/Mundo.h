#pragma once
#include <vector>
#include "ViewPlane.h"
#include "ColorRGB.h"
#include "Tracer.h"
#include "ObjetoGeometrico.h"
#include "Esfera.h"
#include "Rayo.h"

using namespace std;

class Mundo
{
public:
	Mundo();
	~Mundo();
	
	void agregarObjetoGeometrico(ObjetoGeometrico* ptr_objeto);
	void construir();
	void dibujarEscena() const;
	//void guardarImagen();


public:
	ViewPlane vp;
	ColorRGB colorFondo;
	Tracer*	tracer_ptr;
	Esfera esfera;
	vector<ObjetoGeometrico*> objetos;
	
private:
	void delete_objects(void);
};

