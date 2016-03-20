#pragma once
#ifndef LIBRO_H
#define LIBRO_H
#include <iostream>
#include <string>
using namespace std;
class Libro{
private:
	int ID;
	string descripcion;
	int isbn;
	int cantidadEjemplares;
public:
	Libro (){}
	Libro(int id, string desc, int is, int cant){
		ID=id;
		descripcion=desc;
		isbn=is;
		cantidadEjemplares=cant;
	}
	void setID(int id){
		ID=id; }
	void setDesc(string desc){
		descripcion=desc; }
	void setISBN(int is){
		isbn=is; }
	void setCantidad(int cant){
		cantidadEjemplares=cant; }
	int getID(){
		return ID; }
	string getDesc(){
		return descripcion; }
	int getISBN(){
		return isbn; }
	int getCant(){
		return cantidadEjemplares; }
	~Libro(){}
	void imprimir(){
		cout<<"\n##########################"
			<<"\nID del libro: "<<ID
			<<"\nDescripcion: "<<descripcion
			<<"\nISBN: "<<isbn
			<<"\nEjemplares: "<<cantidadEjemplares
			<<"\n##########################"<<endl;
	}
};
#endif