class Solution {
   public:
    string encode(vector<string>& strs) {
        string res;

        for (const string& word : strs) {
            res += to_string(word.size()) + '#' + word;
        }

        return res;
    }

    vector<string> decode(string msg) {
        vector<string> res;

        int i = 0;


        while (i < msg.size()) {
            int delim = i;

            while (msg[delim] != '#') {
                ++delim;
            }

            int len = stoi(msg.substr(i, delim - i));
            delim++; 
            res.push_back(msg.substr(delim, len));
            i = delim + len;
        }

        return res;
    }
};
