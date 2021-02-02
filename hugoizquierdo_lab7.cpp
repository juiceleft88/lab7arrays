//Hugo Izquierdo
//January 31st, 2021
//The purpose of this program is to create an application to produce a purchase order

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//void displayPlastics(string [], int);
//void readNumLbs(double [], int);
void displayResults(string[], double[], double[], double[], int);


int main()
{
    const int NUM_PLASTICS = 6;
    string plastics[NUM_PLASTICS] = {"PET beverage bottles and jars", "Natural high-density polyethylene", "Color HDPE", "Grade A film", "Grade B film", "Grade C film"};
    double plasticPerLb[] = {.08, .34, .04, .08, .05, .02};
    double numberOfLbs[NUM_PLASTICS];
    double totalCost[NUM_PLASTICS];

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

    cout << "Here is the price per pound for each plastic: " << endl;
    

    displayResults(plastics, numberOfLbs, plasticPerLb, totalCost, NUM_PLASTICS);

    //displayPlastics(plastics, NUM_PLASTICS); //to show plastics
    //readNumLbs(numberOfLbs, NUM_PLASTICS);


    return 0;
}

//function to display
void displayResults(string plastics[], double numberOfLbs[], double plasticPerLb[], double totalCost[], int count)
{
    cout << "Material\tWeight(Pounds)\tCost/Pound\tCost\n";
    cout << "-------------------------------------------------------------\n";
    for (int index = 0; index < count; index++)
    {
        cout << plastics[index];
        cout << setw(4) << numberOfLbs[index] << endl;
        cout << setw(4) << plasticPerLb[index] << endl;
        cout << setw(4) << totalCost[index] << endl;
    }
    cout << endl;
}

/*
void displayPlastics(string plast[], int size)
{   
    for (int i=0; i < size; i++)
    {
    cout << plast[i] << endl;
    }
}

void readNumLbs (double poundNum[], int size2)
{
    cout << "Please enter the amount of pounds for each plastic" << endl;
    for (int k = 0; k < size2; k++)
    cin >> poundNum[k];
}
*/