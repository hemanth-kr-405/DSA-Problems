class Solution {
public:
    bool isValid(string s) {
        char stack[10000]; 
        int top = -1;

        int n = s.length();

        for(int i=0; i<n; i++){
            char c = s[i];
            if(c == '(' || c == '{' || c == '['){
                stack[++top] = c;
            }else{
                if(top == -1) return false;
                char pee = stack[top--];
                if(c == ')' && pee != '(' || c == '}' && pee != '{' || c == ']' && pee != '['){
                    return false;
                }
            }
        }
        return (top == -1);    
    }
};