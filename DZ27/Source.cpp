#include <iostream>
#include <string>
#include "Products.h"
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	product P1 = { "Bulka",123,10 };
	product P2 = { "AK47",2,1500 };
	product P3 = { "Moloko",10,5 };
	product P4 = { "Maska Anonymus",15,169 };
	product P5 = { "Eaglehorn",1,3300 };

	printProd(P1);
	cout << fullPrice(P1) << endl;
	printProd(P2);
	cout << fullPrice(P2)<<endl;
	printProd(P3);
	cout << fullPrice(P3)<<endl;
	printProd(P4);
	cout << fullPrice(P4)<<endl;
	printProd(P5);
	cout << fullPrice(P5)<<endl;
	sell(P1, 23);
	printProd(P1);
	return 0;
}