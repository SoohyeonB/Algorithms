#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int a, b, c;
    
    cin >> a >> b>>c;
    
    int result = a*b*c; //17037300
    int numbers[10]={};
    
    while(result>0){
        numbers[result%10]++;
        result/=10;
    }
    
    for(int i=0; i<10; i++)
        cout << numbers[i] <<'\n';

    

    return 0;
}