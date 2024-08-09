#include <bits/stdc++.h>
using namespace std;
int main(){
    bitset <8> bin_ns(12);
    bitset <8> bin_sn("1001"); // in the bracket we can give either string or number it converts to another data type
    // called bitset
    //after we can do bin_sn or bin_ns.to_string() to convert into string or .to_ulong() to convert into number.
    cout<<bin_ns<<" ,"<<bin_sn<<endl;
}