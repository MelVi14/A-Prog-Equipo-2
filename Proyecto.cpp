#include <iostream>
#include<cstdlib>
#include<conio.h>
#ifdef _WIN32
  #include<windows.h>
#endif 
#include <string>
using namespace std;

void limpiar_pantalla()
{
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

struct Alumno {
    string nombre;
    float calificaciones[10];
    float promedio;
};

void capturarDatosAlumnos(Alumno alumnos[], int cantidad) {
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el nombre del alumno " << i + 1 << ": ";
        cin >> alumnos[i].nombre;
        float sumaCalificaciones = 0;
        cout << "Ingrese la calificacion " << i + 1 << " del alumno " << i + 1 << ": ";
        cin >> alumnos[i].calificaciones[i];
        sumaCalificaciones += alumnos[i].calificaciones[i];
        alumnos[i].promedio = sumaCalificaciones / 10;
    }
}
void mostrarDatosAlumnos(const Alumno alumnos[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << "Alumno " << ": " << alumnos[i].nombre << endl;
        cout << "Promedio: " << alumnos[i].promedio << endl;
        cout << endl;
    }
}

void gotoxy (int x, int y){
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	
	COORD dwPos; 
	dwPos.X = x ; 
	dwPos.Y = y ;
	SetConsoleCursorPosition(hCon, dwPos);
}

void calculadora(int opcion , int numero, int suma, int resta, int mul, int div, int decision){
    cout << "                                        Estoy en la Calculadora " <<"\n";
    cout<<"a)  Suma = 1 \n";
    cout<<"b)  Resta = 2 \n";
    cout<<"c)  Multiplicacion = 3 \n";
    cout<<"d)  Division = 4 \n";
    cout<<"e)  Salir al menu principal = 0 \n";
    cin >>opcion;
   
    while(opcion>0){
 system("cls");
    if(opcion== 1){
    do{
    cout<<"Digite un numero: ";
    cin >> numero;
    suma=suma+numero;
cout<<"¿Quiere seguir sumando?";
cout<<"a)  si = 1 \n";
cout<<"b)  no = 0 \n";
    cin>> decision;
}while(decision== 1);
    cout<<"El resultado de la suma es: "<< suma<<endl;
}else
if(opcion== 2){
do{
    cout<<"Digite un numero: ";
    cin >> numero;
    resta=resta-numero;
cout<<"¿Quiere seguir restando?";
cout<<"a)  si = 1 \n";
cout<<"b)  no = 0 \n";
    cin>> decision;
}while(decision== 1);
}else
if(opcion== 3){
do{
    cout<<"Digite un numero: ";
    cin >> numero;
    mul=mul*numero;
cout<<"¿Quiere seguir multiplicando?";
cout<<"a)  si = 1 \n";
cout<<"b)  no = 0 \n";
    cin>> decision;
}while(decision== 1);
}
    else
if(opcion== 4){
do{
    cout<<"Digite un numero: ";
    cin >> numero;
    div=div/numero;
cout<<"¿Quiere seguir restando?";
cout<<"a)  si = 1 \n";
cout<<"b)  no = 0 \n";
    cin>> decision;
}while(decision== 1);
}

}

bool funcion4(int dia_de_la_semana) {
	if (dia_de_la_semana == 1) {
		cout << " Domingo ";
	}
	if (dia_de_la_semana == 2) {
		cout << " Lunes ";
	}
	if (dia_de_la_semana == 3) {
        cout << " Martes ";
	}
	if (dia_de_la_semana == 4) {
		cout << " Miercoles ";
	}
	if (dia_de_la_semana == 5) {
		cout << " Jueves ";
	}
	if (dia_de_la_semana == 6) {
		cout << " Viernes ";
	}
	if (dia_de_la_semana ==7) {
		cout << " Sabado ";
	}
	if (dia_de_la_semana == 1 || dia_de_la_semana == 7) {
		cout << " Es Fin de Semana ";
	}
	if (dia_de_la_semana >= 2 && dia_de_la_semana <= 6) {
		cout << " Tiempo de Estudiar ";
	}
}

string funcion5(string s) {
	for(unsigned int i=0;i<s.size();i++)
		s[i] = tolower(s[i]);
	return s;
}

void funcion6(void){
   
    char salir;
    do{
for (int i=0;i<5;i++){
for (int j=0;j<5;j++){
cout << " *";
}
cout << "\n";
}
        cout << "\n \n" << "Para repetir presione cualquier tecla, para regresar al MENU principal presione \'s\' minuscula:_ ";
        cin >> salir;
    }while(salir != 's');
   
}


void funcion7( char name[], char apellidop[], char apellidom[]) {
	float i;
	for (i=1;i<=5;i++) {
		cout << "Digite su nombre" << endl;
		cin >> name[i];
		cout << "Digite su apellido paterno" << endl;
		cin >> apellidop[i];
		cout << "Digite su apellido materno" << endl;
		cin >> apellidom[i];
	}
}




int main()


{

    int opc = 0;
    do{
        limpiar_pantalla();
        cout << "*********************** MENU PRINCIPAL *****************************\n\n\n\n\n";
        cout << "1 Promedio de Calificaciones\n";
        cout << "2 Calculadora\n";
        cout << "3 Cálculo de Áreas\n";
        cout << "4 Días de la Semana\n";
        cout << "0 Salir\n";
        cout << "\n\n\nSelecciona alguna opción:_ ";
        cin >> opc;
        switch(opc){
            case 1:
                capturarDatosAlumnos(Alumno alumnos[],  cantidad)();
                mostrarDatosAlumnos( Alumno alumnos[],  cantidad)
                	const int cantidadAlumnos = 10;
   				 	Alumno alumnos[cantidadAlumnos];
   				 	capturarDatosAlumnos(alumnos, cantidadAlumnos);
   					 mostrarDatosAlumnos(alumnos, cantidadAlumnos);
    				system("pause");
   				 	return 0;
                break;
            case 2:
                calculadora( opcion ,  numero,  suma,  resta,  mul,  div,  decision);
                break;
            case 3:
                funcion3();
                	gotoxy(22,2) ; cout << "Por favor, digite los diez numeros que desaera guardar en su arreglo,";
					gotoxy(38,3) ; cout << "pueden ser los de su preferencia" ;
	
					for(int i = 0 ; i < 10 ; i++){
	  				  gotoxy(90,4);cout << "\n-> " ; cin >> F[i] ; 
						}
					
					gotoxy(50,6); cout << "Listo :)";
					gotoxy(22,7); cout << "Ahora, Cual numero de los que guardo en su arreglo quiere buscar -> "; cin >> numero ;
	
					for(int i = 0 ; i < 10 ; i++){
	    				if (numero == F[i]){
	    				gotoxy(38, 9); cout << "Su numero se encuentra en la casilla " << F[i - 1] << endl ; 
						}
						else if(numero !=  F[10-1]){
					gotoxy(24, 10); cout << "El numero que usted quiere buscar no se encuentra en este arreglo" << endl ;
						}
					} 
                break;
            case 4:
                funcion4(dia_de_la_semana);
                	int dia_de_la_semana;
					cout << " Ingresa un número del 1 al 7 ";
					cin >> dia_de_la_semana;
					funcion4(dia_de_la_semana);
                break;
            case 5:
                funcion5(S);
                	string palabra;
					string respuesta;
					cout << "digite la palabra que desea convertir a minusculas?" << endl;
					cin >> palabra;
					cout << minusculas(palabra) << endl;
					cout << "desea continuar con el  programa? 1=salir 2=continual con el programa" << endl;
					cin >> respuesta;
					while (respuesta=="2") {
					cout << "digite la palabra que desea convertir a minusculas?" << endl;
					cin >> palabra;
					cout << minusculas(palabra) << endl;
					cout << "desea continuar con el  programa? 1=salir 2=continual con el programa" << endl;
					cin >> respuesta;
					}
				return 0;
                break;
            case 6:
                funcion6(void);
                break;
            case 7:
                funcion7(name[],  apellidop[],  apellidom[]);
                	char apellidom[5];
					 char apellidop[5];
					int eleccion;
					int i;
					char name[5];
					eleccion = 0;
					do {
					cout << endl; 
					cout << "******************* MENU PRINCIPAL ******************" << endl;
					cout << "Escribir nombres....1" << endl;
					cout << "Salir....0" << endl;
					cin >> eleccion;
					switch (eleccion) {
					case 1:
					cout << endl; 
					cout << " " << endl;
					sustituir(name,apellidop,apellidom);
					for (i=1;i<=5;i++) {
					cout << name[i] << "*" << apellidop[i] << "*" << apellidom[i] << endl;
					}
					cout << " " << endl;
					cout << "PRECIONE ENTER PARA CONTINUAR " << endl;
					cin.get(); 
				break;
				case 0:
				break;
					}
				} while (eleccion!=0);
				return 0;
                break;

       				 }
    			}while(opc != 0);

    return 0;
}

