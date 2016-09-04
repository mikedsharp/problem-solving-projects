#include <iostream>

using namespace std;

void charsToNumber();
void commaSeparatedNumbers();

int main()
{
    commaSeparatedNumbers();
    return 0;
}


void charsToNumber(){
    cout << "Enter a number with as many digits as you like" << endl;
    char digitChar = cin.get();
    int number = (digitChar - '0');
    digitChar = cin.get();

    while(digitChar != 10){
        number = number * 10 + (digitChar - '0');
        digitChar = cin.get();
    }

    cout << "Number entered: " << number << endl;
}

void commaSeparatedNumbers(){
    char digitChar;

    do{
            digitChar = cin.get();
            int number = (digitChar - '0');
            digitChar = cin.get();

            while(digitChar != 10 && digitChar != ','){
                number = number * 10 + (digitChar - '0');                digitChar = cin.get();
            }

            cout << "Number entered: " << number << endl;
    }while(digitChar != 10);


}
