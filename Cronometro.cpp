//#include <stdafx.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main(){
	int s = 0;
	cout << "CRONOMETRO\n";
	while(1){
		
		
		cout << "00:" << s << endl;
		sleep(1);
		system("clear");
		s++;

		if(s == 60){
			cout << "\n\n#### GAME OVER####\n\n"<< endl;
			return -1;
		}
	}

return 0;

}
