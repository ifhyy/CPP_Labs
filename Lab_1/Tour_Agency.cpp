// Employee.cpp
#include <iostream>
#include <string>
#include "Tour_Agency.h"

using namespace std;
namespace Records {
    Hotel::Hotel()
    {
        mName = "";
        mCountry = "";
        mCity = "";
        mAddress = "";
        mStars = 1;
        mContactPerson = "";
        mHotelNumber = -1;
    }
    void Hotel::display()
    {
        cout << "Hotel: " << getName() << endl;
        cout << "Location: " << getCountry() << ", " << getCity() << endl;
        cout << "Address: " << getAddress() << endl;
        cout << "Stars: " << getStars() << endl;
        cout << "Contact: " << getContactPerson() << endl;
        cout << "-------------------------" << endl;
        cout << "Hotel Number: " << getHotelNumber() << endl;
        cout << endl;
    }
// Accessors and setters
    void Hotel::setName(string inName)
    {
        mName = inName;
    }
    string Hotel::getName()
    {
        return mName;
    }
    void Hotel::setCountry(std::string inCountry) {
        mCountry = inCountry;
    }
    string Hotel::getCountry() {
        return mCountry;
    }
    void Hotel::setCity(std::string inCity) {
        mCity = inCity;
    }
    string Hotel::getCity() {
        return mCity;
    }
    void Hotel::setAddress(std::string inAddress) {
        mAddress = inAddress;
    }
    string Hotel::getAddress() {
        return mAddress;
    }
    void Hotel::setStars(int inStars) {
        mStars = inStars;
    }
    int Hotel::getStars() {
        return mStars;
    }
    void Hotel::setContactPerson(std::string inContactPerson) {
        mContactPerson = inContactPerson;
    }
    string Hotel::getContactPerson() {
        return mContactPerson;
    }
    void Hotel::setHotelNumber(int inHotelNumber)
    {
        mHotelNumber = inHotelNumber;
    }
    int Hotel::getHotelNumber()
    {
        return mHotelNumber;
    }
}