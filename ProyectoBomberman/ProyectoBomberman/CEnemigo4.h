#pragma once

using namespace System::Drawing;
using namespace System::Windows::Forms;

#define COLEnemigo5 3

class CEnemigo4
{
private:
	int X, Y;
	int Ancho, Largo;
	int dX, dY;
	int Indice;
	int AnchoF;
	int LargoF;
	int	Direccion;


public:
	CEnemigo4(int X, int Y, int Ancho, int Largo, int AnchoF, int LargoF);
	~CEnemigo4();

	//Get para después poder comparar las posiciones 
	int Get_X();
	int Get_Y();

	void DibujarE(Graphics^ g, Bitmap^ imgEnemigo5);
	void Mover(int AnchoF, int LargoF);
};

CEnemigo4::CEnemigo4(int X, int Y, int Ancho, int Largo, int AnchoF, int LargoF)
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
	this->Direccion = 1;

}
CEnemigo4::~CEnemigo4(){}

int CEnemigo4::Get_X(){ return X; }

int CEnemigo4::Get_Y(){ return Y; }

void CEnemigo4::DibujarE(Graphics^ g, Bitmap^ imgEnemigo5)
{
	int AnchoI = imgEnemigo5->Width / COLEnemigo5;
	int LargoI = imgEnemigo5->Height;

	Rectangle Origen = Rectangle(Indice * AnchoI, 0, Direccion * AnchoI, LargoI);
	Rectangle Destino = Rectangle(X, Y, Ancho, Largo);

	g->DrawImage(imgEnemigo5, Destino, Origen, GraphicsUnit::Pixel);


	if (Indice == COLEnemigo5 - 1)
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
