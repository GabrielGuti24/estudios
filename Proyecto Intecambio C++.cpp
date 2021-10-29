#include <iostream>  //Entrada y salida de datos
#include <conio.h> //Getch
#include <stdio.h>//Funcion System
#include <stdlib.h> 
#include <time.h> //Libreria del tiempo
#include <fstream> //Clase para hacer ambas cosas, leer y escribir, gestion de archivos

using namespace std;
//Programamos la función que llamaremos para solicitar la fecha mas adelante.
const string Fecha_actual() {
	time_t	now = time(0);
	struct tm tstruct; //Llamo a la estructura de tiempo
	char	buf[80]; //Asigno un espacio en la memoria a la variable que guardara la fecha
	tstruct = *localtime(&now);
	strftime (buf, sizeof(buf), "%d-%m-%Y", &tstruct); //Asigno la estructura de fecha a la variable y doy orden a su aparición.
	return buf;
}

//Inicio de la función principal.
int main () {
	//Crea el archivo de texto
	ofstream archivo;
	archivo.open ("resultados.txt",ios::out);
	if (archivo.fail()) { //Condición, si el archivo falla al abrir o crearse cierra el programa.
		cout<<"No se pudo abrir el archivo, presione un boton para salir."<<endl;
		getch();
		exit(1);
	}
	

	int a, b;
	int op; 
	float kilate, resultado;
	float quetzal;
	system ("color 0F"); //Cambio de color de interfaz
	cout<<"Bienvenido al programa de conversion de divisas, lo que solicite obtendra un valor en quetzales."<<endl;
	cout<<"Desea cambiar piedras preciosas (1), metales (2) o divisas (3)?"<<endl;
	cout<<"Ingrese 0 para salir"<<endl;
	cin>>a;
	
//Switch de selección para cada una de las opciones
	switch (a) {
		case 0: 
			system ("cls");
			system ("color 47" );
			cout<<"Feliz dia, presione una tecla para salir."<<endl;
			getch ();
			exit(-1); //Salida programada hacia el sistema, se usa getch() anteriormente para evitar que se confunda con un error.
			break;
		case 1:
			system ("cls");
			system ("color 1E" );
			cout<<"Seleccione el tipo de piedra preciosa que desea cambiar"<<endl;
				cout<<"0. Verificar la fuente de los precios"<<endl;
				cout<<"1. Diamantes"<<endl;
				cout<<"2. Rubies"<<endl;
				cout<<"3. Zafiros"<<endl;
				cout<<"4. Esmeraldas"<<endl;
				cin>>op;
					switch (op) { //Como tambien se presentan otras selecciones derivadas de esta, se utiliza otro switch para la navegación de opciones. Gemas/Piedras preciosas
						case 1: 
							cout<<"Ingrese los kilates del diamante"<<endl;
							cin>>kilate;
							resultado=kilate*22022;
							cout<<"La cantidad de valor en quetzales por los "<<kilate<< " kilates para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							archivo<<"La cantidad de valor en quetzales por los "<<kilate<< " kilates para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							cout<<"Presione una tecla para continuar"<<endl;
							getch ();
							break;
						case 2: 
							cout<<"Ingrese los kilates del rubi"<<endl;
							cin>>kilate;
							resultado=kilate*1387.42;
							cout<<"La cantidad de valor en quetzales por los "<<kilate<< " kilates para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							archivo<<"La cantidad de valor en quetzales por los "<<kilate<< " kilates para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							cout<<"Presione una tecla para continuar"<<endl;
							getch ();
							break;
						case 3: 
							cout<<"Ingrese los kilates del zafiro"<<endl;
							cin>>kilate;
							resultado=kilate*2557.80;
							cout<<"La cantidad de valor en quetzales por los "<<kilate<< " kilates para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							archivo<<"La cantidad de valor en quetzales por los "<<kilate<< " kilates para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							cout<<"Presione una tecla para continuar"<<endl;
							getch ();			
							break;
						case 4: 
							cout<<"Ingrese los kilates del esmeralda"<<endl;
							cin>>kilate;
							resultado=kilate*775.09;
							cout<<"La cantidad de valor en quetzales por los "<<kilate<< " kilates para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							archivo<<"La cantidad de valor en quetzales por los "<<kilate<< " kilates para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							cout<<"Presione una tecla para continuar"<<endl;
							getch ();			
							break;
						case 0: 
							system("start www.gemselect.com");
							system("cls");
							cout<<"Presione una tecla para continuar"<<endl;
							getch ();			
							break;
						default: 
							system("cls");
							cout<<"Ingrese una opcion valida, haga click para continuar"<<endl;
							getch ();
					}
			break;
			
		case 2: //Metales preciosos
			system ("cls");
			system ("color 80" );
			cout<<"Seleccione el tipo de metal  que desea cambiar"<<endl;
				cout<<"0. Verificar la fuente de los precios"<<endl;
				cout<<"1. Oro"<<endl;
				cout<<"2. Plata"<<endl;
				cout<<"3. Platino"<<endl;
				cout<<"4. Cobre"<<endl;
				cout<<"5. Estanno"<<endl;
				cin>>op;
					switch (op) {
						case 1: 
							cout<<"Ingrese las onzas de oro"<<endl;
							cin>>kilate;
							resultado=kilate*13889.67;
							cout<<"La cantidad de valor en quetzales por las "<<kilate<< " onzas para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							archivo<<"La cantidad de valor en quetzales por las "<<kilate<< " onzas para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							cout<<"Presione una tecla para continuar"<<endl;
							getch ();
							break;
						case 2: 
							cout<<"Ingrese las onzas de plata"<<endl;
							cin>>kilate;
							resultado=kilate*182.02;
							cout<<"La cantidad de valor en quetzales por las "<<kilate<< " onzas para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							archivo<<"La cantidad de valor en quetzales por las "<<kilate<< " onzas para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							cout<<"Presione una tecla para continuar"<<endl;
								getch ();
							break;
						case 3: 
							cout<<"Ingrese las onzas de platino"<<endl;
							cin>>kilate;
							resultado=kilate*1120.78;
							cout<<"La cantidad de valor en quetzales por las "<<kilate<< " onzas para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							archivo<<"La cantidad de valor en quetzales por las "<<kilate<< " onzas para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							cout<<"Presione una tecla para continuar"<<endl;
								getch ();			
							break;
						case 4: 
							cout<<"Ingrese las toneladas metricas de cobre"<<endl;
							cin>>kilate;
							resultado=kilate*77447.29;
							cout<<"La cantidad de valor en quetzales por las "<<kilate<< " toneladas para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							archivo<<"La cantidad de valor en quetzales por las "<<kilate<< " toneladas para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							cout<<"Presione una tecla para continuar"<<endl;
								getch ();			
							break;
						case 5: 
							cout<<"Ingrese las toneladas metricas de estaño"<<endl;
							cin>>kilate;
							resultado=kilate*301123.63;
							cout<<"La cantidad de valor en quetzales por las "<<kilate<< " toneladas para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							archivo<<"La cantidad de valor en quetzales por las "<<kilate<< " toneladas para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							cout<<"Presione una tecla para continuar"<<endl;
								getch ();			
							break;
						case 0: 
							system("start https://panorama-minero.com/cotizacion-de-metales/");
							system("cls");
							cout<<"Presione una tecla para continuar"<<endl;
							getch ();			
							break;
						default: 
							system("cls");
							cout<<"Ingrese una opcion valida, haga click para continuar"<<endl;
							getch ();
					}
			break;
					
		case 3: //Divisas
			system ("cls");
			system ("color 02" );
			cout<<"Seleccione la divisa que desea cambiar"<<endl;
				cout<<"0. Verificar la fuente de los precios"<<endl;
				cout<<"1. Dolar"<<endl;
				cout<<"2. Euro"<<endl;
				cout<<"3. Peso Mexicano"<<endl;
				cout<<"4. Yen Japones"<<endl;
				cout<<"5. Lempira"<<endl;
				cin>>op;
					switch (op) {
						case 1: 
							cout<<"Ingrese los dolares"<<endl;
							cin>>kilate;
							resultado=kilate*7.75;
								cout<<"La cantidad de valor en quetzales por los "<<kilate<< " dolares para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							archivo<<"La cantidad de valor en quetzales por los "<<kilate<< " dolares para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							getch ();
							break;
						case 2: 
							cout<<"Ingrese los euros"<<endl;
							cin>>kilate;
							resultado=kilate*8.99;
							cout<<"La cantidad de valor en quetzales por los "<<kilate<< " euros para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							archivo<<"La cantidad de valor en quetzales por los "<<kilate<< " euros para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							cout<<"Presione una tecla para continuar"<<endl;
								getch ();
							break;
						case 3: 
							cout<<"Ingrese los pesos mexicanos"<<endl;
							cin>>kilate;
							resultado=kilate*0.38;
							cout<<"La cantidad de valor en quetzales por los "<<kilate<< " pesos mexicanos para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							archivo<<"La cantidad de valor en quetzales por los "<<kilate<< " pesos mexicanos para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							cout<<"Presione una tecla para continuar"<<endl;
								getch ();			
							break;
						case 4: 
							cout<<"Ingrese los yenes japoneses"<<endl;
							cin>>kilate;
							resultado=kilate*0.07;
							cout<<"La cantidad de valor en quetzales por los "<<kilate<< " yenes japoneses para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							archivo<<"La cantidad de valor en quetzales por los "<<kilate<< " yenes japoneses para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
								getch ();			
							break;
						case 5: 
							cout<<"Ingrese los lempiras"<<endl;
							cin>>kilate;
							resultado=kilate*0.32;
							cout<<"La cantidad de valor en quetzales por los "<<kilate<< " lempiras para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							archivo<<"La cantidad de valor en quetzales por los "<<kilate<< " lempiras para el " << Fecha_actual() <<" es Q"<<resultado<<endl;
							cout<<"Presione una tecla para continuar"<<endl;
								getch ();			
							break;
						case 0: 
							system("start https://www.banguat.gob.gt/cambio/");
							system("cls");
							cout<<"Presione una tecla para continuar"<<endl;
							getch ();			
							break;
						default: 
							system("cls");
							cout<<"Ingrese una opcion valida, haga click para continuar"<<endl;
							getch ();
					}
			break;	
		
		default: //Opcion en caso de que el usuario no ingrese una opcion numerica dentro del rango.
		system ("color 47");
		cout<<"Ingrese una opcion valida, presione una tecla para regresar"<<endl;
		getch ();
		system ("cls");
		main ();
				}
	cout<<"Desea regresar al inicio?"<<endl;
		cout<<"Si (1)"<<endl;
		cout<<"No (2)"<<endl;
		cin>>b;
			switch (b) {
			case 1:	
				system("cls");
				main (); //Regreso a la función principal
					break;
			case 2:
				cout<<"Presione una tecla para salir"<<endl;
				getch ();
				exit (-1);
			break;
			default: 
			cout<<"Ingrese una opcion valida"<<endl;
				main (); //Regreso a la opcion principal
		}
	 archivo.close(); //Cerrar el archivo.
	cout<<"Presione una tecla para salir"<<endl;
	getch ();
	return 0;
}



