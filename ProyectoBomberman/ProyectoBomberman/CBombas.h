#pragma once

using namespace System::Drawing;

#define filbomba 2
#define colbomba 4

class CBombas
{
private:

	int X, Y;
	int Ancho, Largo;
	int Indice;
	int IndiceY;
	bool Estado;
	int cont;
//	void Explosion(Graphics^g, Bitmap^img, Bitmap^excentro, Bitmap^exMedioH, Bitmap^exMedioV, Bitmap^exCabezaN, Bitmap^exCabezaS, Bitmap^exCabezaI, Bitmap^exCabezaD, int X, int Y);

public:
	CBombas(int X, int Y, int Ancho, int Largo);
	~CBombas();
	void Dibujar(Graphics^ g, Bitmap^ bomba);
	bool Get_Estado();
};

CBombas::CBombas(int X, int Y, int Ancho, int Largo)
{
	this->X = X;
	this->Y = Y;
	this->Ancho = Ancho;
	this->Largo = Largo;
	this->Indice = 0;
	this->IndiceY = 0;
	this->Estado = true; // CUANDO SE CREA EL PODER ESTÁ ACTIVO
	this->cont = 0; //Tiempo de exploción

}

CBombas::~CBombas()
{

}

void CBombas::Dibujar(Graphics^ g, Bitmap^ bomba)
{
	int AnchoI = bomba->Width / colbomba;
	int LargoI = bomba->Height / filbomba;

	if (cont <= 30){ //Si el contador es mayor a 30 la Bomba Desaparece

		Rectangle Origen = Rectangle(Indice * AnchoI,
			IndiceY * LargoI,
			AnchoI, LargoI);
		Rectangle Destino = Rectangle(X, Y, Ancho, Largo);

		g->DrawImage(bomba, Destino, Origen, GraphicsUnit::Pixel);

		if (Indice == colbomba - 1)
		{
			Indice = 0;
			IndiceY++;

			if (IndiceY >= 2){
				IndiceY = 0;
			}

		}
		else
		{
			Indice++;
		}
		cont++;
	}
}

bool CBombas::Get_Estado()
{
	return this->Estado;
}

//
//void CBombas::Explosion(Graphics^g, Bitmap^img, Bitmap^excentro, Bitmap^exMedioH, Bitmap^exMedioV, Bitmap^exCabezaN, Bitmap^exCabezaS, Bitmap^exCabezaI, Bitmap^exCabezaD, int X, int Y){
//	Ancho = img->Width;
//	Largo = img->Height;
//	if (cont > 32 && cont <= 36){
//		//g->DrawRectangle(Pens::Red, x, y, w, h);
//		
//porcion_imagen = Rectangle(X, Y, Ancho, Largo);
//
//		g->DrawImage(img, X, Y, porcion_imagen, GraphicsUnit::Pixel);
//		cont++;
//	}
//	if (cont > 36 && cont < 46){
//
//		porcion_imagen = Rectangle(0, 0, 50, 50);
//		g->DrawImage(excentro, X, Y, porcion_imagen, GraphicsUnit::Pixel);
//		if (pasabx != true){
//			//explosion derecha
//			if (X + 50 < 724){
//				g->DrawImage(exMedioH, X + 50, Y, porcion_imagen, GraphicsUnit::Pixel);
//			}
//			if (X + 100 < 724){
//				g->DrawImage(exCabezaD, X + 100, Y, porcion_imagen, GraphicsUnit::Pixel);
//			}
//			bombaD = Rectangle(X + 50, Y, 50, 50);
//			//explosion izquierda
//			if (X > 0 + 75){
//				g->DrawImage(exMedioH, X - 50, Y, porcion_imagen, GraphicsUnit::Pixel);
//			}
//			if (X - 50 > 0 + 75){
//				g->DrawImage(exCabezaI, X - 100, Y, porcion_imagen, GraphicsUnit::Pixel);
//			}
//			bombaI = Rectangle(X - 50, Y, 50, 50);
//		}
//		if (pasaby != true){
//			//explosion arriba
//			if (Y > 0 + 51){
//				g->DrawImage(exMedioV, X, y - 50, porcion_imagen, GraphicsUnit::Pixel);
//			}
//			if (Y - 50 > 0 + 51){
//				g->DrawImage(exCabezaN, X, Y - 100, porcion_imagen, GraphicsUnit::Pixel);
//			}
//			bombaN = Rectangle(X, Y - 50, 50, 50);
//			//explosion abajo
//			if (Y + 50 < 600){
//				g->DrawImage(exMedioV, X, Y + 50, porcion_imagen, GraphicsUnit::Pixel);
//			}
//			if (Y + 100 < 600){
//				g->DrawImage(exCabezaS, X, Y + 100, porcion_imagen, GraphicsUnit::Pixel);
//			}
//			bombaS = Rectangle(X, Y + 50, 50, 50);
//
//		}
//		cont++;
//	}
//	pasabx = false;
//	pasaby = false;
//
//
//}