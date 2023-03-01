#include <iostream>
using namespace std;

main () {

//Enter 1,2,3
    std:: cout << "Enter how many numbers you would like" << std:: endl;
    std:: string number;
    std:: cin >> number;

srand(time(NULL));

//1
    if (number == "1"){
        int num = (rand() % 9);
        std:: cout << num;
    }

//2
    if (number == "2"){
        int num = (rand() % 9);
        std:: cout << num;
    }
     if (number == "2"){
        int num = (rand() % 9);
        std:: cout << num;
    }

//3
    if (number == "3"){
        int num = (rand() % 9);
        std:: cout << num;
    }
     if (number == "3"){
        int num = (rand() % 9);
        std:: cout << num;
    }
    if (number == "3"){
        int num = (rand() % 9);
        std:: cout << num;
    }

    return 0;
}
