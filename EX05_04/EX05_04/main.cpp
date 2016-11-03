//
//  main.cpp
//  EX05_04
//
//  Created by Eben Schumann on 11/1/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

template <typename T>
void shuffle(vector<T>& v); //shuffles the vector's values

int main(int argc, const char * argv[]) {
    vector<int> test1;
    for (int i = 0; i < 10; i++){
        test1.push_back(i+1);
        cout << test1.at(i) << endl;
    }
    cout << "after shuffling: \n";
    shuffle(test1);
    for (int i = 0; i < 10; i++){
        cout << test1.at(i) << endl;
    }
}

template <typename T>
void shuffle(vector<T>& v){
    srand(time(0));
    int size = v.size();
    
    for (int i = 0; i < size; i++){
        int randSlot = rand() % size;
        T temp = v[randSlot];
        v[randSlot] = v[i];
        v[i] = temp;
    }
}
