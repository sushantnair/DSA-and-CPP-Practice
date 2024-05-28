#include<iostream>

int main(){
    int start, end, i;

    std::cout << "Enter the value with which the loop should start (inclusive): " << std::endl;
    std::cin >> start;
    std::cout << "Enter the value with which the loop should end (inclusive): " << std::endl;
    std::cin >> end;
    i = start;
    while(i <= end){
        // Output the current value
        std::cout << "The current value is: " << i << std::endl;

        // Increment the value of iterator i
        i++;
    }

    return 0;
}