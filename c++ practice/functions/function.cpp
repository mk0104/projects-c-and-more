#include <iostream>
using namespace std;
#include <string>
void infoAbout(string Name = " ") {
	
	if (Name == "Matthew Brown" ) {

		cout << "Matthew Brown" << "\n";
		cout << "DOB" << "\n";
		cout << 20 << 07 << 1997 << "\n";
		cout << "COB" << "\n";
		cout << "England " << "\n";

	}
	else  {
		cout << "There is no info about" << " " << Name << "\n";
	}
}
	
	

int main(){

	
	infoAbout("Matthew Brown");
	
	


	return 0;
	
}	

