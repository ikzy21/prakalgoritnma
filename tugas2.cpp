#include <iostream>

using namespace std;

const double PHI = 3.14;

double Tabung(double r, double t){
	return PHI * r * r * t;
}
double Kerucut(double r, double t){
	return (1.0/3) * PHI * r * r * t;
}
int kelilingSegitiga(int a, int b, int c){
	return a + b + c;
}
double luasSegitiga(double a, double t){
	return (a * t) / 2;
}
int kelilingPersegipanjang(int p,int l){
	return 2 * (p + l);
}
int luasPersegipanjang(int p, int l){
	return p * l;
}

main(){
	//untuk  pengisian nilai bisa juga memakai cout dan cin
	cout << "volume tabung: " <<Tabung(10,15) <<endl;
	cout << "volume kerucut: " <<Kerucut(10,15) <<endl;
	cout << "keliling segitiga: " <<kelilingSegitiga(5,5,5) <<endl;
	cout << "luas segitiga: " <<luasSegitiga(5,10) <<endl;
	cout << "keliling persegi panjang: " <<kelilingPersegipanjang(8,5) <<endl;
	cout << "luas persegi panjang: " <<luasPersegipanjang(8,5) <<endl;
}
