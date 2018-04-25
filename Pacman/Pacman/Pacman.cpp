// Pacman.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "random.h"
#include "gotoxy.h"
#include "wait.h"
#include "conio.h"



void map_zeichnen(char p_zeichen)
{
	int i;													//i = schleifenvariable
	const int ramen_breite = 38;
	const int ramen_hoehe = 19;

	char spielflache[ramen_breite + 1][ramen_hoehe + 1];		//Z = spielfläche
	int xpos;
	int ypos;


	for (xpos = 0; xpos < ramen_breite; xpos++)				//die ganze spielfläche wird als wand definiert
	{
		for (ypos = 0; ypos < ramen_hoehe; ypos++)
		{
			spielflache[xpos][ypos] = 'Z';
			gotoxy(xpos, ypos);
			//printf("Z");
			printf("%c", p_zeichen);
		}

	}
	//weg für die erste zeile
	for (i = 8; i <= 17; i++)									//w = weg
	{
		gotoxy(i, 1);
		printf(" ");
		spielflache[i][0] = 'w';

	}
	for (i = 20; i < 36; i++)									//w = weg
	{
		gotoxy(i, 1);
		printf(" ");
		spielflache[i][0] = 'w';

	}
	//weg für die zweite zeile
	for (i = 4; i < 10; i++)									//w = weg
	{
		gotoxy(i,2);
		printf(" ");
		spielflache[i][2] = 'w';

	}
	
		gotoxy(16, 2);
		printf(" ");
		spielflache[16][2] = 'w';
		gotoxy(17, 2);
		printf(" ");
		spielflache[17][2] = 'w';
	

}






int main()
{

	char zeichen = 219;
	map_zeichnen(zeichen);
	gotoxy(18, 25);
	return 0;
}



