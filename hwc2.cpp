#include <iostream>
#include <string>
using namespace std;


int main() {
string str;
string rvstr;
char vowels[10]={'a', 'e', 'i', 'o', 'u','A','E','I','O','U'};


cout<<"read in a string:"<<"\n";
cin>>str;
int n = str.length();
for (int i = n-1; i>=0; i--){
    rvstr += str[i];
    }
cout<<"the backword of this string is:"<<rvstr<<"\n";
if (rvstr==str){
    cout<<"the backword and string are same"<<"\n";
}
else{
    cout<<"the backword and string are different"<<"\n";
}
for (int j = 0; j < n ; j++) {
    for (int k = 0; k < 10; k++) {
        if (str[j]==vowels[k]){
            str.erase(j,1);

        }

    }


    }

    cout<<"delete vowels:"<<str<<"\n";

    return 0;
}