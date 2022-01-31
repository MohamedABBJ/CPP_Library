#include "iostream"
#include "stdlib.h"
#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "clocale"
using namespace std;

struct Bliblioteca{
	char nombre[100];
	char apellido[100];
	char nombrelibro[100];
	char nombreautor[100];
	char editorial[100];
	int genero;
	int estado;
	int casilla;
	int sc;
	int ls;
	int ls2;
	int num2;
	int e;
	int es;
	int gs;
	int ga;
	int li;
	int prestarlib;
	int prestarclient;
}set[9999];

class libro{
	public:
		int cliente,opcion,ncliente,n,ln,estado,regresarl,cl,e,sl,opcion3,ls,ln1,le,l3,num2,editorial,es,cel,lel,a,cs,opcion5,ls2,opcion6;
		int num;
		int genero;
		int regresar;
		int opcion2;
		void programa();
};


void libro::programa(){
	
	mainprincipal:
	system("cls");
	system ("color 3F");
	setlocale(LC_CTYPE,"Spanish");
	cout<<"\t|*********************************************|"<<endl;
	cout<<"\t|*********************************************|"<<endl;
	cout<<"\t|*********************************************|"<<endl;
	cout<<"\t|*********************************************|"<<endl;
	cout<<"\t|*********************************************|"<<endl;
	cout<<"\t|*****Bienvenido a su biblbioteca virtual*****|"<<endl;
	cout<<"\t|***Digite una de las siguientes 5 opciones***|"<<endl;
	cout<<"\t|*********************************************|"<<endl;
	cout<<"\t|*********************************************|"<<endl;
	cout<<"\t|*********************************************|"<<endl;
	cout<<"\t|*********************************************|"<<endl;
	cout<<"\t|*********************************************|"<<endl;
	cout<<" "<<endl;
	cout<<"1.Registro de clientes y libros"<<endl;
	cout<<"2.Realizar el prestamo de un libro"<<endl;
	cout<<"3.Emitir registro fisico del prestamo"<<endl;
	cout<<"4.Salir del programa"<<endl;
	cout<<"Digite una opcion: ";
	cin>>opcion;
	switch (opcion){
		
		case 1:	
			sprincipal:
				system("cls");
				system ("color 3F");
				cout<<"\tRegistro de clientes y libros"<<endl;
				cout<<"1.Registrar cliente"<<endl;
				cout<<"2.Registrar libro"<<endl;
				cout<<"3.Eliminar cliente"<<endl;
				cout<<"4.Eliminar libro"<<endl;
				cout<<"5.Volver al menu principal"<<endl;
				cout<<"Digite una opcion: ";
				cin>>opcion2;
			
			switch (opcion2){
			case 1:
			regresar2:
				system("cls");
				system ("color 3F");
				cout<<"Ingrese el numero de la casilla a registrar: "; 
				cin>>num;
				if (num<=0||num>9999){
				system("cls");
				system ("color cf");
				cout<<"El valor ingresado es incorrecto, intente nuevamente: "<<endl;
				system ("pause");
				goto sprincipal;
			}
				if (set[num].genero!=0){
				system("cls");
				system ("color cf");
				cout<<"Esta casilla se encuentra llena, intente nuevamente"<<endl;
				system ("pause");
				goto regresar2;
			}
				if (set[num].genero==0){
				system("cls");
				system ("color 3F");
				cout<<"Ingrese el nombre del cliente: "; cin>>set[num].nombre;
				cout<<"Ingrese el apellido del cliente: "; cin>>set[num].apellido;
				sexo:
				system("cls");
				system ("color 3F");
				cout<<"\tSeleccione el genero del cliente:"<<endl;
				cout<<"1.Masculino"<<endl;
				cout<<"2.Femenino"<<endl;
				cout<<"-----> ";
				cin>>genero;
				if (genero<1||genero>2){
				system ("color cf");
				cout<<"La opcion digitada es incorrecta, intentelo nuevamente"<<endl;
				system ("pause");
				goto sexo;
				}
				system("cls");
				system ("color 3F");
				cout<<"El cliente fue registrado en la casilla "<<num<<" exitosamente"<<endl;
				set[num].genero=genero;
				system("pause");
				goto sprincipal;
			break;

			}
			case 2:
				regresarlibro2:
				system("cls");
				system ("color 3F");
				cout<<"Ingrese el numero de la casilla a registrar: "<<endl;
				cin>>ln;
				if (ln<=0||ln>9999){
				system("cls");
				system ("color cf");
				cout<<"El valor ingresado es incorrecto, intente nuevamente"<<endl;
				system ("pause");
				goto regresarlibro2;
			}
				if (set[ln].estado!=0){
				system("cls");
				system ("color cf");
				cout<<"Esta casilla se encuentra llena, intente nuevamente"<<endl;
				system ("pause");
				goto regresarlibro2;
			}
				if (set[ln].estado==0){
				system("cls");
				system ("color 3F");
				cout<<"Ingrese el nombre del libro: ";
				fflush (stdin);
				gets(set[ln].nombrelibro);
				cout<<"Ingrese el nombre del autor: ";
				gets(set[ln].nombreautor);
				cout<<"Ingrese la editorial del libro: ";
				gets(set[ln].editorial);
				estado:
				system("cls");
				cout<<"\tSeleccione el estado del libro:"<<endl;
				cout<<"1.Nuevo"<<endl;
				cout<<"2.Normal"<<endl;
				cout<<"3.Viejo"<<endl;
				cout<<"-----> ";
				cin>>estado;
				if (estado<1||estado>3){
				system("cls");
				system ("color cf");
				cout<<"La opcion seleccionada es incorrecta, intentelo nuevamente"<<endl;
				system ("pause");
				goto estado;
				}
				system("cls");
				system ("color 3F");
				cout<<"El libro fue registrado en la casilla "<<ln<<" exitosamente"<<endl;
				set[ln].estado=estado;
				system("pause");
				goto sprincipal;
				break;
			}
			case 3:
				if (set[num].genero==0){
				system("cls");
				system ("color cf");
				cout<<"No hay clientes registrados o el cliente posee un libro"<<endl;
				system("pause");
				goto sprincipal;
			}
			else{
			system("cls");
			system ("color 3F");
			cout<<"\tLista de clientes"<<endl;
			for (int m=1;m<=9999;m++){
			if (set[m].genero==1){
				cout<<m<<"."<<set[m].nombre<<set[m].apellido<<" |M| "<<endl;
			}
		 	else if (set[m].genero==2){
				cout<<m<<"."<<set[m].nombre<<set[m].apellido<<" |F| "<<endl;
			}
			}
			cout<<"Digite el numero de la casilla a eliminar"<<endl; 
			cout<<"-----> ";
			cin>>cel;
			if(set[cel].genero==0){
				system("cls");
				system ("color cf");
				cout<<"Casilla vacia"<<endl;
				system("pause");
				goto sprincipal;
			}
			else{
			system("cls");
			system ("color 3F");
			set[cel].genero=0;
			cout<<"Se elimino el cliente correctamente"<<endl;
			system("pause");
			goto sprincipal;
		}
			break;
			
			case 4:
			if (set[num].genero==0){
				system("cls");
				system ("color cf");
				cout<<"No hay libros registrados o el libro se encuentra prestado"<<endl;
				system("pause");
				goto sprincipal;
			}
			else{
			for (int w=1;w<=9999;w++){
			if (set[w].estado==1){
				cout<<w<<"."<<"Libro " <<set[w].nombrelibro<<" -- "<<"Autor "<<set[w].nombreautor<<" |editorial| "<<set[w].editorial<<" (Estado: Nuevo)"<<endl;
			}
		 	else if (set[w].estado==2){
				cout<<w<<"."<<"Libro " <<set[w].nombrelibro<<" -- "<<"Autor "<<set[w].nombreautor<<" |editorial| "<<set[w].editorial<<" (Estado: Normal)"<<endl;
			}
			else if (set[w].estado==3){
				cout<<w<<"."<<"Libro " <<set[w].nombrelibro<<" -- "<<"Autor "<<set[w].nombreautor<<" |editorial| "<<set[w].editorial<<" (Estado: Viejo)"<<endl;
			}
			}
			cout<<"Digite el numero de la casilla a eliminar"<<endl; 
			cout<<"-----> ";
			cin>>lel;
			if(set[lel].estado==0){
				system ("color cf");
				cout<<"Casilla vacia"<<endl;
				system("pause");
				goto sprincipal;
			}
			else{
			system("cls");
			system ("color 3F");
			set[lel].estado=0;
			cout<<"Se elimino el libro correctamente"<<endl;
			system("pause");
			goto sprincipal;
			}
			}
			break;
			case 5:
				volver1:
				system("cls");
				system ("color 3F");
				cout<<"�Desea regresar al menu principal?"<<endl;
				cout<<"1.Si\t 2.No "<<endl; 
				cout<<"-----> ";
				cin>>regresar;
				if(regresar==1){
				goto mainprincipal;
			}
				else if (regresar==2){
				system ("pause");
			}
				else{
				system("cls");
				system ("color cf");
				cout<<"El valor introducido es incorrecto, intente nuevamente"<<endl;
				system ("pause");
				goto volver1;
			}
			}
			}
		case 2:
			if (set[num].genero==0||set[ln].estado==0){
				system("cls");
				system ("color cf");
				cout<<"Es necesario por lo menos 1 cliente y 1 libro registrado para efectuar el prestamo"<<endl;
				system("pause");
				goto mainprincipal;
			}
			else{
			prestamolibr:
			system("cls");
			system ("color 3F");
			cout<<"\tDigite una opcion"<<endl;
			cout<<"1.Ver clientes que acualmente poseen un libro"<<endl;
			cout<<"2.Realizar prestamo de algun libro"<<endl;
			cout<<"3.Volver al menu principal"<<endl;
			cout<<"Digite la opcion: ";
			cin>>opcion6;
			switch (opcion6){
			case 2:
			prestamoclient:
			system("cls");
			system ("color 3F");
			for (int c=1;c<=9999;c++){
			if (set[c].prestarclient==1){
				cout<<"Cliente con libro prestado"<<endl;
			}
			if (set[c].genero==1){
				cout<<c<<"."<<set[c].nombre<<" "<<set[c].apellido<<" |M| "<<endl;
			}
		 	else if (set[c].genero==2){
				cout<<c<<"."<<set[c].nombre<<" "<<set[c].apellido<<" |F| "<<endl;
			}
			}
			cout<<"Inserte la casilla del cliente a seleccionar: "<<endl; 
			cout<<"-----> ";
			cin>>e;
			if(set[e].prestarclient==1||set[e].genero==0){
				system("cls");
				system ("color cf");
				cout<<"El cliente ya posee un libro o el digito introducido es incorrecto, intente nuevamente"<<endl;
				system("pause");
				goto prestamoclient;
			}
			else{
			set[e].prestarclient=1;
			system("cls");
			system ("color 3F");
			cout<<"Seleccione un libro a prestar al cliente "<<set[e].nombre<<" "<<set[e].apellido<<endl;
			slibro:
			system ("color 3F");
			for (int l=1;l<=9999;l++){
			if(set[l].prestarlib==1){
				cout<<"El libro "<<set[l].nombrelibro<<" se encuentra prestado "<<endl;
			}
			if (set[l].estado==1){
				cout<<l<<"."<<"Libro "<< set[l].nombrelibro<<" -- "<<"Autor: "<<set[l].nombreautor<<" |Editorial: "<<set[l].editorial<<"| Estado: Nuevo"<<endl;
			}
		 	else if (set[l].estado==2){
				cout<<l<<"."<<"Libro" << set[l].nombrelibro<<" -- "<<"Autor: "<<set[l].nombreautor<<" |Editorial: "<<set[l].editorial<<"| Estado: Normal"<<endl;
			}
			else if (set[l].estado==3){
				cout<<l<<"."<<"Libro" << set[l].nombrelibro<<" -- "<<"Autor: "<<set[l].nombreautor<<" |Editorial: "<<set[l].editorial<<"| Estado: Viejo"<<endl;
			}
			}
			cout<<"Inserte la casilla del libro a seleccionar: "<<endl; 
			cout<<"-----> ";
			cin>>ls;
			if(set[ls].prestarlib==1||set[ls].estado==0){
				system("cls");
				system ("color cf");
				cout<<"El libro se encuentra prestado o el digito introducido es incorrecto, intente nuevamente"<<endl;
				system("pause");
				system("cls");
				goto slibro;
			}
			else{
				system("cls");
				system ("color 3F");
				set[ls].prestarlib=1;
				cout<<"Se realizo el prestamo del libro "<<set[ls].nombrelibro<<" al cliente "<<set[e].nombre<<" "<<set[e].apellido<<" exitosamente"<<endl;;
				system("pause");
				goto prestamolibr;
			}
			break;
			case 1:
			if(set[ls].prestarlib==1){
				system("cls");
				system ("color 3F");
				cout<<"\tClientes que poseen un libro actualmente"<<endl;
			for (int pr=1;pr<=9999;pr++){
			if(set[pr].prestarclient==1){
				cout<<"El cliente"<<set[pr].nombre<<" "<<set[pr].apellido<<endl;
				cout<<"Actualmente posee el libro "<<set[pr].nombrelibro<<"Autor "<<set[pr].nombreautor<<endl;
				system("pause");
				goto mainprincipal;
			}
			}
			}
			else if (set[ls].prestarlib==0){
				system("cls");
				system ("color cf");
				cout<<"No se realizo algun prestamo de un libro"<<endl;	
				system("pause");
				goto prestamolibr;	
			}
			break;
			case 3:
				volver2:
				system("cls");
				system ("color 3F");
				cout<<"�Desea regresar al menu principal?"<<endl;
				cout<<"1.Si\t 2.No "<<endl; 
				cout<<"-----> ";
				cin>>regresar;
				if(regresar==1){
				goto mainprincipal;
			}
				else if (regresar==2){
				system ("pause");
			}
				else{
				system("cls");
				system ("color cf");
				cout<<"El valor digitado es incorrecto, intente nuevamente"<<endl;
				system ("pause");
				goto volver2;
			}
			break;
			default:
				system("cls");
				system ("color cf");
				cout<<"La opcion digitada es incorrecta, intente nuevamente"<<endl;
				system("pause");
				goto mainprincipal;
			}
			}	
			break;
			}
	case 3:
			if (set[ls].prestarlib==0){
				system("cls");
				system ("color cf");
				cout<<"No se realizo el prestamo a ningun cliente"<<endl;
				system("pause");
				goto mainprincipal;
			}	
			else{
				system("cls");
				system ("color 3F");
				for(int f=1;f<=9999;f++){
				if (set[f].prestarclient==1){
				cout<<"El cliente "<<set[f].nombre<<" "<<set[f].apellido<<" Actualmente posee el libro "<<set[f].nombrelibro<<" del autor "<<set[f].nombreautor<<endl;
				cout<<"de la editorial " <<set[f].editorial<<" y tiene de entre 14 a 20 dias para regresarlo"<<endl;
				cout<<"en caso de pasarse de la fecha en la devolucion del libro tendra 1 dia sin prestamo por cada dia sin devolver el libro"<<endl;
				cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
			}
			}
			cout<<"\n1.�Desea devolver un libro?"<<endl;
			cout<<"2.Volver al menu principal"<<endl;
			cout<<"-----> ";
			cin>>opcion5;
			devolverlib:
			system("cls");
			system ("color 3F");
			if (opcion5==1){
				for (int d=1;d<=9999;d++){
					if (set[d].prestarlib==1){
					cout<<d<<"."<<"Libro " <<set[d].nombrelibro<<" -- "<<"Autor: "<<set[d].nombreautor<<endl;;
					}
				}
				cout<<"Seleccione un libro que fue prestado"<<endl; cin>>ls2;
				if(set[ls2].prestarlib==0){
				system("cls");
				system ("color cf");
				cout<<"El digito es incorrecto, intente nuevamente"<<endl;
				system("pause");
				goto devolverlib;
				}
			else{
				system("cls");
				system ("color 3F");
				set[ls].prestarlib=0;
				set[e].prestarclient=0;
				cout<<"Se devolvio el libro "<<set[ls2].nombrelibro<<" -- "<<"Autor: "<<set[ls2].nombreautor<<endl;
				system("pause");
				goto mainprincipal;
			}
			}
			if (opcion5==2){
				goto mainprincipal;
			}
			}
			break;
			
	   
	case 4: system("cls");
			system ("color 3F");
			cout<<"Gracias por visitar su Biblioteca virtual, �Vuelva pronto!"<<endl;
			system("pause");
			break;
			
	default:
			system("cls");
			system ("color cf");
			cout<<"Opcion incorrecta, Intente nuevamente"<<endl;
			system("pause");
			goto mainprincipal;
	break;
}
}
int main(){
	libro x;
	x.programa();
return 0;
}
