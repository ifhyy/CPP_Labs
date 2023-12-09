// Database.cpp
#include <iostream>
#include <stdexcept>
#include <string>
#include "Database.h"
using namespace std;
namespace Records {
    Database::Database()
    {
        mNextSlot = 0;
        mNextHotelNumber = kFirstHotelNumber;
    }
    Database::~Database()
    {
    }
    Hotel& Database::addHotel(string inName, string inCountry, string inCity, string inAddress, int inStars,
                              string inContactPerson)
    {
        if (mNextSlot >= kMaxHotels) {
            cerr << "There is no more room to add the new employee!" << endl;
            throw exception();

        }
        Hotel& theHotel = mHotels[mNextSlot++];
        theHotel.setName(inName);
        theHotel.setCountry(inCountry);
        theHotel.setCity(inCity);
        theHotel.setAddress(inAddress);
        theHotel.setStars(inStars);
        theHotel.setContactPerson(inContactPerson);
        theHotel.setHotelNumber(mNextHotelNumber++);
        return theHotel;
    }
    void Database::displayAll()
    {
        for (int i = 0; i < mNextSlot; i++) {
            mHotels[i].display();
        }
    }
}