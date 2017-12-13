#include "person.h"
#include <string>

using namespace std;

void person::setName(std::string firstName, std::string lastName)
{
    first=firstName;
    last=lastName;
}
void person::setzodiacSign(std::string zodiacSgn)
{
    zodiac=zodiacSgn;
}
void person::setfavColor(std::string color)
{
    faveColor=color;
}
std::string person::displayName()
{
    string fullName;
    fullName.append(first);
    fullName.append(" ");
    fullName.append(last);
    return fullName;
}
std::string person::displayzodiacSign()
{
    return zodiac;
}
std::string person::displayfavColor()
{
    return faveColor;
}

