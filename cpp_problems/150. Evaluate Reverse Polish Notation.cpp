class Solution {
private:
    long doOperation(long first_operand, long second_operand, string operation){
        long answer;
        
        if (operation == "+"){
            answer = first_operand + second_operand;
        } else if (operation == "-"){
            answer = first_operand - second_operand;
        } else if (operation == "*"){
            answer = first_operand * second_operand;
        } else if (operation == "/"){
            answer = first_operand / second_operand;
        }
        return answer;
    }

public:
    long evalRPN(vector<string>& tokens) {
        set<string> valid_operators = {"+", "-", "*", "/"};
        vector<long> stack;
        long first_operand;
        long second_operand;
        long final_answer = -201;

        for (int i = 0; i < tokens.size(); i++){
            // if it's just a number
            string token_char = tokens[i];

            if (!valid_operators.count(token_char)){
                long number = stol(tokens[i]);
                stack.push_back(number);
            } else {
                second_operand = stack.back();
                stack.pop_back();
                first_operand = stack.back();
                stack.pop_back();
                final_answer = doOperation(first_operand, second_operand, tokens[i]);
                stack.push_back(final_answer);
            }
        }
        if (final_answer == -201){
            return stack[0];
        } else {
            return final_answer;
        }
    }
};
