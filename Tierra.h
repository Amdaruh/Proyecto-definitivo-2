//
// Created by utec on 21/06/19.
//

#ifndef GAME_TIERRA_H
#define GAME_TIERRA_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "Tipos.h"
#include "Objeto.h"
using namespace std;

// Valores constantes
const TipoEntero ALTURA = 21;
const TipoEntero ANCHO  = 21;
const TipoCaracter COLOR ='.';

template <typename T>
T input(string label) {
    T value;
    cout << label;
    cin >> value;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    return value;


class Tierra {
private:
    sf::RenderWindow* plano;
    vector<Objeto*> objetos;
public:
    Tierra();
    Tierra(TipoEntero altura, TipoEntero ancho);
    virtual ~Tierra();
    void adicionarObjeto(Objeto* objeto);
    Objeto* removerObjeto(string& nombre);
    void imprimirObjetos();
    TipoEntero getAltura();
    TipoEntero getAncho();
    TipoEntero getCantidadObjectos();
    void dibujarTierra();
    void actualizarTierra();
};


#endif //GAME_TIERRA_H
