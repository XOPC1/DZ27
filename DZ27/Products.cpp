#include <iostream>
#include <string>
#include "Products.h"
using namespace std;
void printProd(product q) {
	cout << "�������� ������: " << q.name << endl
		<< "����������� ������: " << q.number << endl
		<< "���� �� 1 ��.: " << q.price << endl << endl;
};
int fullPrice(product q) {
	return q.number * q.price;
};
void sell(product &q, int w) {
	q.number -= w;
};