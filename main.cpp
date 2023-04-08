//
//  main.cpp
//  arry archive
//
//  Created by Farhan Niloy on 6/4/23.
//

#include <iostream>

using namespace std;

int main (){

    char vowels[5] {'a', 'e', 'i', 'o', 'u'};

    cout<<"\nFirst vowel is: " <<vowels[0] <<endl;
    cout<<"\nLast vowel is: " <<vowels[4] <<endl;
    cout<<"\nFirst vowel is: " <<vowels[sizeof(vowels)-5] <<endl;
    cout<<"\nLast vowel is: " <<vowels[sizeof(vowels)-1] <<endl;


    double hi_temp [] {99.4, 33.4, 55.6, 77.4, 222.4};

    cout<<"\nHigh temperature is: " <<hi_temp[4] <<endl;

    hi_temp[4] = 99.9;

    cout<<"The high temperature is now: " <<hi_temp[4];

    return 0;
}