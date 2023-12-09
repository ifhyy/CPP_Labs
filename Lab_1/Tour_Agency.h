// Tour_Agency.h
#include <iostream>
namespace Records {
    const int kDefaultStartingSalary = 30000;
    class Hotel
    {
    public:
        Hotel();
        void display(); // outputs employee info to the console
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
        void setHotelNumber(int inEmployeeNumber);
        int getHotelNumber();
    private:
        std::string mName;
        std::string mCountry;
        std::string mCity;
        std::string mAddress;
        int mStars;
        std::string mContactPerson;
        int mHotelNumber;
    };
}