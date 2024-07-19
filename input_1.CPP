#include "iostream"
#include <string>
using namespace std;

int main(){
    string first_name, last_name;
    printf("\nEnter first_name : ");
    getline(cin,first_name);
    printf("\nEnter last name : ");
    getline(cin,last_name);
    cout<<"Hey! "<<first_name<<" "<<last_name;
    return 0;
}