void generateParenthesis(int left, int right, vector<string>& res, string& s)
    {
        if (left == 0)
        {
            int i = right;
            while (i)
            {
                s.push_back(')');
                i--;
            }
            res.push_back(s);

            while (i < right)
            {
                s.pop_back();
                i++;
            }
            return;
        }

        s.push_back('(');
        generateParenthesis(left-1, right, res, s);
        s.pop_back();
        if (left != right)
        {
            s.push_back(')');
            generateParenthesis(left, right-1, res, s);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n)
    {
        vector<string> res;
        string str;

        generateParenthesis(n, n, res, str);

        return res;
    }