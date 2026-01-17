class Solution {
public:
    bool isValid(string s) {
    // create stack vector
    vector<char> stack;

    // iterate through string
    for (int i = 0; i < s.length(); i++)
    {
        // add bracket to stack if opening bracket detected
        if (s[i] == '{' | s[i] == '(' | s[i] == '[')
        {
            stack.push_back(s[i]);  
        }
        else 
        {
            // check for empty stack before popping back
            if (stack.empty() == true)
            {
                return false;
            }

            // if brackets are not closed properly
            if (s[i] == '}' && stack.back() != '{' || s[i] == ')' && stack.back() != '(' || s[i] == ']' && stack.back() != '[')
            {
                return false;
            }

            // pop back of stack
            stack.pop_back();
        }
    }
    return stack.empty();  // returns whether the stack is empty (the input string has valid brackets)
    }
};
