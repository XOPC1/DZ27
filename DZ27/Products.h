#pragma once
#include <string>
using namespace std;
struct product {
	string name; // � �������� ������;
	int number = 0; // � ���������� ������(�� ��������� � 0);
	int price; // - ���� �� �������
};

void printProd(product q);// - ��������� ������ � ������� ��� ���������� � ���;
int fullPrice(product q);// � ��������� ������ � ���������� ������ ��������� ��� ������� ���� ���������� ������� �����;
void sell(product& q,int w); //� ��������� ������ � �����, �� ������� ��������� ���������� ������ � ������� �������.
