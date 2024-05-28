#include<iostream>

int add(int a, int b){
    return a+b;
}

int main(){
    std::cout << "3 + 6 = " << add(3, 6) << std::endl;

    return 0;
}