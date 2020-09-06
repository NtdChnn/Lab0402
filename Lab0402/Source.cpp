#include<stdio.h>
#include<windows.h>
#include<conio.h>
void draw_ship(int x, int y)
{
	printf(" <-0-> ");
}
void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int main()
{
	int x, y=1;
	for (x = 20; x <= 40; x++)
	{
		gotoxy(x, y);
		draw_ship(x, y);
		Sleep(500);
	}
	return 0;
}
