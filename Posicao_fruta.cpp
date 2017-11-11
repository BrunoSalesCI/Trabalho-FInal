#include<Posicao_fruta.h>
#include <iostream>
#include <ctime> 
#include <cstdlib>

using namespace std;

Posicao::Posicao(){

}
Posicao::~Posicao(){

}

Posicao::GerarPosicao(int l, int a){
	largura = l;
	altura = a;

	srand(time(0));

	x_fruta =rand()%largura; // Escolhendo numero aleatorio de 0 ate o valor da largura
	y_fruta = rand()%altura; 


}
