#include <iostream>
#include "Listas.h"
#include <string>
#include <iostream>
int main(){
	Lista<Estudiante>listaEstudiante;
	Lista<Autor>listaAutor;
	Lista<Libro>listaLibro;
	menu(listaEstudiante, listaAutor, listaLibro);
	return (0);
}