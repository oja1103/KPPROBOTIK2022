// NAMA		: Fajar Maulana Eka Putra
// NRP		: 5001221087
// Jurusan	: Fisika

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

int mencari_V0(int a, int b){
  	return a-b; 
}
int mencari_jarak(int a){
	return ((a*a)*sin(2*SUDUT*3.142/180))/GRAVITASI;
}
float mencari_Vt(float a){
	return sqrt((a*GRAVITASI)/sin(2*SUDUT*3.142/180));
}
float speed_dng_loss(float a){
    int b;
    if(a>=START_PENGUKURAN&&a<11){
    	b = 1;
	}
	else if(a<21){
    	b = 3;
	}
	else if(a<=31){
    	b = 5;
	}
	return a+b;
}

int main() {
    int v, V0, jarak;
    float Vt;
    std::cin>>v;
    if(v>=START_PENGUKURAN&&v<11){
    	V0 = mencari_V0(v,1);
	}
	else if(v<21){
		V0 = mencari_V0(v, 3);		
	}
	else if(v<31){
		V0 = mencari_V0(v, 5);
	}
	jarak = mencari_jarak(V0);
	Vt = mencari_Vt(jarak);
    Vt = speed_dng_loss(Vt);
	std::cout<< jarak <<" "<< Vt << std::endl;
	return 0;
  }
