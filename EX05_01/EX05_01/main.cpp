//
//  main.cpp
//  EX05_01
//
//  Created by Eben Schumann on 11/1/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

#include <iostream>
#include <cString>
using namespace std;
template <typename T>
int linearSearch(const T[], T, int);


int main(int argc, const char * argv[]) {
    int testInt[10] = {1,2,3,4,5,6,7,8,9,10}, intKey = 6;
    double testDouble[10] = {.1,.2,.3,.4,.5,.6,.7,.8,.9,1.0}, doubleKey = .7;
    string testString = "Loading...";
    char charString[10], charKey = '.';
    for (int i = 0; i < 10; i++){
        charString[i] = testString[i];
    }
    cout << "For testInt, 6 is in slot " << linearSearch(testInt, intKey, 10) << endl;
    cout << "For testDouble, .7 is in slot " << linearSearch(testDouble, doubleKey, 10) << endl;
    cout << "For testString, '.' is in slot " << linearSearch(charString, charKey, 10) << endl;
    return 0;
}

template <typename T>
int linearSearch(const T list[], T key, int arraySize){
    for (int i = 0; i < arraySize; i++){
        if (key == list[i])
            return i;
    }
    return -1;
}
