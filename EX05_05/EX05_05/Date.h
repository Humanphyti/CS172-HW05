//
//  Date.h
//  EX05_05
//
//  Created by Eben Schumann on 11/1/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

#ifndef Date_h
#define Date_h

#include <iostream>
#include <string>
using namespace std;

class Date{
public:
    Date();
    
    void setDate(int year, int month, int day);
    
    int getDay();
    
    int getMonth();
    
    int getYear();
    
private:
    int year;
    int month;
    int day;
};

#endif /* Date_h */
