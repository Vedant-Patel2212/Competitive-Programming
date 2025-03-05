#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main(){

    set<int> v;
    for(int i=0; i<4; i++){
        int temp;
        cin>>temp;
        v.insert(temp);
    }
    cout<<4-v.size()<<endl;
    return 0;
}