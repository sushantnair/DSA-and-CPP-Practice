#include<iostream>
#include<fstream>
#include<string>

int main(){
    std::ifstream file("file.txt");
    std::string content;
    getline(file, content);
    std::cout << "File Contents: " << content << std::endl;
    file.close();
    return 0;
}