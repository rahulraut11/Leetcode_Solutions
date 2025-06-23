class Solution
{
public:
    bool ispall(long long x, int k)
    {
        vector<int> digits;
        while (x > 0)
        {
            digits.push_back(x % k);
            x = x / k;
        }
        int i = 0;
        int j = digits.size() - 1;
        while (i < j)
        {
            if (digits[i++] != digits[j--])
                return false;
        }
        return true;
    }
    long long kMirror(int k, int n)
    {
        vector<long long> found;
        for (int len = 1; found.size() < n; len++)
        {
            int half = (len + 1) / 2;
            int start = half == 1 ? 1 : (int)pow(10, half - 1);
            int end = (int)pow(10, half) - 1;
            for (int i = start; i <= end && found.size() < n; i++)
            {
                string s = to_string(i);
                string es = s;
                if (len % 2)
                    es.pop_back();
                reverse(es.begin(), es.end());
                long long pall = stoll(s + es);
                if (ispall(pall, k))
                    found.push_back(pall);
            }
        }
        long long ans = 0;
        for (auto it : found)
        {
            ans += it;
        }
        return ans;
    }
};