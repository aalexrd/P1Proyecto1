#pragma once
#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "Nodo.h"
#include "Autor.h"
#include "Estudiante.h"
#include "Libro.h"
template<typename TIPONODO>
class Lista{
public:
   Lista() : primerPtr( 0 ), ultimoPtr( 0 ){}
   ~Lista(){
		if ( !Vacio() ){    
			cout << "Destruyendo nodos ...\n";
			Nodo< TIPONODO > *actualPtr = primerPtr;
			Nodo< TIPONODO > *tempPtr;
			while ( actualPtr != 0 ){  
				tempPtr = actualPtr;
				tempPtr->data.imprimir();
				actualPtr = actualPtr->sigPtr;
				delete tempPtr;
			}
		}
		cout << "Todos los nodos destruidos\n\n";
   }
   void Insertar( const TIPONODO &valor ){
		Nodo< TIPONODO > *newPtr = obtNuevoNodo( valor );
		if ( Vacio() )
			primerPtr = ultimoPtr = newPtr;
		else{
			newPtr->sigPtr = primerPtr; 
			primerPtr = newPtr; }
	}
   bool Vacio() const{
	   return primerPtr == 0; }
   void imprimir() const{
	   if ( Vacio() ){
		   cout << "La lista esta vacia\n\n";
		   return; }
	   Nodo< TIPONODO > *actualPtr = primerPtr;
	   cout << "La lista es: ";
	   while ( actualPtr != 0 ){
		   actualPtr->data.imprimir();
		   actualPtr = actualPtr->sigPtr; }
	   cout << "\n\n";
   }
   Nodo< TIPONODO > *buscar(int opc){
	   if ( Vacio() ){
		   cout << "La lista esta vacia\n\n";
		   return 0; }
	   Nodo< TIPONODO > *actualPtr = primerPtr;
	   while(actualPtr!=0){
		   if(actualPtr->data.getID()==opc)
			   return actualPtr;
		   else
			   actualPtr=actualPtr->sigPtr;
	   }
   }
   void modificarLib(int opc, int ide){
	   cout<<"\nIngrese el nuevo valor: "<<endl;
	   switch(opc){
	   case 1:
		   buscar(ide)->data.setID(readInt(std::cin));
	   case 2:
		   buscar(ide)->data.setDesc(readString(std::cin));
	   case 3:
		   buscar(ide)->data.setISBN(readInt(std::cin));
	   case 4:
		   buscar(ide)->data.setCantidad(readInt(std::cin));
	   default:
		   cout<<"Esa no es una opcion\n";
	   }
   }
   void modificarAut(int opc, int ide){
	   cout<<"\nIngrese el nuevo valor: "<<endl;
	   switch(opc){
	   case 1:
		   buscar(ide)->data.setID(readInt(std::cin));
	   case 2:
		   buscar(ide)->data.setNombre(readString(std::cin));
	   case 3:
		   buscar(ide)->data.setArea(readString(std::cin));
	   case 4:
		   buscar(ide)->data.setCantidad(readInt(std::cin));
		   default:
		   cout<<"Esa no es una opcion\n";
	   }
   }
   void modificarEst(int opc, int ide){
	   cout<<"\nIngrese el nuevo valor: "<<endl;
	   switch(opc){
	   case 1:
		   buscar(ide)->data.setID(readInt(std::cin));
	   case 2:
		   buscar(ide)->data.setEdad(readInt(std::cin));
	   case 3:
		   buscar(ide)->data.setNombre(readString(std::cin));
	   case 4:
		   buscar(ide)->data.setDirec(readString(std::cin));
	   case 5:
		   buscar(ide)->data.setEmail(readString(std::cin));
	   case 6:
		   buscar(ide)->data.setCarrera(readString(std::cin));
	   case 7:
		   buscar(ide)->data.setPromedio(readFloat(std::cin));
	   default:
		   cout<<"Esa no es una opcion\n";
	   }
   }
   void eliminar(int ide){
	   if ( Vacio() ){
		   cout << "La lista esta vacia\n\n";
		   return; }
		if(buscar(ide)->data.getID()==primerPtr->data.getID()){
			   Nodo< TIPONODO > *aux=primerPtr;
			   primerPtr=primerPtr->sigPtr;
			   delete aux; }
		if(buscar(ide)->data.getID()==ultimoPtr->data.getID()){
			   Nodo< TIPONODO > *aux=ultimoPtr;
			   Nodo< TIPONODO > *penultimo=primerPtr;
			   while(penultimo->sigPtr->data.getID()!=ultimoPtr->data.getID()){
				   penultimo=penultimo->sigPtr; }
			   ultimoPtr=penultimo;
			   penultimo->sigPtr=0; 
			   delete aux; }
		else{
			   Nodo< TIPONODO > *aux=buscar(ide);
			   Nodo< TIPONODO > *penultimo=primerPtr;
			   while(penultimo->sigPtr->data.getID()!=buscar(ide)->data.getID()){
				   penultimo=penultimo->sigPtr; }
			   Nodo< TIPONODO > *siguiente;
			   siguiente=buscar(ide)->sigPtr;
			   penultimo->sigPtr=siguiente;
			   delete aux;
		}
   }
   void consultar(int ide){
	   buscar(ide)->data.imprimir(); 
	   system("pause");
   }
   int readInt(std::istream& stream){
    int i;
    stream >> i;
	return i; }
   float readFloat(std::istream& stream){
    float i;
    stream >> i;
	return i; }
   string readString(std::istream& stream){
    string i;
    stream >> i;
	return i; }
   void ordenar(){
	   Nodo< TIPONODO > *sig=primerPtr->sigPtr, *aux=primerPtr, *sel=primerPtr;
	   TIPONODO dato;
	   while(sel!=NULL){
		   while(sig!=NULL){
			   if(aux->data.getID()>sig->data.getID())
				   aux=sig;
			   sig=sig->sigPtr; }
		   dato=sel->data;
		   sel->data=aux->data;
		   aux->data=dato;
		   sel=sel->sigPtr;
		   aux=sel;
		   sig=sel; }
   }
   void comparaListas (Lista *ptrLista1, Lista *ptrLista2){
	   for(Nodo <TIPONODO> *actualPtr=ptrLista1->primerPtr, *actualPtr2=ptrLista2->primerPtr; actualPtr!=NULL&&actualPtr2!=NULL; actualPtr=actualPtr->sigPtr, actualPtr2=actualPtr2->sigPtr){
		   if(actualPtr->data->getID()!=actualPtr2->data->getID()){ //entra al puntero del nodo y luego entra al puntero a la clase persona(data) y llama el metodo getID
			   cout<<"Las listas son diferentes\n"; //con solo que uno este en posicion diferente la lista no es igual
			   return;
		   }
	   }
	   cout<<"Las listas son iguales\n";
   }
private:
	Nodo< TIPONODO > *primerPtr;
	Nodo< TIPONODO > *ultimoPtr;
	Nodo< TIPONODO > *obtNuevoNodo( const TIPONODO &valor ){
	   return new Nodo< TIPONODO >( valor ); }
};
#endif
