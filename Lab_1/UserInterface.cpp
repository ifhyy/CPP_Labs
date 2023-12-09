// UserInterface.cpp
#include <iostream>
#include <stdexcept>
#include <string>
#include "Database.h"
using namespace std;
using namespace Records;
int displayMenu();
void doAdd(Database& inDB);

int main(int argc, char** argv)
{
    Database hotelDB;
    bool done = false;
    while (!done) {
        int selection = displayMenu();
        switch (selection) {
            case 1:
                cin.ignore();
                doAdd(hotelDB);
                break;
            case 2:
                hotelDB.displayAll();
                break;
            case 0:
                done = true;
                break;
            default:
                cerr << "Unknown command." << endl;
        }
    }
}
int displayMenu()
{
    int selection;
    cout << endl;
    cout << "Hotel Database" << endl;
    cout << "-----------------" << endl;
    cout << "1) Add a new hotel" << endl;
    cout << "2) List all hotels" << endl;
    cout << "0) Quit" << endl;
    cout << endl;

    cout << "---> ";
    cin >> selection;
    return selection;
}
void doAdd(Database& inDB)
{
    string Name;
    string Country;
    string City;
    string Address;
    int Stars;
    string ContactPerson;
    cout << "Name? ";
    std::getline(std::cin, Name);
    cout << "Country? ";
    std::getline(std::cin, Country);
    cout << "City? ";
    std::getline(std::cin, City);
    cout << "Address? ";
    std::getline(std::cin, Address);
    cout << "Stars(1-5)? ";
    cin >> Stars;
    cin.ignore();
    cout << "Contact Person? ";
    std::getline(std::cin, ContactPerson);
    try {
        inDB.addHotel(Name, Country, City, Address,
                      Stars, ContactPerson);
    } catch (std::exception ex) {
        cerr << "Unable to add new hotel!" << endl;
    }
}