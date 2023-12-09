// UserInterface.cpp
#include <iostream>
#include <stdexcept>
#include <string>
#include "Database.h"
using namespace std;
using namespace Records;
int displayMenu();
void doAdd(Database& inDB);
void doOpen(Database& inDB);
void doClose(Database& inDB);
void doUpgrade(Database& inDB);
void doDowngrade(Database& inDB);

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
                doClose(hotelDB);
                break;
            case 3:
                doUpgrade(hotelDB);
                break;
            case 4:
                doDowngrade(hotelDB);
                break;
            case 5:
                hotelDB.displayAll();
                break;
            case 6:
                hotelDB.displayCurrent();
                break;
            case 7:
                hotelDB.displayClosed();
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
    cout << "2) Remove hotel from active" << endl;
    cout << "3) Raise amount of stars" << endl;
    cout << "4) Decrease amount of stars" << endl;
    cout << "5) List all hotels" << endl;
    cout << "6) List active hotels" << endl;
    cout << "7) List closed hotel" << endl;
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
void doClose(Database& inDB)
{
    int hotelNumber;

    cout<<"Enter Hotel Number";
    cin>>hotelNumber;

    try {
        Hotel& hotel = inDB.getHotel(hotelNumber);
        hotel.close();
        cout<<"Hotel "<<hotelNumber<<" has been closed"<<endl;
    } catch (std::exception ex) {
        cerr<<"Unable to close hotel"<<endl;
    }
}
void doOpen(Database& inDB)
{
    int hotelNumber;

    cout<<"Enter Hotel Number";
    cin>>hotelNumber;

    try {
        Hotel& hotel = inDB.getHotel(hotelNumber);
        hotel.open();
        cout<<"Hotel "<<hotelNumber<<" has been closed"<<endl;
    } catch (std::exception ex) {
        cerr<<"Unable to close hotel"<<endl;
    }
}
void doUpgrade(Database& inDB)
{
    int hotelNumber;

    cout<<"Enter Hotel Number";
    cin>>hotelNumber;

    try {
        Hotel& hotel = inDB.getHotel(hotelNumber);
        if (hotel.getStars() + 1 < 6){
               hotel.upgrade();
        }
        cout<<"Hotel "<<hotelNumber<<" now has "<<hotel.getStars()<<" stars."<<endl;
    } catch (std::exception ex) {
        cerr<<"Unable to upgrade hotel."<<endl;
    }
}
void doDowngrade(Database& inDB)
{
    int hotelNumber;

    cout<<"Enter Hotel Number";
    cin>>hotelNumber;

    try {
        Hotel& hotel = inDB.getHotel(hotelNumber);
        if (hotel.getStars() - 1 > 0){
            hotel.downgrade();
        }
        cout<<"Hotel "<<hotelNumber<<" now has "<<hotel.getStars()<<" stars."<<endl;
    } catch (std::exception ex) {
        cerr<<"Unable to upgrade hotel."<<endl;
    }
}
