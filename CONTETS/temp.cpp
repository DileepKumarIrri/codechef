#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> a(n);
    string out ="";
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = n - 1; i >= 0; i--) {
        string temp = a[i];
        string temp1 = temp.substr(temp.length() - 2);
        
        bool isFound = out.find(temp1) != string::npos;
        if (!isFound) {
            out += temp1+" ";
        }
    }
     stringstream ss(out);  
    string word;
    while (ss >> word) { // Extract word from the stream.
        cout << word;
    }
    cout<<"\n";
    return 0;
}
