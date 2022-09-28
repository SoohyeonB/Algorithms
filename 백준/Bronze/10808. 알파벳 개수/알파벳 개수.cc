#include <iostream>
#include <vector>

using namespace std;
const int SIZE = 26;

int main()
{
    string s;
    cin >> s;
    
    vector<int> alphabet(SIZE);
    
    for(auto c:s)
        alphabet[c-'a']++;
    
    for(int i=0 ; i<SIZE; i++)
        cout << alphabet[i] << '\n';
    

    return 0;
}