#pragma once

using namespace System::Drawing;
using namespace System::Windows::Forms;

#define COLEnemigo3 5

class CEnemigo2
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
	CEnemigo2(int X, int Y, int Ancho, int Largo, int AnchoF, int LargoF);
	~CEnemigo2();

	//Get para después poder comparar las posiciones 
	int Get_X();
	int Get_Y();

	void DibujarE(Graphics^ g, Bitmap^ imgEnemigo3);
	void Mover(int AnchoF, int LargoF);
};

CEnemigo2::CEnemigo2(int X, int Y, int Ancho, int Largo, int AnchoF, int LargoF)
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
CEnemigo2::~CEnemigo2(){}

int CEnemigo2::Get_X(){ return X; }

int CEnemigo2::Get_Y(){ return Y; }

void CEnemigo2::DibujarE(Graphics^ g, Bitmap^ imgEnemigo3)
{
	int AnchoI = imgEnemigo3->Width / COLEnemigo3;
	int LargoI = imgEnemigo3->Height;

	Rectangle Origen = Rectangle(Indice * AnchoI, 0, Direccion * AnchoI, LargoI);
	Rectangle Destino = Rectangle(X, Y, Ancho, Largo);

	g->DrawImage(imgEnemigo3, Destino, Origen, GraphicsUnit::Pixel);


	if (Indice == COLEnemigo3 - 1)
	{
		Indice = 0;
	}
	else
	{
		if (Y + dY  < 42*2 || Y + Largo + dY > LargoF - 42)
			dY *= -1;
		Y += dY;

		

		Indice++;
	}
}
