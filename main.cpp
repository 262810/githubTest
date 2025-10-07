#include <iostream>

int policz(int a, int b) {
    return a * b; //zmiana dodawania na mnozenie
}

int main() {
    std::cout << "Hello world!" << std::endl;
    std::cout << "W pierwszym branchu; 2 * 3 =  " << policz(2, 3) << std::endl;
    return 0;

}
