#ifndef AnalogIn_h
#define AnalogIn_h

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;
using std::string;

class AnalogIn {
    private:
     unsigned int number;

    public:
    // Constructors
     AnalogIn();
     AnalogIn(unsigned int n);
    // Destructor
     ~AnalogIn();
    // mutators
     void setNumber(unsigned int n);
     int readADCsample();
    // Accessors
     unsigned int getNumber() {return number; };
};

#endif
