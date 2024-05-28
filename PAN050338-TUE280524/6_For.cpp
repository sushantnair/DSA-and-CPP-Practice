#include<iostream>

int main(){
    int start, end, i;
    std::cout << "Enter the value with which the loop should start (inclusive): " << std::endl;
    std::cin >> start;
    std::cout << "Enter the value with which the loop should end (inclusive): " << std::endl;
    std::cin >> end;
    
    for(i = start; i <= end; i++){
        std::cout << i << " is the current value." << std::endl;
    }

    return 0;
}