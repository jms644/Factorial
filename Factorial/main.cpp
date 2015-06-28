//
//  main.cpp
//  Factorial
//
//  Created by Joshua Schwartz on 8/10/14.
//  Copyright (c) 2014 JOSH. All rights reserved.
//

#include <iostream>

using namespace std;

int factorial(int num)
{
    if(num <= 1)
        return 1;
    else
        return num*factorial(num-1);
}

int main(int argc, const char * argv[])
{
    int x = factorial(5);
    cout << x << endl;
    
    return 0;
}

