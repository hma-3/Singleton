#include <iostream>
#include <string>

using namespace std;

class Government {
    Government() {}
    Government(const Government&) = delete;
    Government& operator=(const Government&) = delete;
    string countryName;
public:
    static Government& getInstance() {
        static Government instance;
        return instance;
    }

    const string& getCountryName() const {
        return countryName;
    }

    void setCountryName(const string& name) {
        countryName = name;
    } 
};

int main() {
    Government& government = Government::getInstance();

    government.setCountryName("Example Country");
    cout << "Country Name: " << government.getCountryName() << endl;

    return 0;
}