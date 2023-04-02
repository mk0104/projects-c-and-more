#include <iostream>

int main(){
    double Miles;
    double kilometers;

    // type the kilometers to change to miles



    std::cout <<  "Enter the distance in kilometers to change into miles";
    std::cin >> kilometers;

  Miles = ( kilometers  / 1.609 )
;

     std::cout << "The Miles are " << Miles << ".\n";

}