#pragma once
#include "Sala.h"
class Sala_Vip :
	public Sala
{
private:
	int posicion;
	int pos;
	int const static TAM = 60;
	Sala vector[TAM];
	int const static TeM = 60;
	Sala vectorT[TeM];
public:

	Sala_Vip() :Sala()
	{
		this->posicion = 0;
		this->pos = 0;
	}
	Sala_Vip(string nombre, int edad, string asiento, int precio_pa, string condicion) :Sala(nombre, edad, asiento, precio_pa, condicion)
	{
	}

	void  Agregar_sr(Sala sala)
	{
		if (posicion < TAM)
		{
			vector[posicion] = sala;
			posicion++;
			cout << "-----------> Asiento Guardado con exito <-------------" << endl;
		}
		else

		{
			cout << "------------>No queda espacio <---------------" << endl;
		}
	}
	void  Agregar_srT(Sala sala)
	{
		if (pos < TeM)
		{
			vectorT[pos] = sala;
			pos++;
			cout << "-----------> Asiento Guardado con exito <-------------" << endl;
		}
		else

		{
			cout << "------------>No queda espacio <---------------" << endl;
		}
	}
	void Editar_sr(string codigo, Sala sala)
	{
		for (int i = 0; i < posicion; i++)
		{
			if (vector[i].getAsiento() == codigo)
			{
				sala.setAsiento(vector[i].getAsiento());
				vector[i] = sala;
				cout << "-------->Asiento guardado nuevamente---------------" << endl;
			}

		}

	}
	void Editar_srT(string codigo, Sala sala)
	{
		for (int i = 0; i < pos; i++)
		{
			if (vectorT[i].getAsiento() == codigo)
			{
				sala.setAsiento(vectorT[i].getAsiento());
				vectorT[i] = sala;
				cout << "-------->Asiento guardado nuevamente---------------" << endl;
			}

		}

	}
	void Eliminar_sr(string codigo){
		int a;
		for (int i = 0; i < posicion; i++)
		{
			if (codigo == vector[i].getAsiento())
			{
				cout << "  NOMBRE:" << endl;
				cout << "  " << vector[i].getNombre() << endl;
				cout << "  <=====================================================>" << endl;
				cout << "  				ELIMINADO" << endl;
				cout << "  <=====================================================>" << endl;
				a = i;//posicion a correr hacia la izquierda
				break;
			}

		}
		for (int z = a; z < posicion; z++)
		{
			vector[z] = vector[z + 1];
		}
		posicion--;

	}
	void Eliminar_srT(string codigo){
		int a;
		for (int i = 0; i < pos; i++)
		{
			if (codigo == vectorT[i].getAsiento())
			{
				cout << "  NOMBRE:" << endl;
				cout << "  " << vectorT[i].getNombre() << endl;
				cout << "  <=====================================================>" << endl;
				cout << "  				ELIMINADO" << endl;
				cout << "  <=====================================================>" << endl;
				a = i;//posicion a correr hacia la izquierda
				break;
			}

		}
		for (int z = a; z < pos; z++)
		{
			vectorT[z] = vectorT[z + 1];
		}
		pos--;

	}
	void Imprimir_sr()
	{

		for (int i = 0; i < posicion; i++)
		{
			cout << vector[i].toString();
		}

	}
	void Imprimir_srT()
	{

		for (int i = 0; i < pos; i++)
		{
			cout << vectorT[i].toString();
		}

	}
	bool Validacion_sr(string asiento)
	{
		for (int i = 0; i < posicion; i++)
		{
			if (vector[i].getAsiento() == asiento)
			{
				return  true;

			}

		}
		return false;

	}
	bool Validacion_srT(string asiento)
	{
		for (int i = 0; i < pos; i++)
		{
			if (vectorT[i].getAsiento() == asiento)
			{
				return  true;

			}

		}
		return false;

	}






	void menu_sr()
	{
		Sala persona;
		int op = 0;
		int ced = 0;
		string nombre;
		string asiento;
		int edad = 0;
		int precio_pa = 0;;
		string condicion;

		do{
			system("cls");
			cout << endl;
			cout << "\n  ===========================================" << endl
				<< "\n\t *-------- Compra  de tiquetes Sala Vip --------*" << endl
				<< "\t 1-> comprar asiento" << endl
				<< "\t 2-> Editarla condicion" << endl
				<< "\t 3-> Eliminar asiento" << endl
				<< "\t 4-> facturacion" << endl
				<< "\t 5-> REGRESAR" << endl
				<< "\n  ===========================================" << endl
				<< "\t ELIJA : "; cin >> op;
			switch (op)
			{

			case 1:
				system("cls");

				cout << "\n ================================================================" << endl
					<< "\t\t     CINES CABALLITO NICOYANO" << endl

					<< " \n   ESCOJA SU  ASIENTO " << endl
					<< endl
					<< " || -----------    |A1|-|A2|-|A2|-|A4|-|A5|-|A6|-|A7|-|A8|-|A9|-|A10|---------------" << endl
					<< " ||------------    |B1|-|B2|-|B3|-|B4|-|B5|-|B6|-|B7|-|B8|-|B9|-|B10|-------------- " << endl
					<< " ||------------    |C1|-|C2|-|C3|-|C4|-|C5|-|C6|-|C7|-|C8|-|C9|-|C10|---------------" << endl
					<< " ||------------    |D1|-|D2|-|D3|-|D3|-|D5|-|D6|-|D7|-|D8|-|D9|-|D10|---------------" << endl
					<< " ||------------    |E1|-|E2|-|E3|-|E4|-|E5|-|E6|-|E7|-|E8|-|E9|-|E10|---------------" << endl
					<< " ||------------    |F1|-|F2|-|F3|-|F4|-|F5|-|F6|-|F7|-|F8|-|F9|-|F10|---------------" << endl
					<< endl
					<< "\n ================================================================" << endl
					<< "      ELIJA : ";
				cout << "\n  ======================================================\n" << endl;
				cout << endl;
				cout << "Digite el asiento que desea?(utilice MAYUSCULAS y el numero)      "; cin >> asiento;
				if (!Validacion_sr(asiento))
				{
					cout << "   Digite su nombre nombre:   "; cin >> nombre;

					cout << "Digite la condicion de  su asiento? (reservado-ocupado):     ", cin >> condicion;
					cout << "Digite su edad    "; cin >> edad;
					if (edad <= 12)
					{
						precio_pa = 4500;
					}
					else if (edad>12){
						precio_pa = 6500;
					}

					cout << "\n  ======================================================" << endl;

					persona.setAsiento(asiento);
					persona.setNombre(nombre);
					persona.setCondicion(condicion);
					persona.setEdad(edad);
					persona.setPrecio_pa(precio_pa);
					Agregar_sr(persona);
				}
				else{
					cout << "asiento ocupado...\n" << endl;
				}
				system("pause");
				break;
			case 2:
				system("cls");
				cout << "\n  ===============================================================\n" << endl;
				cout << "   Digite el codigo de su asiento:   "; cin >> asiento;
				if (Validacion_sr(asiento) == true)
				{

					cout << "Digitela  nueva  condicion para  su asiento? (reservado-ocupado):   ", cin >> condicion;
					cout << "\n  ===============================================================\n" << endl
						<< "\n\tCORREGIDO CON EXITO" << endl;

					persona.setAsiento(asiento);
					persona.setCondicion(condicion);

					Editar_sr(asiento, persona);
				}
				else{
					cout << "\n\tEl asiento registrado  no  esta  guardado...\n" << endl;
				}
				system("pause");
				break;
			case 3:
				system("cls");
				cout << "\n  ===============================================================\n" << endl;
				cout << "   Digite el codigo del asiento que desea borrar : "; cin >> asiento;
				if (Validacion_sr(asiento) == true)
				{
					Eliminar_sr(asiento);
				}
				else{
					cout << "\n\tEl asiento no se encuentra resgistrado...\n" << endl;
				}
				system("pause");
				break;
			case 4:
				system("cls");
				cout << endl;
				cout << "<----------FACTURACION--------------->" << endl;
				cout << endl;
				cout << "<-----Pelicula:   EL CONJURO       " << endl;
				Imprimir_sr();

				system("pause");
				break;
			default:
				break;
			}
		} while (op != 5);
	}
	void menu_srT()
	{
		Sala persona1;
		int op = 0;
		int ced = 0;
		string nombre;
		string asiento;
		int edad = 0;
		int precio_pa = 0;;
		string condicion;

		do{
			system("cls");
			cout << endl;
			cout << "\n  ===========================================" << endl
				<< "\n\t *-------- Compra  de tiquetes Sala VIP --------*" << endl
				<< "\t 1-> comprar asiento" << endl
				<< "\t 2-> Editarla condicion" << endl
				<< "\t 3-> Eliminar condicion" << endl
				<< "\t 4-> facturacion" << endl
				<< "\t 5-> REGRESAR" << endl
				<< "\n  ===========================================" << endl
				<< "\t ELIJA : "; cin >> op;
			switch (op)
			{

			case 1:
				system("cls");

				cout << "\n ================================================================" << endl
					<< "\t\t     CINES CABALLITO NICOYANO" << endl

					<< " \n   ESCOJA SU  ASIENTO " << endl
					<< endl
					<< " || -----------    |A1|-|A2|-|A2|-|A4|-|A5|-|A6|-|A7|-|A8|-|A9|-|A10|---------------" << endl
					<< " ||------------    |B1|-|B2|-|B3|-|B4|-|B5|-|B6|-|B7|-|B8|-|B9|-|B10|-------------- " << endl
					<< " ||------------    |C1|-|C2|-|C3|-|C4|-|C5|-|C6|-|C7|-|C8|-|C9|-|C10|---------------" << endl
					<< " ||------------    |D1|-|D2|-|D3|-|D3|-|D5|-|D6|-|D7|-|D8|-|D9|-|D10|---------------" << endl
					<< " ||------------    |E1|-|E2|-|E3|-|E4|-|E5|-|E6|-|E7|-|E8|-|E9|-|E10|---------------" << endl
					<< " ||------------    |F1|-|F2|-|F3|-|F4|-|F5|-|F6|-|F7|-|F8|-|F9|-|F10|---------------" << endl
					<< endl
					<< "\n ================================================================" << endl
					<< "      ELIJA : ";
				cout << "\n  ======================================================\n" << endl;
				cout << endl;
				cout << "Digite el asiento que desea ? (utilice MAYUSCULAS y el numero)      "; cin >> asiento;
				if (!Validacion_srT(asiento))
				{
					cout << "   Digite su nombre nombre :  "; cin >> nombre;

					cout << "Digite la condicion de  su asiento? (reservado-ocupado)     ", cin >> condicion;
					cout << "Digite su edad    "; cin >> edad;
					if (edad <= 12)
					{
						precio_pa = 4500;
					}
					else if (edad>12){
						precio_pa = edad = 6500;
					}

					cout << "\n  ======================================================" << endl;

					persona1.setAsiento(asiento);
					persona1.setNombre(nombre);
					persona1.setCondicion(condicion);
					persona1.setEdad(edad);
					persona1.setPrecio_pa(precio_pa);
					Agregar_srT(persona1);
				}
				else{
					cout << "asiento ocupado...\n" << endl;
				}
				system("pause");
				break;
			case 2:
				system("cls");
				cout << "\n  ===============================================================\n" << endl;
				cout << "   Digite el codigo de su asiento: "; cin >> asiento;
				if (Validacion_srT(asiento) == true)
				{

					cout << "Digitela  nueva  condicion para  su asiento? (reservado-ocupado):  "; cin >> condicion;
					cout << "\n  ===============================================================\n" << endl
						<< "\n\tCORREGIDO CON EXITO" << endl;

					persona1.setAsiento(asiento);
					persona1.setCondicion(condicion);

					Editar_srT(asiento, persona1);
				}
				else{
					cout << "\n\tEl asiento registrado  no  esta  guardado...\n" << endl;
				}
				system("pause");
				break;
			case 3:
				system("cls");
				cout << "\n  ===============================================================\n" << endl;
				cout << "   Digite el codigo del asiento que desea borrar :  "; cin >> asiento;
				if (Validacion_srT(asiento) == true)
				{
					Eliminar_srT(asiento);
				}
				else{
					cout << "\n\tEl asiento no se encuentra resgistrado...\n" << endl;
				}
				system("pause");
				break;
			case 4:
				system("cls");
				cout << endl;
				cout << "<----------FACTURACION--------------->" << endl;
				cout << endl;
				cout << "<-----Pelicula:  QUE PASO AYER?" << endl;
				Imprimir_srT();

				system("pause");
				break;
			default:
				break;
			}
		} while (op != 5);
	}
	~Sala_Vip()
	{
	}
};




