#pragma once
#include <string>
using namespace std;
struct product {
	string name; // Ц название товара;
	int number = 0; // Ц количество товара(по умолчанию Ц 0);
	int price; // - цена за единицу
};

void printProd(product q);// - принимает объект и выводит всю информацию о нЄм;
int fullPrice(product q);// Ц принимает объект и возвращает полную стоимость при покупке всех оставшихс€ товаров разом;
void sell(product& q,int w); //Ц принимает объект и число, на которое снижаетс€ количество товара у данного объекта.
