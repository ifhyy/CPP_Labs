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

    Hotel& Database::getHotel(int inHotelNumber)
    {
        for (int i = 0; i < mNextSlot; i++) {
            if (mHotels[i].getHotelNumber() == inHotelNumber) {
                return mHotels[i];
            }
        }

        cerr << "No hotel with number"<<inHotelNumber<<endl;
        throw exception();
    }

    Hotel& Database::getHotel(string inName)
    {
        for (int i = 0; i < mNextSlot; i++) {
            if (mHotels[i].getName() == inName) {
                return mHotels[i];
            }
        }

        cerr << "No hotel with name"<<inName<<endl;
        throw exception();
    }
    void Database::displayAll()
    {
        for (int i = 0; i < mNextSlot; i++) {
            mHotels[i].display();
        }
    }
    void Database::displayCurrent()
    {
        for (int i = 0; i < mNextSlot; i++) {
            if (mHotels[i].getIsActive()) {
                mHotels[i].display();
            }
        }
    }
    void Database::displayClosed()
    {
        for (int i = 0; i < mNextSlot; i++) {
            if (!mHotels[i].getIsActive()) {
                mHotels[i].display();
            }
        }
    }
}