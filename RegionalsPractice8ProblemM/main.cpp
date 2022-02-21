@author Steven Seiden, Harrison Gietz

//Problem: https://open.kattis.com/contests/nar21practice8/problems/methodicmultiplication

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

    string line1 = "";
    string line2 = "";
    std::cin >> line1;
    std::cin >> line2;

    int num1 = 0;
    int num2 = 0;

    for(int i = 0; i < line1.length(); i++){
        if(line1.at(i) == 'S'){
            num1++;
        } else if(line1.at(i) == '0'){
            i = line1.length();
        }
    }

    for(int i = 0; i < line2.length(); i++){
        if(line2.at(i) == 'S'){
            num2++;
        } else if(line2.at(i) == '0'){
            i = line2.length();
        }
    }

    int numOfOutS = num1 * num2;


    //std::cout << numOfOutS << std::endl;


    for(int i = 0; i < numOfOutS; i++){
        std::cout << "S(";
    }
    std::cout << "0";
    for(int i = 0; i < numOfOutS; i++){
        std::cout << ")";
    }



    return 0;
}
