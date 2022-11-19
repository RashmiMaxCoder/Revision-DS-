#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec(5,9);//templates

    for(auto it : vec)
    {
        cout << it << endl;
    }
    cout << endl;

    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << endl;    

    cout << endl;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    cout << *(vec.begin() + 3) ;
}
