#pragma once
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include <string>
using namespace std;
class Estudiante{
private:
	int ID;
	int edad;
	string nombre;
	string direccion;
	string email;
	string carrera;
	float promedioPonderado;
public:
	Estudiante(){}
	Estudiante(int &id, int &ed, string &nom, string &direc, string &ema, string &carr, float &prom){
		ID=id;
		edad=ed;
		nombre=nom;
		direccion=direc;
		email=ema;
		carrera=carr;
		promedioPonderado=prom;
	}
	void setID(int id){
		ID=id; }
	void setEdad(int ed){
		edad=ed; }
	void setNombre(string nom){
		nombre=nom; }
	void setDirec(string direc){
		direccion=direc; }
	void setEmail(string ema){
		email=ema; }
	void setCarrera(string carr){
		carrera=carr; }
	void setPromedio(float prom){
		promedioPonderado=prom; }
	int getID(){
		return ID; }
	int getEdad(){
		return edad; }
	string getNombre(){
		return nombre; }
	string getDireccion(){
		return direccion; }
	string getEmail(){
		return email; }
	string getCarrera(){
		return carrera; }
	float getPromedioPonderado(){
		return promedioPonderado; }
	void imprimir(){
		cout<<"\n##########################"
			<<"\nID de estudiante: "<<ID<<endl
			<<"Nombre: "<<nombre<<endl
			<<"Edad: "<<edad<<endl
			<<"E-mail: "<<email<<endl
			<<"Carrera: "<<carrera<<endl
			<<"Promedio Ponderado: "<<promedioPonderado<<endl
			<<"Dirección: "<<direccion<<"\n##########################"<<endl;
	}
	~Estudiante(){}
};
#endif