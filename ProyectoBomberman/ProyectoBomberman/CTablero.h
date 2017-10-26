#pragma once
#include "CBloque.h"
#include <vector>

using namespace std;

class CTablero
{
private:
	vector<CBloque *> arrBloque;
	int N, M;
	int Ancho, Largo;

public:
	CTablero(int X, int Y, int Ancho, int Largo);
	~CTablero();
	void Set_Nivel(int Nivel, int X, int Y);
	void Dibujar(Graphics^ g, Bitmap^ bloque1, Bitmap^ bloque2, Bitmap^ bloque3);
};

CTablero::CTablero(int X, int Y, int Ancho, int Largo)
{
	this->Ancho = Ancho;
	this->Largo = Largo;

	Set_Nivel(1, X, Y);
}

CTablero::~CTablero(){}

void CTablero::Set_Nivel(int Nivel, int X, int Y)
{
	char* Archivo = new char[100];

	int Tipo = -1;

	switch (Nivel)
	{
	case 1: strcpy(Archivo, "Nivel1.txt"); break;
	case 2: strcpy(Archivo, "Nivel2.txt"); break;
	case 3: strcpy(Archivo, "Nivel3.txt"); break;
	case 4: strcpy(Archivo, "Nivel4.txt"); break;
	default: break;
	}

	FILE* pF = freopen(Archivo, "r", stdin);

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf("%d", &Tipo);
			CBloque* objBloque = new CBloque(X + Ancho * j, Y + Largo * i, Ancho,
				Largo, Tipo);

			arrBloque.push_back(objBloque);
		}
	}
	fclose(pF);
}

void CTablero::Dibujar(Graphics^ g, Bitmap^ bloque1, Bitmap^ bloque2, Bitmap^ bloque3)
{
	for (vector<CBloque *>::iterator it = arrBloque.begin();
		it != arrBloque.end(); it++)
	{
		(*it)->Dibujar(g, bloque1, bloque2, bloque3);
	}
}