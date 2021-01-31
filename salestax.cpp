/*
Implement a function called addTax. The function addTax has two formal parameters: 
taxRate(float), which is the amount of sales tax expressed as a percent; and cost(float), 
which is the cost of an item before tax. The function returnsthe value(float)of cost so 
that it includes sales tax.
*/

using namespace std;

float addTax(float taxRate, float cost){
    float finalCost = cost + (cost * (taxRate / 100)); 
    return finalCost; 
}