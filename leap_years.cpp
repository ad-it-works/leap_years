#define YEAR_MIN 1900
#define YEAR_MAX 2200

#define P_OK 0
#define P_ERR_RANGE -10

#include <iostream>

using namespace std;

bool leapyear_inquire(int year)
{
    bool res;

    int x;

    x=year;

    if( (x%4 == 0 && x%100 !=0) || (x % 400 == 0))
    {
        res=true;
    }else
    {
        res=false;
    };

    return res;
};

int main(int argc, char* argv[])
{
    int c;

    for(c=YEAR_MIN; c<=YEAR_MAX; c++)
    {
        if( (leapyear_inquire(c) ) == true )
        {
            cout<<c<<endl;
        };

    };

    return 0;

};
