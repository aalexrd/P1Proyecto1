#pragma once
#ifndef LISTAS_H
#define LISTAS_H
#include <iostream>
#include "Lista.h"
#include <string>
template<typename>class Lista;
template<typename TIPOEST, typename TIPOAUT, typename TIPOLIB>

void menu(TIPOEST &listaEstudiante, TIPOAUT &listaAutor, TIPOLIB &listaLibro){
	int opc=1;
	int idEstudiante;
	int idEstudiante2;
	int edad;
	string nombre;
	string direccion;
	string email;
	string carrera;
	float promedioPonderado;
	int idLibro;
	string descripcion;
	int isbn;
	int cantidadEjemplares;
	int idAutor;
	string areaEspecialidad;
	int cantidadPublicaciones;
	Regresar:
	system("cls");
	cout<<"Que desea hacer? "<<endl;
	cout<<"1. Administracion de Estudiante"<<endl;
	cout<<"2. Administracion de Autor"<<endl;
	cout<<"3. Administracion de Libro"<<endl;
	cin>>opc;
	system("cls");
	switch(opc){
	case 1:
		cout<<"1. Ingresar"<<endl;
		cout<<"2. Modificar"<<endl;
		cout<<"3. Eliminar"<<endl;
		cout<<"4. Consultar"<<endl;
		cout<<"5. Listar"<<endl;
		cout<<"6. Ordenar"
			<<"\n7. Regresar"<<endl;
		cin>>opc;
		system("cls");
		switch(opc){
		case 1:{
			cout<<"Id de estudiante: "<<endl;
			cin>>idEstudiante;
			cout<<"Edad: "<<endl;
			cin>>edad;
			cout<<"Nombre:"<<endl;
			cin>>nombre;
			cout<<"Direccion: "<<endl;
			cin>>direccion;
			cout<<"E-mail:"<<endl;
			cin>>email;
			cout<<"Carrera: "<<endl;
			cin>>carrera;
			cout<<"Promedio ponderado: "<<endl;
			cin>>promedioPonderado;
			Estudiante Est(idEstudiante, edad, nombre, direccion, email, carrera, promedioPonderado);
			listaEstudiante.Insertar(Est);
			system("cls");
			break;
			}
		case 2:{
			cout<<"Que desea modificar? "<<endl;
			cout<<"1. Id de estudiante: "<<endl;
			cout<<"2. Edad: "<<endl;
			cout<<"3. Nombre:"<<endl;
			cout<<"4. Direccion: "<<endl;
			cout<<"5. E-mail:"<<endl;
			cout<<"6. Carrera: "<<endl;
			cout<<"7. Promedio ponderado: "<<endl;
			cin>>opc;
			cout<<"Ingrese ID del estudiante que desea modificar"<<endl;
			cin>>idEstudiante2;
			listaEstudiante.modificarEst(opc, idEstudiante2);
			system("cls");
			break;
			   }
		case 3:
			cout<<"Ingrese ID del estudiante que desea eliminar"<<endl;
			cin>>idEstudiante2;
			listaEstudiante.eliminar(idEstudiante2);
			system("cls");
			break;
		case 4:
			cout<<"Ingrese ID del estudiante que desea consultar"<<endl;
			cin>>idEstudiante2;
			listaEstudiante.consultar(idEstudiante2);
			system("cls");
			break;
		case 5:
			listaEstudiante.imprimir();
			system("pause");
			system("cls");
			break;
		case 6:
			listaEstudiante.ordenar();
			break;
		case 7:
			break;
		default:
			cout<<"Invalido\n";
		}
		goto Regresar;
		break;
	case 2:
		cout<<"1. Ingresar"<<endl;
		cout<<"2. Modificar"<<endl;
		cout<<"3. Eliminar"<<endl;
		cout<<"4. Consultar"<<endl;
		cout<<"5. Listar"<<endl;
		cout<<"6. Ordenar"
			<<"\n7. Regresar"<<endl;
		cin>>opc;
		system("cls");
		switch(opc){
		case 1:{
			cout<<"ID de Autor: "<<endl;
			cin>>idAutor;
			cout<<"Nombre: "<<endl;
			cin>>nombre;
			cout<<"Área de especialidad: "<<endl;
			cin>>areaEspecialidad;
			cout<<"Cantidad de publicaciones: "<<endl;
			cin>>cantidadPublicaciones;
			Autor Aut(idAutor, nombre, areaEspecialidad, cantidadPublicaciones);
			listaAutor.Insertar(Aut);
			system("cls");
			break;
			   }
		case 2:
			cout<<"Que desea modificar? "<<endl;
			cout<<"1. Id: "<<endl;
			cout<<"2. Nombre: "<<endl;
			cout<<"3. Area de especialidad:"<<endl;
			cout<<"4. Cantidad de publicaciones: "<<endl;
			cin>>opc;
			cout<<"Ingrese ID del estudiante que desea modificar"<<endl;
			cin>>idEstudiante2;
			listaAutor.modificarAut(opc, idEstudiante2);
			system("cls");
			break;
		case 3:
			cout<<"Ingrese ID del autor que desea eliminar"<<endl;
			cin>>idEstudiante2;
			listaAutor.eliminar(idEstudiante2);
			system("cls");
			break;
		case 4:
			cout<<"Ingrese ID del autor que desea consultar"<<endl;
			cin>>idEstudiante2;
			listaAutor.consultar(idEstudiante2);
			system("cls");
			break;
		case 5:
			listaAutor.imprimir();
			system("pause");
			system("cls");
			break;
		case 6:
			listaAutor.ordenar();
			break;
		case 7:
			break;
		default:
			cout<<"Invalido\n";
		}
		goto Regresar;
		break;
	case 3: {
		cout<<"1. Ingresar"<<endl;
		cout<<"2. Modificar"<<endl;
		cout<<"3. Eliminar"<<endl;
		cout<<"4. Consultar"<<endl;
		cout<<"5. Listar"<<endl;
		cout<<"6. Ordenar"
			<<"\n7. Regresar"<<endl;
		cin>>opc;
		system("cls");
		switch(opc){
		case 1:{
			cout<<"ID del libroç: "<<endl;
			cin>>idLibro;
			cout<<"Descripcion: "<<endl;
			cin>>descripcion;
			cout<<"ISBN: "<<endl;
			cin>>isbn;
			cout<<"Ejemplares: "<<endl;
			cin>>cantidadEjemplares;
			Libro lib(idLibro, descripcion, isbn, cantidadEjemplares);
			listaLibro.Insertar(lib);
			system("cls");
			break;
			   }
		case 2:
			cout<<"Que desea modificar? "<<endl;
			cout<<"1. Id: "<<endl;
			cout<<"2. Descripcion: "<<endl;
			cout<<"3. ISBN: "<<endl;
			cout<<"4. Ejemplares: "<<endl;
			cin>>opc;
			cout<<"Ingrese ID del libro que desea modificar"<<endl;
			cin>>idEstudiante2;
			listaLibro.modificarLib(opc, idEstudiante2);
			system("cls");
			break;
		case 3:
			cout<<"Ingrese ID del libro que desea eliminar"<<endl;
			cin>>idEstudiante2;
			listaLibro.eliminar(idEstudiante2);
			system("cls");
			break;
		case 4:
			cout<<"Ingrese ID del libro que desea consultar"<<endl;
			cin>>idEstudiante2;
			listaLibro.consultar(idEstudiante2);
			system("cls");
			break;
		case 5:
			listaLibro.imprimir();
			system("pause");
			system("cls");
			break;
		case 6:
			listaLibro.ordenar();
			break;
		case 7:
			break;
		default:
			cout<<"Invalido\n";
		}
		goto Regresar;
		break;
	}
	}
	}
#endif