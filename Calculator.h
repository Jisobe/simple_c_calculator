#ifndef CALCULATOR_H_
#define CALCULATOR_H_

typedef struct Calculator_struct{
   double value;
}Calculator;
     
Calculator InitCalculator();
Calculator Add(double val, Calculator c);
Calculator Subtract(double val, Calculator c);
Calculator Multiply(double val, Calculator c);
Calculator Divide(double val, Calculator c);
Calculator Clear(Calculator c);
double GetValue(Calculator c);


#endif
