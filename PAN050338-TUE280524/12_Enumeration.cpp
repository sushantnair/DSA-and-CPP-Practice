#include<iostream>

// Define an enumeration named Day
enum Day {Ravivara, Somavara, Mangalavara, Budhavara, Guruvara, Shukravara, Sanivara};

int main(){
    // Declare a variable 'today' of type 'Day' and assign the value 'Budhavara'
    Day today = Budhavara;

    // Print the value of 'today'
    std::cout << "Today is day " << today << std::endl;

    return 0;
}