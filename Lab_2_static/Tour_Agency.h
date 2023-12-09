// Tour_Agency.h
#include <iostream>
namespace Records {
    class Hotel
    {
    public:
        Hotel();

        void open();
        void close();
        void upgrade();
        void downgrade();
        void display();

// Accessors and setters
        void setName(std::string inName);
        std::string getName();
        void setCountry(std::string inCountry);
        std::string getCountry();
        void setCity(std::string inCity);
        std::string getCity();
        void setAddress(std::string inAddress);
        std::string getAddress();
        void setStars(int inStars);
        int getStars();
        void setContactPerson(std::string inContactPerson);
        std::string getContactPerson();
        void setHotelNumber(int inHotelNumber);
        int getHotelNumber();
        bool getIsActive();
    private:
        std::string mName;
        std::string mCountry;
        std::string mCity;
        std::string mAddress;
        int mStars;
        std::string mContactPerson;
        int mHotelNumber;
        bool fActive;
    };
}