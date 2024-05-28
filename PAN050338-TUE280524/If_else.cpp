#include<iostream>

int main(){
    int num;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> num;

    // Check if the entered number is greater than 0
    if(num > 0){
        std::cout << num << " is a Positive Number." << std::endl;
    }
    // If not, check if the number is less than 0
    else if(num < 0){
        std::cout << num << " is a Negative Number." << std::endl;
    }
    // If neither condition is true, then the number must be 0
    else{
        std::cout << num << " is equal to 0." << std::endl;
    }
    return 0;
}