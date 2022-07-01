
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class InventoryItem
{
private:
string description; // The item description
double * cost; // The item cost
int units; // Number of units on hand
public:
// Constructor #1 Default
InventoryItem()
{
// Initialize description, cost, and units.
description ="";
cost = new double(0);
units = 0;
}
// Constructor #2 Parameterized
InventoryItem(string desc)
{

// Assign the  value to description.
description = desc;
// Initialize cost and units.
cost = new double(0);
units = 0;
}
// Constructor #3 Parameterized
InventoryItem(string desc, double c, int u)
{ // Assign values to description, cost, and units.
description =desc;
cost = new double(0);
*cost = c;
units = u;
}
// Constructor #3 Copy
// Comment and Uncomment this to see Output (Shallow vs Deep Copy)
InventoryItem(const InventoryItem &inventoryItemObj)
{ // Assign values to description, cost, and units.
description =inventoryItemObj.getDescription();
cost = new double(0);
*cost = inventoryItemObj.getCost();
units = inventoryItemObj.getUnits();
}
// Mutator functions
void setDescription(string d)
{
description =d;
}
void setCost(double c)
{
*cost = c;
}
void setUnits(int u)
{
units = u;
}
// Accessor functions
string getDescription() const
{
return description;
}
double getCost() const
{
return *cost;

}
int getUnits() const
{
return units;
}
~InventoryItem()
{
delete cost;
}
};

int main()
{
// Create an InventoryItem object and call
// the default constructor.
InventoryItem item1;
item1.setDescription("Hammer"); // Set the description
item1.setCost(6.95); // Set the cost
item1.setUnits(12); // Set the units
// Create an InventoryItem object and call
// constructor #2.
InventoryItem item2("Pliers");
// Create an InventoryItem object and call
// constructor #3.
InventoryItem item3("Wrench", 8.75, 20);
InventoryItem item4 = item3;
cout<<"The following items are in inventory:\n";
cout<<setprecision(2) << fixed <<showpoint;
// Display the data for item 1.
cout<<"Description: "<< item1.getDescription() <<endl;
cout<<"Cost: $"<< item1.getCost() <<endl;
cout<<"Units on Hand: "<< item1.getUnits() <<endl<<endl;
// Display the data for item 2.
cout<<"Description: "<< item2.getDescription() <<endl;
cout<<"Cost: $"<< item2.getCost() <<endl;
cout<<"Units on Hand: "<< item2.getUnits() <<endl<<endl;
// Display the data for item 3.
cout<<"Description: "<< item3.getDescription() <<endl;
cout<<"Cost: $"<< item3.getCost() <<endl;
cout<<"Units on Hand: "<< item3.getUnits() <<endl;
// Display the data for item 4.
cout<<"Description: "<< item4.getDescription() <<endl;
cout<<"Cost: $"<< item4.getCost() <<endl;
cout<<"Units on Hand: "<< item4.getUnits() <<endl;
cout<<endl<<"Shallow vs Deep Copy- Comment Copy Constructor to see difference in output"<<endl;
item3.setCost(20);
cout<<"Item 3 Cost: $"<< item3.getCost() <<endl;
cout<<"Item 4 Cost: $"<< item4.getCost() <<endl;
return 0;
}
