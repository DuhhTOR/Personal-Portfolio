#include <iostream>


bool palindromeChecker (int number) {
    int reverseNumber = 0;


    for (int i = number; i > 0; i /= 10) {
        reverseNumber = (reverseNumber * 10) + (i % 10);
    }

    if (number == reverseNumber) {
        return true;
    }

    else {
        return false;
    }
}
  

void printPalindrome (int fromNumber, int toNumber) { 
    for (int i = fromNumber; i <= toNumber; i++) {
        if (palindromeChecker(i)) {
            std::cout << i << " ";
        }
    }
}


int main () {
    printPalindrome(100000, 999999);
    

    system("Pause");
    return 0;
}