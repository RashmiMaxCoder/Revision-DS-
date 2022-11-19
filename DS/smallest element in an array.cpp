// Largest element in an array

// take array
//  max_ <= smallestNumberInIntegerDomain
// loop from 0 to the size of array
// if max < array element
// max <- array element
// 

#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

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


int main()
{
    vector<int> vec = {3 , 5 , 6 , 7 , -67};

    cout << fun(vec) << endl;
    
}
