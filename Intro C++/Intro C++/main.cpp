//
//  main.cpp
//  Intro C++
//
//  Created by Khadijatou Dibba on 8/29/24.
//I will do Basic Exercises on C++

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    //1 program in C++ to print a welcome text in a separate line
    std::cout <<"Welcome\n";
    //2 program in C++ to print the sum of two numbers
    int sum=29+30;
    std::cout <<"the sum of 29 and 30 is:"<<sum;
    std::cout <<"\n";
    
    //3 Write a program in C++ to find Size of fundamental data types.
    int integer;
    bool boolean;
    short shortval;
    char character;
    long longval;
    long long longlong;
    float floatval;
    double doubleval;
    long double longdouble;
    
    std:: cout << "The sizeof(char) is :"<<sizeof(integer)<<"\n";
    std:: cout << "The sizeof(char) is :"<<sizeof(boolean)<<"\n";
    std:: cout << "The sizeof(char) is :"<<sizeof(shortval)<<"\n";
    std:: cout << "The sizeof(char) is :"<<sizeof(character)<<"\n";
    std:: cout << "The sizeof(char) is :"<<sizeof(longval)<<"\n";
    std:: cout << "The sizeof(char) is :"<<sizeof(longlong)<<"\n";
    std:: cout << "The sizeof(char) is :"<<sizeof(floatval)<<"\n";
    std:: cout << "The sizeof(char) is :"<<sizeof(doubleval)<<"\n";
    std:: cout << "The sizeof(char) is :"<<sizeof(longdouble)<<"\n";
    
    
    
    return 0;
    
}
