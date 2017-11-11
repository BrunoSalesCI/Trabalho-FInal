#include<Posicao_fruta.h>
#include <iostream>
#include <ctime> 
#include <cstdlib>

using namespace std;

Posicao::Posicao(){

}
Posicao::~Posicao(){

}

Posicao::GerarPosicao(float l, float a){
	largura = l;
	altura = a;

	srand(time(0));


	//Determinando posicao aleatoria da fruta
	x_fruta =rand()%largura; // Escolhendo numero aleatorio de 0 ate o valor da largura
	y_fruta = rand()%altura; 


//Como exibir a imagem????

	//Achar as coordenadas da face através do facedetection e comparar com as coordenadas da frutinha
	if( (x_cabeca == x_fruta) && (y_cabeca == y_fruta) ){
		x_fruta =rand()%largura; // Escolhendo outra posicao para a frutinha
		y_fruta = rand()%altura;		
		

	} 


}
