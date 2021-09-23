#include <iostream>
using namespace std;
void swapPoi(int *a, int *b){
    // USING POINTERS //
    *a = *a + *b;  // swap a
    *b = *a - *b;  // swap b 
    *a = *a - *b; // swap back to a
    }
void swapRef(int &c, int &d){
    // USING REFRENCES //
    int temp = c; // set reference temp to c
    c = d; // swap c and d
    d = temp; // swap d and temp
}
int main(){
    int a, b, c, d;
    std::cout << "Type a number: "; // get input 
    std::cin >> a; // store answer 
    std::cout << "Type a number: "; // get input 
    std::cin >> b; // store answer 
    cout << "Before swapping." << "\n";  // output before swap
    cout << "a = " << a << ", b = " << b << "\n"; // output 
    swapPoi(&a,&b);
    cout << "\nAfter swapping with pointers." << "\n"; // output after swap
    cout << "a = " << a << ", b = " << b << "\n";
     std::cout << "\nType another number: "; // get input 
    std::cin >> c; // store answer 
    std::cout << "Type another number: "; // get input 
    std::cin >> d; // store answer 
    cout << "Before swapping." << "\n";  // output before swap
    cout << "c = " << c << ", d = " << d << "\n"; // output 
    swapRef(c,d);
    cout << "\nAfter swapping with refrences." << "\n"; // output after swap
    cout << "c = " << c << ", d = " << d << "\n";
    return 0;
}
