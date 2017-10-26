#pragma once

using namespace System::Drawing;
using namespace System::Windows::Forms;

#define COLEnemigo4 3

class CEnemigo3
{
private:
	int X, Y;
	int Ancho, Largo;
	int dX, dY;
	int Indice;
	int AnchoF;
	int	Direccion;
	int LargoF;


public:
	CEnemigo3(int X, int Y, int Ancho, int Largo, int AnchoF, int LargoF);
	~CEnemigo3();

	//Get para después poder comparar las posiciones 
	int Get_X();
	int Get_Y();

	void DibujarE(Graphics^ g, Bitmap^ imgEnemigo4);
	void Mover(int AnchoF, int LargoF);
};

CEnemigo3::CEnemigo3(int X, int Y, int Ancho, int Largo, int AnchoF, int LargoF)
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
CEnemigo3::~CEnemigo3(){}

int CEnemigo3::Get_X(){ return X; }

int CEnemigo3::Get_Y(){ return Y; }

void CEnemigo3::DibujarE(Graphics^ g, Bitmap^ imgEnemigo4)
{
	int AnchoI = imgEnemigo4->Width / COLEnemigo4;
	int LargoI = imgEnemigo4->Height;

	Rectangle Origen = Rectangle(Indice * AnchoI, 0, Direccion * AnchoI, LargoI);
	Rectangle Destino = Rectangle(X, Y, Ancho, Largo);

	g->DrawImage(imgEnemigo4, Destino, Origen, GraphicsUnit::Pixel);


	if (Indice == COLEnemigo4 - 1)
	{
		Indice = 0;
	}
	else
	{
		if (X + dX  < 42 || X + Ancho + dX > AnchoF - 42){
			dX *= -1;
		}
		X += dX; 

		Indice++;
	}
}
