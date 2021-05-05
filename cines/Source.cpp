#include"Sala.h"
#include"Sala_regular.h"
#include"Sala_Vip.h"


void main(){
	int opcion;
	int hora;
	Sala_regular regular;
	Sala_Vip vip;
	system("cls");


menu:
	system("color 3f");
	system("cls");
	cout << "\n ================================================================" << endl
		<< "\t\t     CINES CABALLITO NICOYANO" << endl
		<< "\t\t     >>>>>>Bienvenido<<<<<<<" << endl
		<< " \n ||  COMPRA DE TIQUETES " << endl
		<< " ||     1-> Sala Regualar  " << endl
		<< " ||     2-> sala VIP " << endl

		<< " ||     3-> SALIR" << endl
		<< "\n ================================================================" << endl
		<< "      ELIJA : ";
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		system("cls");
		cout << endl
		
			<< "\t\t     CARTELERA" << endl;
			cout << endl;
			cout << "\n ================================================================" << endl
			<< " ||     <-> THE AVENGERS           ||         <-> GUERRA MUNDIAL Z    ||" << endl
			<< " ||      -> ACCION                 ||          ->ACCION              ||" << endl
			<< " ||      -> SUBTITULADA            ||          ->DOBLADA             ||" << endl
			<< " ||      -> 3D                     ||          ->2D                  ||" << endl
			<< " ||      -> TODO PUBLICO           ||          ->TODO PUBLICO         ||" << endl
			<< " ||      -> 5:PM                   ||          ->8:PM                ||" << endl
			<< "\n ================================================================" << endl;
			cout << "Digite el horario de la pelicula que desea ver   (5-8)"  << endl;
			cin >> hora;
			if (hora==5)
			{
				regular.menu_sr();
				system("pause");
				goto menu;

			}
			else if (hora==8)
			{
				regular.menu_srT();
				system("pause");
				goto menu;
			}
		
		break;
	case 2:
		system("cls");
		cout << endl

			<< "\t\t     CARTELERA" << endl;
		cout << endl;
		cout << "\n ====================================================================" << endl
			<< " ||     <-> EL CONJURO             ||         <-> QUE PASO AYER?      ||" << endl
			<< " ||      -> TERROR                 ||          ->COMEDIA              ||" << endl
			<< " ||      -> SUBTITULADA            ||          ->DOBLADA              ||" << endl
			<< " ||      -> 4D                     ||          ->3D                   ||" << endl
			<< " ||      -> TODO PUBLICO           ||          ->TODO PUBLICO         ||" << endl
			<< " ||      -> 5:PM                   ||          ->8:PM                 ||" << endl
			<< "\n ================================================================" << endl;
		cout << "Digite el horario de la pelicula que desea ver" << endl;
		cin >> hora;
		if (hora == 5)
		{
			vip.menu_sr();
			system("pause");
			goto menu;

		}
		else if (hora == 8)
		{
			vip.menu_srT();
			system("pause");
			goto menu;
		}
		
		break;
	


	case 3:
		system("cls");
		cout << "\n\n\n\n\n\t Esta seguro de salir?" << endl
			<< "\t\t1-> SI \t 0->NO" << endl
			<< "\t\t"; cin >> opcion;

		break;
	default:
		break;
	}











}