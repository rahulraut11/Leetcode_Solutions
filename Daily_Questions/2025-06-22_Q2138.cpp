class Solution
{
public:
    vector<string> divideString(string s, int k, char fill)
    {
        int n = s.size();
        vector<string> result;
        for (int i = 0; i < n; i += k)
        {
            result.push_back(s.substr(i, k));
        }
        result.back() += string(k - result.back().size(), fill);
        return result;
    }
};