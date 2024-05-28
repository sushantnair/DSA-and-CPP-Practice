#include<iostream>
#include<fstream>

int main(){
    // Create an output file stream and open a file named "file.txt"
    std::ofstream file("file.txt");

    // Write the string "Hare Krishna!" to the file
    file << "Hare Krishna!";

    // Close the file
    file.close();

    return 0;
}