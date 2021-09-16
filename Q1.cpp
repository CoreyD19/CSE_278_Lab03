#include <iostream>
#include <string>
unsigned int digit;
unsigned int num;
std::string userString;

int getLetter(const std::string& str){
    unsigned int length = str.size();
    unsigned int counter = 0;
    for(int i=0; i<length; i++){
        char c = str.at(i);
        if(int(c) >= 65 && int(c) <= 90){
            counter++;
        }
        else if(int(c) >= 97 && int(c) <= 122){
            counter++;
        }
    }
    return counter;
}
int getDigit(const std::string& str){
    unsigned int length = str.size();
    unsigned int counter = 0;
    for(int i=0; i<length; i++){
        char c = str.at(i);
        if(int(c) >= 48 && int(c) <= 57){
            counter++;
    }
    }
    return counter;

}
bool contain(const std::string& str){
    std::string s = "miami";
    if(str.find(s)){
        return true;
    }
    else{
        return false;
    }
}
int main(int argc, char** argv){
 std::cout << "Type a string: "; // get input 
    std::cin >> userString; // store answer 
    std::cout << "The number of letters is: " << getLetter(userString) << "\n";
    std::cout << "The number of digits is: " << getDigit(userString) << "\n";
    std::cout << "Your string has the word 'miami': " << contain(userString) << "\n";

    return 0;
}
