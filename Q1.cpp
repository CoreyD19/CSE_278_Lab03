#include <iostream>
#include <string>
#include <iomanip>
unsigned int digit; // declare variables 
unsigned int num;
unsigned int n;
std::string userString;

int getLetter(const std::string& str){
    unsigned int length = str.size();
    unsigned int counter = 0;
    for(int i=0; i<length; i++){
        char c = str.at(i);
        if(int(c) >= 65 && int(c) <= 90){ // check for uppercase letter
            counter++;
        }
        else if(int(c) >= 97 && int(c) <= 122){ // check for lowercase letter
            counter++;
        }
    }
    return counter; // return num of letters 
}
int getDigit(const std::string& str){
    unsigned int length = str.size();
    unsigned int counter = 0; // declare variables 
    for(int i=0; i<length; i++){
        char c = str.at(i);
        if(int(c) >= 48 && int(c) <= 57){ // check if digit
            counter++;
    }
    }
    return counter; // return num of digits

}
int getNum(const std::string& str){
    unsigned int length = str.size();
    unsigned int counter = 0;
    for(int i=0; i<length; i++){
        char c = str.at(i); // declare two chars
        char d = str.at(i+1);
        if(int(c) >= 48 && int(c) <= 57){  // check if two chars in a row are digits
            if(int(d) >= 48 && int(d) <= 57){
                i++;
                }
                
 counter++;
                
    }
    else{
        continue;
    }
    }
    return counter;

}
bool contain(const std::string& str){
    
   unsigned int length = str.size();
    unsigned int counter = 0;
    if(length <5){ // if length is less than 5 its automatically false
        return false;
    }
    for(int i=0; i<length; i++){
        char c = str.at(i);   // check for m-i-a-m-i
        char d = str.at(i+1);
        char e = str.at(i+2);
        char f = str.at(i+3);
        char g = str.at(i+4);
        if(int(c)==77 || int(c)==109 &&
        int(d)==73 || int(d)==105 &&
        int(e)==65 || int(e)==97 &&
        int(f)==77 || int(f)==109 &&
        int(g)==73 || int(g)==105){
            return true;
        }
    
    else{
        continue; // move along string 
    }

        return false; // if not found return false 
    }
    }
void firstThree(const std::string& str){
unsigned int length = str.size(); // declare variables 
    unsigned int counterLet = 0;
    for(int i=0; i<length; i++){
        char c = str.at(i); // set c 
        if(int(c) >= 65 && int(c) <= 90){ // check if c is an uppercase letter
            counterLet++; // increase counter 
        }
        else if(int(c) >= 97 && int(c) <= 122){ // check if c is a lowercase letter
            counterLet++; // increase counter
        }
    }
    unsigned int counterDig = 0; // declare variables
    for(int i=0; i<length; i++){
        char c = str.at(i); // set c 
        if(int(c) >= 48 && int(c) <= 57){ // check if c is a digit
            counterDig++; // increase counter
    }
    }
    unsigned int counterNum = 0;  // Declare variables
    for(int i=0; i<length; i++){
        char c = str.at(i); // set i 
        char d = str.at(i+1); // set i+1
        if(int(c) >= 48 && int(c) <= 57){ // check if one is a digit 
            if(int(d) >= 48 && int(d) <= 57){ // check if next is a digit 
                i++;
                }
                
 counterNum++; // increase counter
        }
    }
     std::cout << "The number of letters is: " << counterLet << "\n"; // print letters 
     std::cout << "The number of digits is: " << counterDig << "\n"; // print digits 
     std::cout << "The number of numbers is: " << counterNum << "\n"; // print numbers 
}
void toUp(const std::string& str){
    unsigned int length = str.size(); // declare variables 
    char result[length];
    for(int i=0; i<length; i++){
        result[i] = str.at(i); // convert string to array 
    }
      for(int i=0; i<length; i++){
        char c = result[i]; // set c to value at i 
     if(int(c) >= 97 && int(c) <= 122){ // check if lowercase
            c-=32; // change lowercase to uppercase
        }
    
        result[i]=c; // if not lowercase keep as is 
   
        
    }
    std::string s = "";
    for (int i = 0; i < length; i++) { // convert array back to string 
        s = s + result[i];
    }
    std::cout << "Your string in all uppercase: " << s << "\n"; // print uppercase

}
void toLow(const std::string& str){
    unsigned int length = str.size(); // declare variables 
    char result[length];
    for(int i=0; i<length; i++){
        result[i] = str.at(i); // convert string to array
    }
      for(int i=0; i<length; i++){
        char c = result[i]; // set char c to value at i
     if(int(c) >= 65 && int(c) <= 90){ // check if uppercase
            c+=32; // change value from uppercase to lowercase
        }
    
        result[i]=c; // if not keep as is
   
        
    }
    std::string s = "";
    for (int i = 0; i < length; i++) { // convert array back to string 
        s = s + result[i];
    }
    std::cout << "Your string in all lowercase: " << s << "\n"; // print lowercase string 

}
int main(int argc, char** argv){
 std::cout << "Type a string: "; // get input 
    std::cin >> userString; // store answer 
    std::cout << "The number of letters is: " << getLetter(userString) << "\n"; // call functions
    std::cout << "The number of digits is: " << getDigit(userString) << "\n"; // ^^
    std::cout << "The number of numbers is: " << getNum(userString) << "\n"; // ^^
    std::cout << "Your string has the word 'miami': " << std::boolalpha << contain(userString) << "\n"; // call function
    firstThree(userString); // call function
    std::cout << "Your string will be converted to all uppercase or lowercase. Enter 1 for uppercase, 2 for lowercase: "; // get input 
    std::cin >> n; // store answer 
    if(n==1){  // case one 
    toUp(userString);
    }
    else if(n==2){ // case two 
    toLow(userString);
    } 
    else{  // invalid input 
        std::cout << "Not a valid input" << "\n";
    }
    return 0;
}

