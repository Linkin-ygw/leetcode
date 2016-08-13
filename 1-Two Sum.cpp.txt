class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> res;
        vector<int> tmp(nums);
        sort(tmp.begin(), tmp.end());
        bool found = false;

        for (vector<int>::size_type i = 0; i < nums.size(); ++i)
        {
            if (binary_search(tmp.begin(), tmp.end(), target-nums[i]))
            {
                for (vector<int>::size_type j = 0; j < nums.size(); ++j)
                {
                    if ((nums[j] == (target - nums[i])) && (i != j))
                    {
                        res.push_back(i);
                        res.push_back(j);
                        found = true;
                        break;
                    }
                }
            }

            if (found)
            {
                break;
            }
        }

        return res;
    }
};