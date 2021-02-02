//Hugo Izquierdo
//January 31st, 2021
//The purpose of this program is to create an application to produce a purchase order

#include <iostream>
#include <iomanip> //for setw and setprecision
#include <string> //to use string type

using namespace std;

//function prototypes
void displayResults(string[], double[], double[], double[], int);
void displayTotals(double[], double [], int);

int main()
{
    const int NUM_PLASTICS = 6; //number of elements in each array
    //declaring the four arrays, and initializing two
    string plastics[NUM_PLASTICS] = {"PET beverage bottles and jars", "Natural high-density polyethylene", "Color HDPE", "Grade A film", "Grade B film", "Grade C film"};
    double plasticPerLb[] = {.08, .34, .04, .08, .05, .02};
    double numberOfLbs[NUM_PLASTICS];
    double totalCost[NUM_PLASTICS];

    cout << "This program creates a purchase order for Plastic Products Inc." << endl;
    cout << "Enter the weight for each item to create a purchase order." << endl;
    cout << setprecision(2) << fixed << endl; //setting output to two decimals

    for (int index = 0; index < NUM_PLASTICS; index++) //loop for user to enter 'number of pounds' data
    {
        cout << "How many pounds of " << plastics[index] << "? ";
        cin >> numberOfLbs[index];
        while (numberOfLbs[index] < 0) //while loop for error checking 
        {
            cout << "No negative values, please enter the weight again: ";
            cin >> numberOfLbs[index];
        }
    }

    cout << "--------------------------------Purchase Order------------------------------------------" << endl;
    

    displayResults(plastics, numberOfLbs, plasticPerLb, totalCost, NUM_PLASTICS); //function to display array data
    displayTotals(numberOfLbs, totalCost, NUM_PLASTICS) ; //function to display final totals

    return 0;
}



//function to display four-array data
void displayResults(string plastics[], double numberOfLbs[], double plasticPerLb[], double totalCost[], int count)
{
    cout << left << setw(40) << "Material" << left << setw(20) << "Weight(Pounds)" << left << setw(20) << "Cost/Pound" << left << "Cost\n";
    cout << "-----------------------------------------------------------------------------------------\n";
    for (int index = 0; index < count; index++)
    {
        totalCost[index] = numberOfLbs[index] * plasticPerLb[index];
        cout << left << setw(40) << plastics[index] << left << setw(20) << numberOfLbs[index] << "$" << left << setw(20) << plasticPerLb[index] << "$" << left << setw(20) << totalCost[index];
        cout << endl;
    }
   
}

//function to display weight total and cost total
void displayTotals(double weightTotal[], double sumCost[], int size)
{
    double total = 0;
    double sumC = 0;
    cout << "-----------------------------------------------------------------------------------------\n";

    for (int count = 0; count < size; count++)
        {
            total += weightTotal[count];
            sumC += sumCost[count];
        }
        cout << left << setw(40) << "Totals: " << left << setw(40) << total << "$" << sumC << endl;
}

