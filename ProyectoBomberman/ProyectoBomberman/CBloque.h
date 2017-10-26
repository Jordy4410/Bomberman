#pragma once
#include <string.h>

using namespace System;
using namespace System::Drawing;

class CBloque
{
private:
	int X, Y, Ancho, Largo;
	int Tipo;

public:
	CBloque(int X, int Y, int Ancho, int Largo, int Tipo);
	~CBloque();
	void Dibujar(Graphics^ g, Bitmap^ bloque1, Bitmap^ bloque2, Bitmap^ bloque3);
};

CBloque::CBloque(int X, int Y, int Ancho, int Largo, int Tipo)
{
	this->X = X;
	this->Y = Y;
	this->Ancho = Ancho;
	this->Largo = Largo;
	this->Tipo = Tipo;
	
}

CBloque::~CBloque(){}

void CBloque::Dibujar(Graphics^ g, Bitmap^ bloque1, Bitmap^ bloque2, Bitmap^ bloque3)
{
	switch (Tipo)
	{
	case 1: g->DrawImage(bloque1, X, Y, Ancho, Largo); break;
	case 2: g->DrawImage(bloque2, X, Y, Ancho, Largo); break;
	case 3: g->DrawImage(bloque2, X, Y, Ancho, Largo); break;
	}
}
