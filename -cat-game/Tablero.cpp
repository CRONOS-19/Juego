#include "Tablero.h"

//constructor
Tablero::Tablero(void)
{
	for(int i=0; i<tam;i++)
	{
		for(int j=0;j<tam;j++)
		{
			tablero[i][j]=0;
		}
	}
}

//destructor para utilizarlo como reinicio
Tablero::~Tablero(void)
{
		for(int i=0; i<tam;i++)
	{
		for(int j=0;j<tam;j++)
		{
			tablero[i][j]=0;
		}
	}

}
//get y set
void Tablero::setPos(int i,int j,char valor)
{
	tablero[i][j]=valor;
}

char Tablero::getPos(int i,int j)
{
	return tablero[i][j];
}