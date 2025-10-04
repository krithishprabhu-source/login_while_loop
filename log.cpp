#include <iostream>
#include <string>

int main(){
    std::string password;
    while(password.empty()){
        std::cout << "psw: ";
        getline(std::cin, password);
    }
    while(password != "Hey1234"){
        std::cout << "psv: ";
        getline(std::cin, password);
    }
    std::cout << "Welcome ";
    return 0;
}
