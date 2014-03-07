#include "Interfaz.h"


Interfaz::Interfaz(void)
{
}


Interfaz::~Interfaz(void)
{
}

//El metodo  es para que el usuario vea posicion a jugar
void Interfaz::ImprimirPos()
{
	system("cls");
		cout<<"0 y 0"<<" | "<<"0 y 1"<<"| "<<"0 y 2"<<endl;
		cout<<"______|______|______"<<endl;
		cout<<"1 y 0"<<" | "<<"1 y 1"<<"| "<<"1 y 2"<<endl;
		cout<<"______|______|______"<<endl;
		cout<<"2 y 0"<<" | "<<"2 y 1"<<"| "<<"2 y 2"<<endl<<endl<<endl;

		
}

//El metodo es para que el usuario escoja una posicion y le asigne un signo
void Interfaz::SelecionarPos()
{
	
	int i,j;
	char signo;
	cout<<"INGRESE LA POSICION A JUGAR:"<<endl<<endl;

	cout<<"Primer numero: ";
	cin>>i;
	cout<<"Segundo Numero: ";
	cin>>j;
	if(ValidarPos(i,j)==true){
	cout<<endl<<"Ingrese el signo o/x: ";
	cin>>signo;
	t.setPos(i,j,signo);
	}
	else{cout<<"Ya se habia seleccionado esa posicion"<<endl;Sleep(500);}

	
}

//El metodo lo que hace es ver si la posicion que el usuario escogio esta libre
bool Interfaz::ValidarPos(int i, int j)
{
	if((i>=3)||(j>=3))
	{cout<<"INGRESO UNA UBICACION NO VALIDA"<<endl;Sleep(500);return false;}
	else{
		if(t.getPos(i,j)==0){return true;}
		else{return false;}
	
	}
}

//El metodo es para que el o los usuarios vean el tablero del juego y asi puedan escoger el lugar de la siquiente posicion
void Interfaz::ImprimirTab()
{
	system("cls");
	cout<<"TABLERO"<<endl<<endl;
	cout<<t.getPos(0,0)<<" | "<<t.getPos(0,1)<<" | "<<t.getPos(0,2)<<endl;
			cout<<"__|___|___"<<endl;
	cout<<t.getPos(1,0)<<" | "<<t.getPos(1,1)<<" | "<<t.getPos(1,2)<<endl;
			cout<<"__|___|___"<<endl;
	cout<<t.getPos(2,0)<<" | "<<t.getPos(2,1)<<" | "<<t.getPos(2,2)<<endl;
	Sleep(4500);
	
}

//El metodo busca si hay un ganador y si lo hay da por finalizado el juego
bool Interfaz::Ganador()
{
	char marca='o';
	char marc='x';
	int sigue=0;
	
	if(((t.getPos(0,0)!=marca)&&(t.getPos(0,1)!=marca)&&(t.getPos(0,2)!=marca))||((t.getPos(0,0)!=marc)&&(t.getPos(0,1)!=marc)&&(t.getPos(0,2)!=marc)))
	{
		if(((t.getPos(1,0)==marca)&&(t.getPos(1,1)==marca)&&(t.getPos(1,2)==marca))||((t.getPos(1,0)==marc)&&(t.getPos(1,1)==marc)&&(t.getPos(1,2)==marc)))
	{
		return false;
	}
		else{sigue+=1;}
	if(((t.getPos(2,0)==marca)&&(t.getPos(2,1)==marca)&&(t.getPos(2,2)==marca))||((t.getPos(2,0)==marc)&&(t.getPos(2,1)==marc)&&(t.getPos(2,2)==marc)))
	{
		return false;
	}
	else{sigue+=1;}
	if(((t.getPos(0,0)==marca)&&(t.getPos(1,1)==marca)&&(t.getPos(2,2)==marca))||((t.getPos(0,0)==marc)&&(t.getPos(1,1)==marc)&&(t.getPos(2,2)==marc)))
	{
		return false;
	}
	if(((t.getPos(2,0)==marca)&&(t.getPos(1,1)==marca)&&(t.getPos(0,2)==marca))||((t.getPos(2,0)==marc)&&(t.getPos(1,1)==marc)&&(t.getPos(0,2)==marc)))
	{
		return false;
	}
	else{sigue+=1;}

	if(((t.getPos(0,0)==marca)&&(t.getPos(1,0)==marca)&&(t.getPos(2,0)==marca))||((t.getPos(0,0)==marc)&&(t.getPos(1,0)==marc)&&(t.getPos(2,0)==marc)))
	{
		return false;
	}
	else{sigue+=1;}
	if(((t.getPos(0,1)==marca)&&(t.getPos(1,1)==marca)&&(t.getPos(2,1)==marca))||((t.getPos(0,1)==marc)&&(t.getPos(1,1)==marc)&&(t.getPos(2,1)==marc)))
	{
		return false;
	}
	else{sigue+=1;}
	if(((t.getPos(0,2)==marca)&&(t.getPos(1,2)==marca)&&(t.getPos(2,2)==marca))||((t.getPos(0,2)==marc)&&(t.getPos(1,2)==marc)&&(t.getPos(2,2)==marc)))
	{
		return false;
	}
	else{sigue+=1;}


	if(sigue!=0){return true;}
	}
	else{return false;}
}

//El menu del juego
void Interfaz::menu()
{
		char opc='w';
		while(opc!='s')
	{
		system("cls");
		cout<<"*************************"<<endl;
		cout<<"*       GATO      *"<<endl;
		cout<<"*************************"<<endl<<endl;
		cout<<"Para Jugar  turno......ingrese t"<<endl;
		cout<<"Para Reiniciar.........ingrese r"<<endl;
		cout<<"[SALIR]................ingrese s"<<endl;
		cout<<"OPCION: ";cin>>opc;

		Switch(opc);}

}

//La interaccion del usuario con el menu
int Interfaz::Switch(char opc)
{
	
	switch(opc)
	{
	case 't':{
	if(Ganador()!=false){
	ImprimirTab();
	ImprimirPos();
	SelecionarPos();}
	else{system("cls");
	cout<<"GANADOR"<<endl;
	
cout<<endl<<"                     ***********"<<endl;
cout<<endl<<"                    **           **"<<endl;
cout<<endl<<"      *****       **               **"<<endl;
cout<<endl<<"     *     *    **      **    **      **"<<endl;
cout<<endl<<"     *     *   **       **    **        **"<<endl;
cout<<endl<<"     *     *  **        **    **         **"<<endl;
cout<<endl<<"      *   *   *                          **"<<endl;
cout<<endl<<"    ************                          **"<<endl;
cout<<endl<<"   *            *   **             **      **"<<endl;
cout<<endl<<"  **            *    **            **      **"<<endl;
cout<<endl<<" **   ***********     **         **       **"<<endl;
cout<<endl<<" *              *       *******         **"<<endl;
cout<<endl<<" **             *                      **"<<endl;
cout<<endl<<"  *   ************                    **"<<endl;
cout<<endl<<"  **            *  **                **"<<endl;
cout<<endl<<"     ************  **              **"<<endl;
cout<<endl<<"                         *********** "<<endl<<endl;

Sleep(8600);ImprimirTab();break;return 0;}
	
	 break;} 
	case 'r':{t.~Tablero();break;}
	case 's':{break;}
	default:{cout<<"INGRESO UNA OPCCION INVALIDA INTENTE NUEVAMENTE"<<endl;Sleep(500);break;}
	}
}


	
