#include "AnalogIn.h"

int main(){

AnalogIn ADC(0);                // init object

float ADC_val = ADC.readADCsample();

// (float (val)/4096) * ADC_val
float voltage = (1.80/4096) * ADC_val;

cout << "ADC value is: " << ADC_val << endl;
cout << "voltage is: " << voltage << endl;

/*      
 Voltage Divider Equation: Vout = R2 * (Vin)/(R1+R2)

        // insanity check
 0.38 = R2 * ((1.8)/(R1+R2))
 0.38/1.8 = R2/(R1+R2)
 0.21(10k + R2) = R2
 2100 = R2(1 - 0.21)
 2658.22785 = R2
 I had a 2.7k ohm resistor

        // derived equation
 R2 = vout(R1) / Vin - Vout
*/
float R1 = 10000;  // making R1 and Vin an int outputs a wrong value for resistance
float Vin = 1.8;
float resistance = (voltage * R1) / (Vin - voltage);


cout << "Resistance is: " << resistance << endl;

}
