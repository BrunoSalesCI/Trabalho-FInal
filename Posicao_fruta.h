#ifndef POSICAO_FRUTA_H
#define POSICAO_FRUTA_H

#include <iostream>

using namespace std;

class Posicao(){

protected:
	const int largura = 300;
	const int altura = 200;
	int x_fruta, y_fruta;

public:
	Posicao();
	virtual ~Posicao();
	GerarPosicao(const int, const int);
};
#endif
