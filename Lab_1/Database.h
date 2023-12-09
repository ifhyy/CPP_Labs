// Database.h

#include <iostream>
#include "Tour_Agency.h"
namespace Records {
    const int kMaxHotels = 100;
    const int kFirstHotelNumber = 1000;
    class Database
    {
    public:
        Database();
        ~Database();
        Hotel& addHotel(std::string inName, std::string inCountry, std::string inCity, std::string inAddress,
                        int inStars, std::string inContactPerson);
        void displayAll();
    protected:
        Hotel mHotels[kMaxHotels];
        int mNextSlot;
        int mNextHotelNumber;
    };
}