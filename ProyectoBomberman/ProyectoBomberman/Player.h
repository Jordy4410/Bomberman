#pragma once
#include "VecBombas.h"
#include "CTablero.h"


using namespace System::Drawing;
using namespace System::Windows::Forms;

#define COL 4
#define FIL 4

class CPlayer
{
private:
	int X, Y;
	int dX, dY;
	int Ancho, Largo;
	int AnchoF, LargoF;
	int Indice;
	int Tipo;
	enum TypeMove { Estatico, Derecha, Izquierda, Arriba, Abajo };
	TypeMove Direccion;

	//Creamos el objeto del vectro bombas
	CVecBombas* objVecBombas;

public:
	CPlayer(int X, int Y, int Ancho, int Largo, int AnchoF, int LargoF);
	~CPlayer();

	void Set_Posicion(int X, int Y);

	//Get para después poder comparar las posiciones 
	int Get_X();
	int Get_Y();

	int Get_IndiceY();
	void Dibujar(Graphics^ g, Bitmap^ img, Bitmap^ bomba);
	void Set_Direccion(Keys Tecla);
	void Mover();
};

CPlayer::CPlayer(int X, int Y, int Ancho, int Largo, int AnchoF, int LargoF)
{
	this->X = X;
	this->Y = Y;
	this->Ancho = Ancho;
	this->Largo = Largo;
	this->AnchoF = AnchoF;
	this->LargoF = LargoF;
	this->dX = 14;
	this->dY = 14;
	this->Indice = 0;
	this->Direccion = TypeMove::Estatico;

	//Inicializamos el objeto del vectro bombas
	objVecBombas = new CVecBombas;
}

CPlayer::~CPlayer(){}

int CPlayer::Get_X(){return X;}

int CPlayer::Get_Y(){return Y;}

void CPlayer::Set_Posicion(int X, int Y)
{
	this->X = X;
	this->Y = Y;
}

int CPlayer::Get_IndiceY()
{
	int IndiceY = 1;

	switch (Direccion)
	{
	case TypeMove::Derecha: IndiceY = 2; break;
	case TypeMove::Izquierda: IndiceY = 0; break;
	case TypeMove::Arriba: IndiceY = 3; break;
	case TypeMove::Abajo: IndiceY = 1; break;
	}

	return IndiceY;
}

void CPlayer::Dibujar(Graphics^ g, Bitmap^ img, Bitmap^ bomba)
{
	int AnchoI = img->Width / COL;
	int LargoI = img->Height / FIL;

	// Se manda a dibujar las bomba
	objVecBombas->Dibujar(g, bomba);

	Rectangle Origen = Rectangle(Indice * AnchoI,
		Get_IndiceY() * LargoI,
		AnchoI, LargoI);
	Rectangle Destino = Rectangle(X, Y, Ancho, Largo);

	g->DrawImage(img, Destino, Origen, GraphicsUnit::Pixel);

	if (Direccion == TypeMove::Estatico) return;

	if (Indice == COL-1)
	{
		Indice = 0;
		Direccion = TypeMove::Estatico;
	}
	else
	{
		Mover();
		Indice++;
	}
}

void CPlayer::Mover()
{
	switch (Direccion)
	{
	case TypeMove::Derecha:
		if (X + Ancho + dX > AnchoF - Ancho) break;
		else
			X += dX;
		break;

	case TypeMove::Izquierda:
		if (X - dX < Ancho) break;
		else
			X -= dX;
		break;

	case TypeMove::Arriba:
		if (Y - dY < Largo + 42) break;
		else
			Y -= dY;
		break;
	case TypeMove::Abajo:
		if (Y + Largo  > LargoF - Largo ) break;
		else
			Y += dY;
		break;
	}
}

void CPlayer::Set_Direccion(Keys Tecla)
{
	if (Direccion != TypeMove::Estatico) return;

	switch (Tecla)
	{
	case Keys::Right: Direccion = TypeMove::Derecha; break;
	case Keys::Left: Direccion = TypeMove::Izquierda; break;
	case Keys::Up: Direccion = TypeMove::Arriba; break;
	case Keys::Down: Direccion = TypeMove::Abajo; break;
	case Keys::Space:
		objVecBombas->Agregar_Bombas(X, Y, Ancho, Largo);
		break;
	}
}
