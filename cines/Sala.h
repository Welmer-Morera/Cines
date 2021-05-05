#pragma once
#pragma once
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
using std::string;
/* Proyecto cines Ezau Zuñiga-Welmer Zuñiga
Universidad Nacional de Costa Rica*/
class Sala
{
private:
	
	string nombre;
	int  edad;
	string asiento;
	int precio_pa;
	string condicion;

public:

	Sala()
	{
		
		this->nombre = "";
		this->edad = 0;
		this->asiento = "";
		this->precio_pa = 0;
		this->condicion = "";

	}
	Sala( string nombre, int edad, string asiento, int precio_pa, string condicion)
	{
		
		this->nombre = nombre;
		this->asiento = asiento;
		this->edad = edad;
		this->precio_pa = precio_pa;
		this->condicion = condicion;
	}
	//SETTER
	
	void setNombre(string nombre)
	{
		this->nombre = nombre;
	}
	void setCondicion(string condicion)
	{
		this->condicion = condicion;
	}

	void setAsiento(string asiento)
	{
		this->asiento = asiento;
	}

	void setEdad(int edad)
	{
		this->edad = edad;
	}
	void setPrecio_pa(int precio_pa)
	{
		this->precio_pa = precio_pa;
	}
	//GETTER
	
	string getNombre()
	{
		return nombre;
	}
	string getCondicion()
	{
		return condicion;
	}
	int getEdad()
	{
		return edad;
	}
	int getPrecio_pa()
	{
		return precio_pa;
	}
	string getAsiento()
	{
		return asiento;
	}


	string toString()
	{

		std::stringstream salida; //variable para concatenar texto
		salida << "   "  << endl <<"<-----Asiento:   "<< this->asiento<< endl <<"<-----Nombre:   "<< this->nombre << endl <<"<-----Total a pagar:   "<< this->precio_pa << endl <<"<-----condicion del asiento:   "<< this->condicion << endl <<"<-----Edad:   "<< this->edad << "\n" ;
		return salida.str();
		system("pause");

	}
	~Sala()
	{
	}
};





