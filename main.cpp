

// логика
// если баланс  > 1 000 ₽  + 5 % 
// иначе  + 3% 



#include <iostream>

int main() {


    double  balance, score;


    std::cout << "Pls  input balance value  \n";
    std::cin >> balance;

    if (balance < 1000) {
        score = balance * 0.05;
        std::cout <<  "Your score is :" << score  << " 5 %\n";
        balance  *= 1.05;
        std::cout <<  "Your balance :" << balance << "\n";
    }
        else{
        score = balance * 0.03;
        std::cout <<  "Your score is :" << score  << " 5 %\n";
        balance  *= 1.03;
        std::cout <<  "Your balance :" << balance << "\n";

    }

    std::cout <<  "Your balance :" << balance << "\n";

    std::cout << "Your code  is over !\n";
}