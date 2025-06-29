/* frank 
carpet cleaning serivces*/
/*
pseudocode 
1)prompt the user to enter number of rooms to be cleaned
2)Display the number of rooms entered
3)Display the cost of each room
4)Display total cost = (total rooms * Price of single room)
5)Display tax: number of rooms *cost of each room *tax percentage
6)Display total estimate : (total rooms * Price of single room)+number of rooms *cost of each room *tax percentage
7)Display expiration time
cost of small room 25$ 
cost of big rooms 30$
tax rate is 6%
estimate is valid only for 30 days
*/
#include <iostream>
using namespace std;
int main (){
    cout<<"Welcome to frank cleaning services"<<"\n";
    int x;
    cout<<"Enter the number of small rooms: ";
    cin >>x;
    int y;
    cout<<"Enter the number of big rooms: ";
    cin >> y;
    cout << x << " small rooms"<<"\n";
    cout << y << " Big rooms" <<"\n";
    int cost_single = 25;
    cout << "cost of small room : "<<cost_single<<"$"<<"\n";
    int cost_large = 30;
    cout <<"cost of big room: "<<cost_large<<"$"<<"\n";
    double total_rooms = (x+y);
    cout<<"total number of rooms :"<<total_rooms<<"\n";
    double cost_small_rooms = x*cost_single;
    cout<<"cost of small rooms is: "<<cost_small_rooms<<"$"<<"\n";
    double cost_large_rooms = y*cost_large;
    cout<<"cost of large rooms is: "<<cost_large_rooms<<"$"<<"\n";
    double total_cost = cost_small_rooms+cost_large_rooms;
    cout <<"total cost is : "<< total_cost<<"$" <<"\n";
    double tax_rate =6;
    cout <<"the tax rate is : "<< tax_rate<<"%" <<"\n";
    double tax_point = 0.06;
    double total_estimate = (total_rooms*55)+total_rooms*55*tax_point;
    cout <<"The total estimate is : "<<total_estimate<<"$" <<"\n";
    cout<<"The estimate is only valid for 30 days!"<<"\n";
    return 0;
}
    
