#include<iostream>

struct Point{
    int x; // Member variable for x-coordinate
    int y; // Member variable for y-coordinate
};

int main(){
    // Declare an instance of the point structure
    Point p;

    // Assign values to the member variables of the Point structure
    p.x = 2;
    p.y = 2;

    // Print the values of the Point structure
    std::cout << "Point: (" << p.x << ", " << p.y << ")" << std::endl;

    return 0;
}