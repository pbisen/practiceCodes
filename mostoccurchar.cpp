#include<iostream>
#include<string>
#include<climits>

using namespace std;

int main(){
    string s;

    getline(cin, s);

    //only counting lowercase alphabets

    int occur[26];

    int length = s.length();

    for(int i = 0; i < 26; i++){occur[i] = 0;}
    
    for(int i = 0; i < length; i++){
        if(s[i] >= 97 && s[i] <= 122){
            occur[s[i] - 'a']++;
        }
    }

    int maxIndex;
    int maxVal = INT_MIN;


    for(int i = 0; i < 26; i++){
        if(maxVal < occur[i]){
            maxIndex = i;
            maxVal = occur[i];
        }
    }

    cout<<(char)(maxIndex + 'a') << "\t" << maxVal<<endl;
    

}
