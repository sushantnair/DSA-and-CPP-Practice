#include<iostream>

int main(){
    int *arr = new int[5];
    for(int i = 0; i < 5; i++){
        arr[i] = i + 1;
    }
    std::cout << "Dynamic Array: ";
    for(int i = 0; i < 5; i++){
        std::cout << arr[i] << " ";
    }
    delete[] arr;
    std::cout << std::endl;
    
    std::cout << "An attempt to print the same array after deletion..." << std::endl;
    for(int i = 0; i < 5; i++){
        std::cout << arr[i] << " ";
    }

    return 0;
}