/*
pseudocode 
1)prompt the user to enter number of rooms to be cleaned
2)Display the number of rooms entered
3)Display the cost of each room
4)Display total cost = (total rooms * Price of single room)
5)Display tax: number of rooms *cost of each room *tax percentage
6)Display total estimate : (total rooms * Price of single room)+number of rooms *cost of each room *tax percentage
7)Display expiration time
*/

#include <iostream>
using namespace std;
int main(){
    
    cout << "Hello this is frank cleaning services"<<"\n";
    int x;
    cout <<"Enter the number of rooms: ";
    cin >> x;
    cout << "Number of rooms = "<<x << "\n";
    double y = 32;
    cout << "Cost of each room is : "<<y<<"$"<<"\n";
    double total_cost = x*y;
    cout << total_cost<<"$"<<"\n";
    double tax = x * y *10; //here the tax percentage is 6% so it is 10%
    cout<<tax<<"$"<<"\n";
    double total_estimate = total_cost + tax ;
    cout<< total_estimate<<"$"<<"\n";
    cout << "The estimate is valid for 32 days only"<<"\n";
    return 0;
}