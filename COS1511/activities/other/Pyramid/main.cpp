//
// Created by Musa Baloyi on 2025/03/13.
//

#include "main.h"


#include <iostream>

int main(){
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            std::cout << "S";
        }

        for(int j = 1; j <= 2*i-1; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}