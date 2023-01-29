
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <windows.h>
#include <vector>
using namespace std;

class App {
	string url;
public:
	App() {}
	vector<string> Arr;
	App(int size, string res, string url)
	{
		this->url = url;
		
		int x = rand() % size;
		fstream file;
		file.open(url);
		for (int i = 0; i < size; i++) {
			getline(file, res);
			Arr.push_back(res);
		}
		cout << endl;
		cout << Arr[x] << endl;
	}
     bool operator == (string appearance)
	 {
		/* string res;
		 fstream file;
		 int x = rand() % 2;
		 file.open("C:/Users/Master/Desktop/FprojectGender.csv");
		 for (int i = 0; i < 2; i++) {
			 getline(file, res);
			 Arr.push_back(res);
		 }*/
		 return this->Arr[0]==appearance;
	 }
};
class NPC {
	App appearance;
	string res;
public:
	NPC(App* apr) {
		this->appearance = *apr;
		/*this->appearance = *new Appearance(7, res, "C:/Users/Взрослая академия/Desktop/FprojectCl.csv");
		this->appearance = *new Appearance(7, res, "C:/Users/Взрослая академия/Desktop/FprojectCl.csv");
		this->appearance = *new Appearance(3, res, "C:/Users/Взрослая академия/Desktop/FprojectBoots.csv");
		this->appearance = *new Appearance(7, res, "C:/Users/Взрослая академия/Desktop/FprojectHair.csv");
		this->appearance = *new Appearance(2, res, "C:/Users/Взрослая академия/Desktop/FprojectGender.csv");
		this->appearance = *new Appearance(3, res, "C:/Users/Взрослая академия/Desktop/FprojectColorK.csv");
		this->appearance = *new Appearance(7, res, "C:/Users/Взрослая академия/Desktop/FprojectColorB.csv");*/
		/*Appearance x;*/
		this->appearance = *new App(2, res, "C:\\Users\\Взрослая академия\\Desktop\\FprojectGender.csv");
		if (this->appearance == "женский")
		{
			this->appearance = *new App(3, res, "C:\\Users\\Взрослая академия\\Desktop\\WomenD.csv");
			this->appearance = *new App(3, res, "C:\\Users\\Взрослая академия\\Desktop\\WomenU.csv");
			this->appearance = *new App(3, res, "C:\\Users\\Взрослая академия\\Desktop\\FprojectBoots.csv");
			this->appearance = *new App(5, res, "C:\\Users\\Взрослая академия\\Desktop\\WomenHair.csv");
			this->appearance = *new App(3, res, "C:\\Users\\Взрослая академия\\Desktop\\FprojectColorK.csv");
			this->appearance = *new App(7, res, "C:\\Users\\Взрослая академия\\Desktop\\FprojectColorB.csv");
		}
		if (this->appearance == "мужской") {
			this->appearance = *new App(2, res, "C:\\Users\\Взрослая академия\\Desktop\\MenD.csv");
			this->appearance = *new App(2, res, "C:\\Users\\Взрослая академия\\Desktop\\MenU.csv");
			this->appearance = *new App(3, res, "C:\\Users\\Взрослая академия\\Desktop\\FprojectBoots.csv");
			this->appearance = *new App(4, res, "C:\\Users\\Взрослая академия\\Desktop\\MenHair.csv");
			this->appearance = *new App(3, res, "C:\\Users\\Взрослая академия\\Desktop\\FprojectColorK.csv");
			this->appearance = *new App(7, res, "C:\\Users\\Взрослая академия\\Desktop\\FprojectColorB.csv");
		}
	}
};

void main() {
	srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string res;
	App* apr = new App();

	for (int i = 0; i < 30; i++)
	{
		NPC* npc = new NPC(apr);
		cout << "----------------------------------------" << endl;
	}
}