#include <iostream>
#include <string>
using namespace std;

int main(){

		string games[4] = { "CS:GO \n", "Dark Souls \n", "Super Mario \n", "GTA 5 \n" };
		cout << games[0];
		

		struct {
			string Name;
			string Lastname;
			int day;
			int month;
			int year;
			
		}PersonalData;

		PersonalData.Name = "James";
		PersonalData.Lastname = "Browns";
		PersonalData.day = 20;
		PersonalData.month = 06;
		PersonalData.year = 1976;


		cout << PersonalData.Name << " "  << PersonalData.Lastname << " " << PersonalData.day << "." << PersonalData.month << "." << PersonalData.year <<"\n";

		string game = "Gta5";
		string* ip = &game;

		*ip = "Gta6";
		cout << game;

		




}