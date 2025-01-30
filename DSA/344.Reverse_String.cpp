// Solution: #1
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
    }
};

// Solution: #2
class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0, end = s.size() - 1;
        char tmp;
        
        do
        {
            tmp = s[start];
            s[start] = s[end];
            s[end] = tmp;

        }while(++start < --end);

    }
};

// Solution: #3
class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int start = 0, end = s.size() - 1;

        while(start < end){

            swap(s[start++], s[end--]);

        }
    }
};