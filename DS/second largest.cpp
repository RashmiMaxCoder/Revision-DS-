// second lagest element in an array 

// i will be finding the largest element in an array that exist
// i will convert it into the smallest number that exist in the curent domain
// i will find the lagest number in an array again

#include<bits/stdc++.h>


using namespace std;




int func(vector<int> &vec)
{
    int lar = *max_element(vec.begin(), vec.end());

    for(int i = 0; i < vec.size(); ++i)
    {
        //O(N)
        if(vec[i] == lar)
        vec[i] = INT_MIN;
    }

    return *max_element(vec.begin(), vec.end());
}


int main()
{
    vector<int> vec = {5 , 3 ,8 , 0 , -22};

    cout << func(vec) << endl;

}
