#include <stdio.h>
#include <string.h>

#include "Calculator.h"

// TODO: Define functions
//       InitCalculator(), Add(), Subtract(), Multiply(), Divide(), Clear(), GetValue()

Calculator InitCalculator(){
   Calculator newCalc;
   
   newCalc.value = 0.0;
   
   return newCalc;
}

Calculator Add(double val, Calculator c){
   c.value += val;
   
   return c;
}

Calculator Subtract(double val, Calculator c){
   c.value -= val;
   
   return c;
}

Calculator Multiply(double val, Calculator c){
   c.value *= val;
   
   return c;   
}

Calculator Divide(double val, Calculator c){
   c.value /= val;
   
   return c;
}

Calculator Clear(Calculator c){
   c.value = 0.0;
   
   return c;
}

double GetValue(Calculator c){
   return c.value;
}