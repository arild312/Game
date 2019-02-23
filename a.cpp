//Created by Aril Dewantara
#include <iostream>
#include <ctime>
#include <cmath>
#include <string>
#include <algorithm>
void menang()
{
	std::cout << "menang" << std::endl;
}
void kalah()
{
	std::cout << "kalah" << std::endl;
}
void draw()
{
	std::cout << "draw" << std::endl;
}
void benar()
{
	std::cout << "benar" << std::endl;
}
void salah()
{
	std::cout << "salah" << std::endl;
}
void suit()
{
	std::cout << "pilih salah satu\n";
	std::cout << "1 batu\n2 gunting\n3 kertas\n";
	std::cout << "-> ";
	int suit;
	std::cin >> suit;
	switch (suit)
	{
		case 1:
		std::cout << "anda memilih batu\n";
		break;
		case 2:
		std::cout << "anda memilih gunting\n";
		break;
		case 3:
		std::cout << "anda memilih kertas\n";
		break;
		default:
		std::cout << "masukan dengan benar\n";
	}
	int komputer = rand() % 3 + 1;
	switch (komputer)
	{
		case 1:
		std::cout << "komputer memilih batu\n";
		break;
		case 2:
		std::cout << "komputer memilih gunting\n";
		break;
		case 3:
		std::cout << "komputer memilih kertas\n";
		break;
	}
	if (komputer == suit) draw();
	if (suit == 1 && komputer == 2) menang();
	if (suit == 1 && komputer == 3) kalah();
	if (suit == 2 && komputer == 1) kalah();
	if (suit == 2 && komputer == 3) menang();
	if (suit == 3 && komputer == 1) menang();
	if (suit == 3 && komputer == 2) kalah();
}
void tebak()
{
	std::cout << "pilih angka 1 - 20\n";
	std::cout << "-> ";
	int tebak;
	std::cin >> tebak;
	int komp = rand()% 20 + 1;
	if (komp == tebak) benar();
	if (komp != tebak) salah();
}
void reverse()
{
	std::string r;
	std::cout << "masukan kalimat\n";
	std::cout << "-> ";
	std::cin >> r;
	reverse (r.begin (), r.end ());
	std::cout << "hasil\n";
	std::cout << "-> " << r << std::endl;
}
void a()
{
	std::cout << "\033[01;33m+------------------------------+" << std::endl;
	std::cout << "|       Created by ARIL        |" << std::endl;
	std::cout << "|       Team DSFS              |" << std::endl;
	std::cout << "|       Github arild312        |" << std::endl;
	std::cout << "+------------------------------+" << std::endl;
}
int pilihan;
int main ()
{
	std::string username, password;
	bool login = false;
	do
	{
	std::cout << "masukan username\n";
	std::cout << "-> ";
	getline (std::cin,username);
	std::cout << "masukan password\n";
	std::cout << "-> ";
	getline (std::cin,password);
	if (username == "arild312" && password == "aril gans")
	{
		std::cout << "\033[00;32mlogin sukses\n";
		login = true;
	}
	else
	{
		std::cout << "\033[00;31mlogin gagal\n";
	}
	}while (!login);
	a();
	do
	{
	std::cout << "\033[01;36m01 Suit Jepang" << std::endl;
	std::cout << "02 Tebak Angka" << std::endl;
	std::cout << "03 Reverse Kalimat" << std::endl;
	std::cout << "04 Keluar" << std::endl;
	std::cout << "-> ";
	std::cin >> pilihan;
	if (pilihan == 1) suit();
	if (pilihan == 2) tebak();
	if (pilihan == 3) reverse();
	} while (pilihan != 4);
	return 0;
}