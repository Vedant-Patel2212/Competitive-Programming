#include<algorithm>
#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(){
    string user_name;
    cin >> user_name;
    set<char> s1(user_name.begin() , user_name.end());
    if(s1.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}