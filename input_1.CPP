#include "iostream"
#include <string>
using namespace std;

int main(){
    string my_color;
    printf("\nEnter your favourite color : ");
    getline(cin,my_color);
    cout<<"Hey! "<<my_color<<" is my favourite too..";
    return 0;
}