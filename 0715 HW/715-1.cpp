#include <iostream>
#include <cstdlib>

int main(){

    int n{};
    int sum = 0;

    do{
        std::cout << "Please enter the max odd number: ";
        std::cin >> n;
    }while (n % 2 == 0 || n < 1);

    for (size_t i{1}; i <= n; i += 2){
        sum += i;
    }

    std::cout << sum << std::endl;

    system("pause");
    return 0;
}