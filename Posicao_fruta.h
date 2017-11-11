#ifndef POSICAO_FRUTA_H
#define POSICAO_FRUTA_H

#include <iostream>

using namespace std;

class Posicao(){

protected:
	const float largura = 300;
	const float altura = 200;
	float x_fruta, y_fruta;

public:
	Posicao();
	virtual ~Posicao();
	GerarPosicao(const int, const int);
	Exibe(float, float);
};
#endif
