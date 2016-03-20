#pragma once
#ifndef AUTOR_H
#define AUTOR_H
#include <iostream>
#include <string>
using namespace std;
class Autor{
private:
	int ID;
	string nombre;
	string areaEspecialidad;
	int cantidadPublicaciones;
public:
	Autor(){}
	Autor(int id, string nom, string area, int cant){
		ID=id;
		nombre=nom;
		areaEspecialidad=area;
		cantidadPublicaciones=cant;
	}
	void setID(int id){
		ID=id; }
	void setNombre(string nom){
		nombre=nom; }
	void setArea(string area){
		areaEspecialidad=area; }
	void setCantidad(int cant){
		cantidadPublicaciones=cant; }
	int getID(){
		return ID; }
	string getNombre(){
		return nombre; }
	string getArea(){
		return areaEspecialidad; }
	int getCantidad(){
		return cantidadPublicaciones;}
	~Autor(){}
	void imprimir(){
		cout<<"\n##########################"
			<<"\nID del autor: "<<ID<<endl
			<<"Nombre: "<<nombre<<endl
			<<"Área de especialidad: "<<areaEspecialidad
			<<"\nPublicaciones: "<<cantidadPublicaciones
			<<"\n##########################"<<endl;
	}
};
#endif
