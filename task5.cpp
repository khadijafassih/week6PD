#include <iostream>
using namespace std;
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity);

int main()
{
   string fruit, dayOfWeek;
   cout << "Enter the fruit name: ";
   cin>> fruit;
   cout << "Enter the day of the week (e.g., Monday, Sunday): ";
   cin>> dayOfWeek;
   int quantity;
   cout << "Enter the quantity: ";
   cin>> quantity;
   cout<<calculateFruitPrice(fruit,dayOfWeek,quantity);
}

float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
    float price;
    if(dayOfWeek=="Sunday"||dayOfWeek=="Saturday")
    {
        if(fruit=="banana")
        {price= 2.70*quantity;}
        else if(fruit=="apple")
        {price= 1.25*quantity;}
        else if(fruit=="orange")
        {price= 0.90*quantity;}
        else if(fruit=="grapefruit")
        {price= 1.60*quantity;}
        else if(fruit=="kiwi")
        {price= 3.00*quantity;}
         else if(fruit=="pineapple")
        {price= 5.60*quantity;}
         else if(fruit=="grapes")
        {price= 4.20*quantity;}
        else 
        {cout<<"Error";}
    return price;
    }
    else
    {
        if(fruit=="banana")
        {price= 2.50*quantity;}
        else if(fruit=="apple")
        {price= 1.20*quantity;}
        else if(fruit=="orange")
        {price= 0.85*quantity;}
        else if(fruit=="grapefruit")
        {price= 1.45*quantity;}
        else if(fruit=="kiwi")
        {price= 2.70*quantity;}
         else if(fruit=="pineapple")
        {price= 5.50*quantity;}
         else if(fruit=="grapes")
        {price= 3.85*quantity;}
        else 
        {cout<<"Error";}
    return price;
    }
}  