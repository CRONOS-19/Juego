#pragma once
#include"Biblioteca.h"
const int tam=3;
class Tablero
{
private:
	char  tablero[tam][tam];

public:
	//constructore y destructor
	Tablero(void);
	~Tablero(void);
	// get y set
	void setPos(int i,int j,char valor);
	char getPos(int i,int j);
};

