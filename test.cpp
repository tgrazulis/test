#include <iostream>

int main(){
    std::string x;

    std::cout << "Hello my dude!@@\n";
    std::cout << "Can you tell me your name?";
    std::cin >> x;
    std::cout << "Hello " << x << '\n'; 
    std::cin.get();
    std::cin.get(); 
    return 0;
}