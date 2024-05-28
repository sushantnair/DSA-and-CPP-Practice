#include<iostream>

int main(){
    int num=42;
    int *ptr = &num;
    // Read like this: Pointer variable ptr contains the address of variable num
    //                    *        ptr           =            &         num
    std::cout << "Value of variable num: " << num << std::endl;
    std::cout << "Address of variable num: " << ptr << std::endl;

    return 0;
}