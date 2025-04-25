/*
    leap_years
    Display the leap years of civil/comon (Gregorian Calendar) 
    from year 1800 upto 2400.

    For submission to https://code.golf/leap-years#cpp

    Created by amd

*/


// ------------------------------
// ******************************
// Preprocessor Declaration
// ******************************
// ------------------------------
#define YEAR_MIN 1800
#define YEAR_MAX 2400

#include <iostream>

using namespace std;



// ------------------------------
// ******************************
// Function
// leapyear_inquire
// ******************************
// ------------------------------
bool leapyear_inquire(int year)
{
    // ----------------------------
    // Variable declaration
    bool res;
    int x;

    // ---------------------------
    // Actual Function Run

    // getting the year from function arg
    x=year;

    // Test the variable for leap year
    if( (x%4 == 0 && x%100 !=0) || (x % 400 == 0))
    {
        // situation if leap year
        res=true;
    }else
    {
        // situation if ordinary year
        res=false;
    };

    // return the result
    return res;
};



// ------------------------------
// ******************************
// Program Entry Point
// ******************************
// ------------------------------
int main(int argc, char* argv[])
{
    // ----------------------------
    // Variable declaration
    int c;

    // ---------------------------
    // Actual program Run

    // scanning the ARGs for leap year
    for(c=YEAR_MIN; c<=YEAR_MAX; c++)
    {
        // If Leap Year print the it
        if( (leapyear_inquire(c) ) == true )
        {
            cout<<c<<endl;
        };

    };

    // Program End and return the result
    return 0;

};
