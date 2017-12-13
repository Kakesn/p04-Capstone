#include <iostream>
#include <string>
#include "person.h"
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    int month, day;
    char answer;
    char ans;
    person player;
    string zodiacSign;
    string favColor;
    string firstName, lastName;
    ofstream people;
    people.open("List.txt");
    
    do {
    cout<< "Would you like me to guess your favorite color? (type any character to continue and N for No)"<<endl;
    cin >> answer;
    cout <<endl;
    while(!((answer=='n') || (answer=='N'))){
    cout << "Enter your first and last name:" << endl;
    cin >> firstName >> lastName;
    player.setName(firstName, lastName);
    cout << "Hello, " <<player.displayName()<< " Enter your day of birth:" << endl;
    cin >> day;
    cout << "Enter your month of birth:" << endl;
    cin >> month;
    if ((day>= 20 && day<31 && month==1)||(day<=18 && day>=1 && month==2)){
    zodiacSign ="AQUARIUS";
    favColor = "Blue";
    }
    else if ((day>=19 && day<31 && month==2)||(day<=20 && day>=1 && month==3)){
    zodiacSign = "PISCES";
    favColor = "Aquamarine";
    }
    else if ((day>=21 && day>31 && month==3)||(day<=19 && day>=1 && month==4)){
    zodiacSign = "ARIES";
    favColor = "Red";
    }
    else if ((day>=20 && day<31 && month==4)||(day<=20 && day>=1 && month==5)){
    zodiacSign = "TAURUS";
    favColor = "Green";
    }
    else if ((day>=21 && day<31 && month==5)||(day<=20 && day>=1 && month==6)){
    zodiacSign = "GEMINI";
    favColor = "Yellow";
    }
    else if ((day>=21 && day<31 && month==6)||(day<=22 && day>=1 && month==7)){
    zodiacSign = "CANCER";
    favColor = "White";
    }
    else if ((day>=23 && day<31 && month==7)||(day<=22 && day>=1 && month==8)){
    zodiacSign = "LEO";
    favColor = "Gold";
    }
    else if ((day>=23 && day<31 && month==8)||(day<=22 && day>=1 && month==9)){
    zodiacSign = "VIRGO";
    favColor = "Grey";
    }
    else if ((day<=23 && day<31 && month==9)||(day<=22 && day>=1 && month==10)){
    zodiacSign = "LIBRA";
    favColor = "LightBlue";
    }
    else if ((day>=23 && day<31 && month==10)||(day<=21 && day>=1 && month==11)){
    zodiacSign = "SCORPIO";
    favColor = "DarkRed";
    }
    else if ((day>=22 && day<31 && month==11)||(day<=21 && day>=1 && month==12)){
    zodiacSign = "SAGITTARIUS";
    favColor = "Indigo";
    }
    else if ((day>=22 && day<31 && month==12)||(day<=19 && day>=1 && month==1)){
    zodiacSign = "CAPRICORN";
    favColor = "Brown";
    }
    else {
    cout <<"You have entered invalid input" <<endl;
    }
    cout << "Your zodiac sign is " <<zodiacSign<< " and your favorite color is "<<favColor<< endl;
    }
    cout<< "Would you like to go again? Y/N" <<endl;
    cin >> ans;
    }while(ans=='y' || ans=='Y');

return 0;
}
