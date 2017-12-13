#ifndef _PERSON_H_
#define _PERSON_H_
#include <string>

using namespace std;

class person
{
    private:
        std::string first;
        std::string last;
        std::string zodiac;
        std::string faveColor;
    public:
        void setName(std::string, std::string);
        std::string displayName();
        void setzodiacSign(std::string);
        std::string displayzodiacSign();
        void setfavColor(std::string);
        std::string displayfavColor();
        
};
#endif
