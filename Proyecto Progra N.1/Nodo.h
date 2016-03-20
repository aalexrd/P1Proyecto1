#pragma once
#ifndef Nodo_H
#define Nodo_H
template< typename TIPONODO > class Lista;                    
template< typename TIPONODO >
class Nodo {
   friend class Lista< TIPONODO >;
public:
   Nodo( const TIPONODO &info ) : data( info ), sigPtr( NULL ) { }
   TIPONODO getData() const { 
   return data; }
private:
   TIPONODO data;
   Nodo< TIPONODO > *sigPtr;
}; 
#endif