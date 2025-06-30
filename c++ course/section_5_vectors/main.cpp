#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <double> high_temp {103.2,23,234.1,22.3,2223.2,323.45};
    cout <<"1st highest temp: "<<high_temp[4]<<endl;
    cout<<"2nd highest temp: "<<high_temp[5]<<endl;
    cout<<"3rd highest temp: "<<high_temp[2]<<endl;
    cout<<"4th highest temp: " <<high_temp[0]<<endl;
    cout<<"5th highest temp: "<<high_temp[1]<<endl;
    return 0;

}