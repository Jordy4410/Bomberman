#pragma once

using namespace System::Drawing;
using namespace System::Windows::Forms;

class CItem
{
private:
	int X, Y;
	int Ancho, Largo;

public:
	CItem(int X, int Y);
	~CItem();

	//Get para después poder comparar las posiciones 
	int Get_X();
	int Get_Y();

	void Dibujar(Graphics^ g, Bitmap^ img);
};

CItem::CItem(int X, int Y)
{
	this->X = X;
	this->Y = Y;
	
}
CItem::~CItem(){}

int CItem::Get_X(){ return X; }

int CItem::Get_Y(){ return Y; }

void CItem::Dibujar(Graphics^ g, Bitmap^ img)
{
	g->DrawImage(img, X,Y,42,42);
}
