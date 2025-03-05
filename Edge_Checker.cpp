#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a , b;
    cin >> a >> b;
    if (a+1 == b || b == a-1)
    {
        cout<<"Yes";
    }
    else if(a == 10 && b == 1 || a == 1 && b == 10){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}