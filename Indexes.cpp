#include <iostream> 
#include <unordered_map>
#include <vector>

using namespace std;
int main()
{
    vector<int> nums = {2,7,11,15};
    unordered_map<int, int> b;
    int target = 9;
    int mCompliment = 0;    
    for(int i = 0; i < nums.size(); i++)
    {
        mCompliment = target - nums[i];
        if(b.find(mCompliment) != b.end())
        {
            cout << "The indices are [ " << b[mCompliment] << " , " << i << "]";
            return 0;
        }
        b[nums[i]] = i;
    }
}

