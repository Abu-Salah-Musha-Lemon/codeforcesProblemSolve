#include <iostream>

int main() {
int a, b;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    if(a<=9 || b<=9){
            int result = a + b;
           std::cout << "a + b = " << result << std::endl;
    }else{
    std::cout<< "a & b value is biger   then 9"<<std::endl;
    }
    return 0;
}
