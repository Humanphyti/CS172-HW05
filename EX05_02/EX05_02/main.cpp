//
//  main.cpp
//  EX05_02
//
//  Created by Eben Schumann on 11/1/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

#include <iostream>
using namespace std;
template <typename T>

bool isSorted(const T[], int);

int main(int argc, const char * argv[]) {
    int intTest[] = {1,2,3,4,5,6,7,8};
    double doubleTest[] = {.1,.2,.3,.4,.5,.6,.7,.8};
    string stringTest = "pqrstwxyz";
    char charString[9];
    for (int i = 0; i < 9; i++)
        charString[i] = stringTest[i];
    cout << "Int array: " << isSorted(intTest, 8) << endl;
    cout << "Double array: " << isSorted(doubleTest, 8) << endl;
    cout << "String array: " << isSorted(charString, 9) << endl;
    return 0;
}

template <typename T>
bool isSorted(const T list[], int size){
    bool checkSorted = false;
    for (int i = 0; (i + 1) < size; i++){
        if (list[i] > list[i+1])
            checkSorted = false;
    }
    return checkSorted;
}
