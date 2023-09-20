#include <iostream>
using namespace std;


int main()
{


	int foodChoice;
	int guest;
    double average;
    int pizzaSlices;
    double total;
    int wholePizza;
    double pizzaCost;
    double totalCost;
    double meatCost;
    int totalGallons;
    double gallonCost;

    cout << "What food do you want to have" << endl << "1.Pizza" << endl << "2.Sandwiches" << endl << "3.Drinks" << endl;
	cin >> foodChoice;
	cout << "How many guests are attending" << endl;
	cin >> guest;
    if (foodChoice == 1)
    {
        cout << "How many slices will the average person will eat" << endl;
        cin >> average;
        cout << "How many slices are in each pizza" << endl;
        cin >> pizzaSlices;
        total = (average * guest);
        wholePizza = ceil(total / pizzaSlices);
        cout << "How much is each pizza" << endl;
        cin >> pizzaCost;
        totalCost = (pizzaCost * wholePizza);
        cout << "Total cost is " << totalCost << endl;

          
    }
    else if(foodChoice == 2)
    {
        cout << "How much pounds would the average person eat" << endl;
        cin >> average;
        total = ceil(average * guest);
        cout << "How much is a pound of meat" << endl;
        cin >> meatCost;
        totalCost = (meatCost *total);
        cout << "Total cost is " << totalCost << endl;


    }
    else if(foodChoice == 3)
    {
        cout << "How much ounces will the average person drink" << endl;
        cin >> average;
        total=(average * guest);
        totalGallons = ceil(total / 128);
        cout << "How much is each gallon" << endl;
        cin >> gallonCost;
        totalCost = (gallonCost * totalGallons);
        cout << "Total cost is " << totalCost << endl;
   
    
    
    
    }
} 

