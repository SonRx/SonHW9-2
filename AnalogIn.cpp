#include "AnalogIn.h"

#define ADC_PATH "/sys/bus/iio/devices/iio:device0/in_voltage"
//#define ADC 0

// public funtions

// Constructors
AnalogIn::AnalogIn() {}

AnalogIn::AnalogIn(unsigned int n){
    setNumber(n);
}

// Destructor
AnalogIn::~AnalogIn(){
    cout << "object destroyed" << endl;
}

// Mutators
void AnalogIn::setNumber(unsigned int n){
    number = n;
}

int AnalogIn::readADCsample(){
    stringstream ss;
    ss << ADC_PATH << number << "_raw";
    fstream fs;
    fs.open(ss.str().c_str(), fstream::in);
    fs >> number;
    fs.close();
    return number;
}

