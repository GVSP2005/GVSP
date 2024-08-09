#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <string> v;
    vector <string> w;
    vector <int> vpm,wpm;
    if(n==1){
        cout<<"()"<<endl;
    }
    else{
        v.push_back("("),
        vpm.push_back(1),
        w.push_back("(("),
        w.push_back("()");
        wpm.push_back(2),wpm.push_back(1);
        for(int i=1;i<n;i++){
            v.clear(),vpm.clear();
            int wlen=w.size();
            for(int j=0;j<w.size();j++){
                // adding (+) "("
                if(wpm[j]<n)v.push_back(w[j]+'('),vpm.push_back(wpm[j]+1);
                //adding (_) ")"
                if(wpm[j]>i*2-wpm[j])v.push_back(w[j]+')'),vpm.push_back(wpm[j]);
            }
            w.clear(),wpm.clear();
            //cout<<"vector v"<<endl;
            
            int vlen=v.size();
            for(int j=0;j<vlen;j++){
                
                if(vpm[j]<n)w.push_back(v[j]+'('),wpm.push_back(vpm[j]+1);
                if(i*2+1-vpm[j]<vpm[j])w.push_back(v[j]+')'),wpm.push_back(vpm[j]);
            }

        }
        int wlen=w.size();
        cout<<"[";
        for(int i=0;i<wlen;i++){
            if(i!=0)cout<<",";
            cout<<"\""<<w[i]<<"\"";
            
        }
        cout<<"]"<<endl;
    }
}