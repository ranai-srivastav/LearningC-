#include <iostream>
#include <vector>

using namespace std;

class staircase 
{
public :
virtual void use ( string name )
{
    cout << name << " walks down the staircase " << endl ;
}

virtual ~staircase () {}
};

class boobytrap : public staircase 
{
public :
virtual void use ( string name )
    {
        staircase :: use ( name );
        cout << name << " slips and falls " << endl ;
    }
};

int*& method(int *i)
{
    return i;
}

int main(int argc, char *argv[])
{
    vector<staircase> v;
    v.push_back(boobytrap());
    v[0].use("Old man Marley");
}