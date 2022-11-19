// Largest element in an array

// take array
//  max_ <= smallestNumberInIntegerDomain
// loop from 0 to the size of array
// if max < array element
// max <- array element
// 

#include<bits/stdc++.h>
using namespace std;

namespace naive
{
    int fun(vector<int> &vec)
    {
    int max_ = INT_MIN; //----- O(1)

    for(int i = 0; i < vec.size(); ++i)
    {
            for(int j = i; j < vec.size(); j++ )
            {
                if(vec[i] <= vec[j])
                {
                    int num = vec[j];
                    if(num > max_)
                    max_ = num;
                }
            }
    }

    return max_; //---O(1)
    }
    //o(N^2)
}

namespace little_better
{
    int fun(vector<int> &vec)
    {
        sort(vec.begin(), vec.end());//n logn 

        return vec[vec.size() - 1];
    }

}

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
    cout << little_better::fun(vec) << endl;
}
