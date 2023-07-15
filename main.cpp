

// логика
// если баланс  > 1 000 ₽  + 5 % 
// иначе  + 3% 



#include <iostream>

int main() {


    double  balance;


    std::cout << "Pls  input balance value  \n";
    std::cin >> balance;

    if (balance < 10000) {

        balance  *= 1.05;
    }
        else{
            balance*= 1.03;

    }

    std::cout <<  "Your balance :" << balance << "\n";

    std::cout << "Your code  is over !\n";
}