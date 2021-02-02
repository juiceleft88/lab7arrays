//Hugo Izquierdo
//January 31st, 2021
//The purpose of this program is to create an application to produce a purchase order

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void displayPlastics(string [], int);
void readNumLbs(double [], int);

int main()
{
    const int NUM_PLASTICS = 6;
    string plastics[NUM_PLASTICS] = {"PET beverage bottles and jars", "Natural high-density polyethylene", "Color HDPE", "Grade A film", "Grade B film", "Grade C film"};
    double plasticPerLb[] = {.08, .34, .04, .08, .05, .02};
    double numberOfLbs[NUM_PLASTICS];
    double totalCost[NUM_PLASTICS];

    cout << "Enter the weight for each item to create a purchase order." << endl;

    for (int index = 0; index < NUM_PLASTICS; index++)
    {
        cout << "How many pounds of " << plastics[index] << "?" << endl;
        cin >> numberOfLbs[index];
    }

    //displayPlastics(plastics, NUM_PLASTICS); //to show plastics
    //readNumLbs(numberOfLbs, NUM_PLASTICS);


    return 0;
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