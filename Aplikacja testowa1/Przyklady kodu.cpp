#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//to miejsce s³uzy do przechowywania wartoœciowych elementów kodu...

void test1()
{
	int a = 0, i = 0;

	//********************************zbiory danych**********************************************

	//1. Klasa enumeracji*****//po stworzeniu takiej klasy mo¿emy j¹ wykorzystaæ do pêtli switch (tworzy siê automatycznie na podstawie elementów zbioru) Wystarczy wiêc zmieniæ klasê a zmieni siê switch.
	//deklaracja taka musi jednak byæ przed main lub w naglowku
	enum class Zbir { Opcja1 = 1, Opcja2 = 2, Opcja3 = 3 };
	//2. Vector
	vector<int> Ciag{ 1,2,3 };
	vector<char> Ciag2(10, 'X'); //a tu przyk³ad na zape³nienie 10 elementów ci¹gu znakiem 'X'
	i = Ciag.size();    //iloœæ elementów
	Ciag.push_back(4);//dodaje element
	for (int a = 0; a < Ciag2.size(); ++a) {
	}

	//********************************zbiory danych**********************************************//

	//***************************PÊTLE***********************************************************

		//uwaga instukcja break; powoduje wyjœcie z zagnie¿d¿onej pêtli!

		//1. przyk³ad if:
	if (a = 0) {

	}
	else if (a = 1) {
	}
	else {
	}

	//2. przyklad while (najpierw sprawdzamy warunek a potem wykonujemy instrukcjê)
	while (a || 0) {
		break;			// tu break przerywa dzia³anie pêtli (koñczy)
		if (a = 7)continue;		// a tu tylko przerywa dla konkretnego warunku
	}
	//3. przyklad  do while (najpierw wykonuje instrukcjê a potem sprawdza warunek)
	do {
	} while (a || 0);//uwaga tu jest potrzebny œrednik!

	//4. pêtla for:
	for (a = 0; a = 5; ++a) {
	}

	//4.a) Zakresowe for.
	for (auto x : { 1,5,9,12 }) {

	}
	//5. switch: //jest dobra do stosowania przy budowaniu menusów i ogólnych opcji programu

	switch (a) {
	case 0:
		break; //break jest wyjœciem z pêtli
	case 1:

	case 2:

	default: //czyli case eles
		break;
	}

	//6. Goto: // uwaga staraæ siê tego nie stosowaæ
//	goto aaa;
//aaa:



	//***************************PÊTLE***********************************************************//


}