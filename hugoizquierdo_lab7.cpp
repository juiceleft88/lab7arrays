//Hugo Izquierdo
//January 31st, 2021
//The purpose of this program is to create an application to produce a purchase order

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void displayResults(string[], double[], double[], double[], int);
void displayTotal(double, int);

int main()
{
    const int NUM_PLASTICS = 6;
    string plastics[NUM_PLASTICS] = {"PET beverage bottles and jars", "Natural high-density polyethylene", "Color HDPE", "Grade A film", "Grade B film", "Grade C film"};
    double plasticPerLb[] = {.08, .34, .04, .08, .05, .02};
    double numberOfLbs[NUM_PLASTICS];
    double totalCost[NUM_PLASTICS];

    cout << "This program creates a purchase order for Plastic Products Inc." << endl;
    cout << "Enter the weight for each item to create a purchase order." << endl;
    cout << setprecision(2) << fixed << endl;

    for (int index = 0; index < NUM_PLASTICS; index++)
    {
        cout << "How many pounds of " << plastics[index] << "? ";
        cin >> numberOfLbs[index];
        while (numberOfLbs[index] < 0)
        {
            cout << "No negative values, please enter the weight again: ";
            cin >> numberOfLbs[index];
        }
    }

    cout << "--------------------------------Purchase Order--------------------------------------" << endl;
    

    displayResults(plastics, numberOfLbs, plasticPerLb, totalCost, NUM_PLASTICS);
    void displayTotal(numberOfLbs, NUM_PLASTICS);
    return 0;

}

//function to display
void displayResults(string plastics[], double numberOfLbs[], double plasticPerLb[], double totalCost[], int count)
{
    cout << left << setw(40) << "Material" << left << setw(20) << "Weight(Pounds)" << left << setw(20) << "Cost/Pound" << left << "Cost\n";
    cout << "-------------------------------------------------------------------------------------\n";
    for (int index = 0; index < count; index++)
    {
        totalCost[index] = numberOfLbs[index] * plasticPerLb[index];
        cout << left <<setw(40) << plastics[index] << left << setw(20) << numberOfLbs[index] << left << setw(20) << plasticPerLb[index] << left << totalCost[index];
        cout << endl;
    }
   
}

void displayTotal(double weightTotal[], int size)
{
    int total = 0;
    for (int count = 0; count < size; count++)
        {
        total += weightTotal[count];
        cout << total << endl;
        }
}

