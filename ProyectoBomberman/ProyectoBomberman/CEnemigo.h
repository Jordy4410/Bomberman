#pragma once

using namespace System::Drawing;
using namespace System::Windows::Forms;

#define COLEnemigo 4

class CEnemigo
{
private:
	int X, Y;
	int Ancho, Largo;
	int dX, dY;
	int Indice;
	int AnchoF;
	int LargoF;
	
	
public:
	CEnemigo(int X, int Y, int Ancho, int Largo, int AnchoF, int LargoF);
	~CEnemigo();

	//Get para después poder comparar las posiciones 
	int Get_X();
	int Get_Y();

	void DibujarE(Graphics^ g, Bitmap^ imgEnemigo);
	void Mover(int AnchoF,int LargoF);
};

CEnemigo::CEnemigo(int X, int Y, int Ancho, int Largo, int AnchoF, int LargoF)
{
	this->X = X;
	this->Y = Y;
	this->Ancho = Ancho;
	this->Largo = Largo;
	this->dX = 14;
	this->dY = 14;
	this->Indice = 0;
	this->AnchoF = AnchoF;
	this->LargoF = LargoF;
	
}
CEnemigo::~CEnemigo(){}

int CEnemigo::Get_X(){ return X; }

int CEnemigo::Get_Y(){ return Y; }

void CEnemigo::DibujarE(Graphics^ g, Bitmap^ imgEnemigo)
{
	int AnchoI = imgEnemigo->Width / COLEnemigo;
	int LargoI = imgEnemigo->Height;

	Rectangle Origen = Rectangle(AnchoI*Indice, 0, AnchoI, LargoI);
	Rectangle Destino = Rectangle(X, Y, Ancho, Largo);

	g->DrawImage(imgEnemigo, Destino, Origen, GraphicsUnit::Pixel);


	if (Indice == COLEnemigo - 1)
	{
		Indice = 0;
	}
	else
	{
		if (X + dX  < 42 || X + Ancho + dX > AnchoF - 42)
			dX *= -1;
		X += dX;

		Indice++;
	}
}
