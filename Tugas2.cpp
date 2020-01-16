#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;
void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}


int main()
{
    setcolor(5);
	cout<<"Selamat ";
	setcolor(8);
	cout<<"Datang Di NIOMIC\n";
	setcolor(3);
	cout<<"Saya ";
	setcolor(5);
	cout<<"Sedang Belajar ";
	setcolor(8);
	cout<<"C++";
    return 0;
}
