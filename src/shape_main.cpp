#include <iostream>
#include <limits>
#include "../header/rectangle.hpp"
#include "../header/triangle.hpp"

using namespace std;

int main() {
    int choice;
    
    cout << "Choose a shape:\n";
    cout << "1. Rectangle\n";
    cout << "2. Triangle\n";
    cout << "Enter choice (1 or 2): ";
    
    while (!(cin >> choice) || (choice != 1 && choice != 2)) {
        cout << "Invalid input. Please enter 1 or 2: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    if (choice == 1) {
        int width, height;
        
        cout << "Enter width: ";
        while (!(cin >> width) || width <= 0) {
            cout << "Invalid input. Please enter a positive number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        cout << "Enter height: ";
        while (!(cin >> height) || height <= 0) {
            cout << "Invalid input. Please enter a positive number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        Rectangle rect;
        rect.set_width(width);
        rect.set_height(height);
        cout << "Rectangle area: " << rect.area() << endl;
        
    } else {
        int base, height;
        
        cout << "Enter base: ";
        while (!(cin >> base) || base <= 0) {
            cout << "Invalid input. Please enter a positive number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        cout << "Enter height: ";
        while (!(cin >> height) || height <= 0) {
            cout << "Invalid input. Please enter a positive number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        Triangle tri;
        tri.set_base(base);
        tri.set_height(height);
        cout << "Triangle area: " << tri.area() << endl;
    }
    
    return 0;
}
