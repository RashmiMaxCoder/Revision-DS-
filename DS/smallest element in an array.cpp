// Largest element in an array

// take array
//  max_ <= smallestNumberInIntegerDomain
// loop from 0 to the size of array
// if max < array element
// max <- array element
// 

#include<bits/stdc++.h>
using namespace std;

namespace normal
{
    int fun(vector<int> &vec)
    {
    int max_ = INT_MIN; //----- O(1)

    for(int i = 0; i < vec.size(); ++i)
    {
            if(max_ < vec[i])
            max_ = vec[i]; //---- O(n)
    }

    return max_; //---O(1)
    }
    //o(N)
}

namespace using_stl
{
    int fun(vector<int> &vec)
    {
        return *max_element(vec.begin(),vec.end());
    }
    //o(N)

}

int main()
{
    vector<int> vec = {3 , 5 , 6 , 7 , -67};

    cout << normal::fun(vec) << endl;
    cout << using_stl::fun(vec) << endl;
    
}
