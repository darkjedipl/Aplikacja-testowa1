#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//to miejsce s�uzy do przechowywania warto�ciowych element�w kodu...

void test1()
{
	int a = 0, i = 0;

	//********************************zbiory danych**********************************************

	//1. Klasa enumeracji*****//po stworzeniu takiej klasy mo�emy j� wykorzysta� do p�tli switch (tworzy si� automatycznie na podstawie element�w zbioru) Wystarczy wi�c zmieni� klas� a zmieni si� switch.
	//deklaracja taka musi jednak by� przed main lub w naglowku
	enum class Zbir { Opcja1 = 1, Opcja2 = 2, Opcja3 = 3 };
	//2. Vector
	vector<int> Ciag{ 1,2,3 };
	vector<char> Ciag2(10, 'X'); //a tu przyk�ad na zape�nienie 10 element�w ci�gu znakiem 'X'
	i = Ciag.size();    //ilo�� element�w
	Ciag.push_back(4);//dodaje element
	for (int a = 0; a < Ciag2.size(); ++a) {
	}

	//********************************zbiory danych**********************************************//

	//***************************P�TLE***********************************************************

		//uwaga instukcja break; powoduje wyj�cie z zagnie�d�onej p�tli!

		//1. przyk�ad if:
	if (a = 0) {

	}
	else if (a = 1) {
	}
	else {
	}

	//2. przyklad while (najpierw sprawdzamy warunek a potem wykonujemy instrukcj�)
	while (a || 0) {
		break;			// tu break przerywa dzia�anie p�tli (ko�czy)
		if (a = 7)continue;		// a tu tylko przerywa dla konkretnego warunku
	}
	//3. przyklad  do while (najpierw wykonuje instrukcj� a potem sprawdza warunek)
	do {
	} while (a || 0);//uwaga tu jest potrzebny �rednik!

	//4. p�tla for:
	for (a = 0; a = 5; ++a) {
	}

	//4.a) Zakresowe for.
	for (auto x : { 1,5,9,12 }) {

	}
	//5. switch: //jest dobra do stosowania przy budowaniu menus�w i og�lnych opcji programu

	switch (a) {
	case 0:
		break; //break jest wyj�ciem z p�tli
	case 1:

	case 2:

	default: //czyli case eles
		break;
	}

	//6. Goto: // uwaga stara� si� tego nie stosowa�
//	goto aaa;
//aaa:



	//***************************P�TLE***********************************************************//


}