#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


void solve(){
    int n;
    string cards;

    cin>>n;
    cin>>cards;

    int nums = n/11;
    int eight = 0;
    for(int i= 0; i<n; i++){
        if(cards[i] == '8'){
            eight++;
        }
    }

    cout<< min(nums, eight) <<endl;
}

int main(){
    solve();


    return 0;
}
