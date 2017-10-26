#pragma once

#include "CBombas.h"
#include <vector>
#include <algorithm>

using namespace std;

class CVecBombas
{
private:
	vector<CBombas *> arrBombas;

public:
	CVecBombas();
	~CVecBombas();

	void Agregar_Bombas(int X, int Y, int Ancho, int Largo);
	void Dibujar(Graphics^ g, Bitmap^ bomba);

};

CVecBombas::CVecBombas()
{

}

CVecBombas::~CVecBombas()
{

}

void CVecBombas::Agregar_Bombas(int X, int Y, int Ancho, int Largo)
{
	CBombas *objBombas = new CBombas(X, Y, Ancho, Largo);
	arrBombas.push_back(objBombas);
}

void CVecBombas::Dibujar(Graphics^ g, Bitmap^ bomba)
{
	for (vector<CBombas*>::iterator ite = arrBombas.begin();
		ite != arrBombas.end(); ite++)
	{
		(*ite)->Dibujar(g, bomba);
	}
}
