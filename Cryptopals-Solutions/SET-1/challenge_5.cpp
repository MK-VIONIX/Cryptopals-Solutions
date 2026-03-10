#include <bits/stdc++.h>
using namespace std;

vector<unsigned char> hex_to_bytes(string s){

    vector<unsigned char> bytes;

    for(int i=0;i<s.size();i+=2){
        string part = s.substr(i,2);
        unsigned char value = stoi(part,0,16);
        bytes.push_back(value);
    }

    return bytes;
}

string bytes_to_hex(const vector<unsigned char>& bytes){

    string hex_table = "0123456789abcdef";
    string result;

    for(unsigned char byte : bytes){

        int high = byte >> 4;
        int low  = byte & 15;

        result += hex_table[high];
        result += hex_table[low];
    }

    return result;
}

int main(){
	freopen("challenge_5.txt","r",stdin);  
   
    string line;
    string key="ICE";
    vector <unsigned char> bytes;


    int idx =0  ;
    string ans;
    string text;

    while(getline(cin,line)){
    text += line;
    if(!cin.eof()) text += '\n';
}
    
    for (int i = 0; i < text.size(); ++i)
    {
       bytes.push_back( text[i]^key[idx%3]);
       idx++;
    }
    cout<<bytes_to_hex(bytes)<<endl;
    bytes.clear();
}



    
   
     