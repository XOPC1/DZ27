#include <iostream>
#include <string>
#include "Products.h"
using namespace std;
void printProd(product q) {
	cout << "Название товара: " << q.name << endl
		<< "Колличество товара: " << q.number << endl
		<< "Цена за 1 ед.: " << q.price << endl << endl;
};
int fullPrice(product q) {
	return q.number * q.price;
};
void sell(product &q, int w) {
	q.number -= w;
};