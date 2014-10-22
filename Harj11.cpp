/***********
*Tehtävä: Harjoitus 11 (palautus vko 43)
*Tekijä: Juho Nissi
*Muuta tehtävän 9 laskin-ohjelmaa niin, etta valikko nayttaa
*seuraavalta:
*
*VALIKKO
*0. Lopetus
*1. Summa
*2. Erotus
*3. Tulo
*4. Osamaara
*5. Jakojaannos
*6. Syota uudet luvut laskemista varten
*
*Laskimella on siis mahdollista käsitellä
*useita lukupareja käyttäjän toiveiden
*mukaisesti. Mita tapahtuu, jos luku2 on 0?
*HUOM! goto -lauseen käyttä on KIELLETTY!!!!
*Versio 1.0
*päiväys: 22.10.2014
*/
#include <iostream>
using namespace std;
void main()
{
	int valinta;
	int luku1;
	int luku2;

		cout << "Anna luku1 ";
		cin >> luku1;
		cout << "Anna luku2 ";
		cin >> luku2;

		do{
			cout << "VALIKKO";
			cout << "\n\n0 Lopetus";
			cout << "\n1 Summa ";
			cout << "\n2 Erotus ";
			cout << "\n3 Tulo ";
			cout << "\n4 Osamaara ";
			cout << "\n5 Jakojaannos ";
			cout << "\n6 Syota uudet luvut laskemista varten" << endl;
			cin >> ws >> valinta;
			switch (valinta)
			{
			case 0: exit(0);
			case 1:	cout << "\nLukujen summa on: " << luku1 + luku2 << endl;
				break;
			case 2: cout << "\nLukujen erotus on: " << luku1 - luku2 << endl;
				break;
			case 3: cout << "\nLukujen tulo on: " << luku1*luku2 << endl;
				break;
			case 4: {if (luku2 == 0){ cout << "\nNollalla ei voida jakaa!" << endl; }
					else { cout << "\nLukujen osamaara on: " << luku1 / luku2 << endl; }
					break; }
			case 5: {if (luku2 == 0){ cout << "\nJakojaanosta ei voida ilmoittaa kun jakana on nolla!" << endl; }
					else { cout << "\nLuvuista jaljelle jaava jakojaannos on: " << luku1%luku2 << endl; }
					break; }
			case 6: cout << "\nAnna uudet luvut." << endl;
				cout << "Anna luku1 ";
				cin >> luku1;
				cout << "Anna luku2 ";
				cin >> luku2;
				break;
			default: cout << "\nVirhe: ei ko. toimintoa!" << endl;
				break;
			}
		} while (valinta = !0);
}