#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

void findMinMax(int n, int arr[]){

    vector<int> max, min; // declare vectors for maximums and minimums

    for(int i = 1; i < n - 1; i++) 
    { 
          
    if ((arr[i - 1] > arr[i]) && // check each number for minmum
        (arr[i] < arr[i + 1])) 
        min.push_back(i);  // if minmum add to min vector
         
    else if ((arr[i - 1] < arr[i]) && // check each number for maximum 
                (arr[i] > arr[i + 1])) 
        max.push_back(i); // if maximum add to max vector
    } 

    if (max.size() > 0) 
    { 
        std::cout << "\n" "Indexes of local maximums are : "; // print local maximums
        for(int a : max) 
        cout << a+1 << " "; // ignore boundary
    } 
    else
    std::cout << "There are no indexes of local maximums " << "\n"; // if no maximums
  
    if (min.size() > 0) 
    { 
        std::cout << "\n" "Indexes of local minimums are : "; 
        for(int a : min) 
        cout << a+1 << " "; // ignore boundary 
    } 
    else
    std::cout << "There are no indexes of local minimums " << "\n"; // if no minimums
} 


int main(){
    long userNum;
    int arr[15]; // declare array 
    for(int i=0; i<15; i++){
       std::cout << "Type a number: "<< "\n"; // prompt for user
       std::cin >> userNum; // store userNum
       arr[i]= userNum; // put num into array
    }
  int n = sizeof(arr) / sizeof(arr[0]); // declare size of arry 
  findMinMax(n,arr); // call function
   return 0; 
}


