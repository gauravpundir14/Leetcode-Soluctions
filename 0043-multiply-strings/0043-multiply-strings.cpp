class Solution {
public:
    string multiply(string num1, string num2) {
        int m = num1.size();
        int n = num2.size();
        vector<int> product(m + n, 0);  // Store the intermediate product
        
        // Perform the multiplication digit by digit
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                int p1 = i + j;  // Current position for the first digit
                int p2 = i + j + 1;  // Current position for the second digit
                int mul = (num1[i] - '0') * (num2[j] - '0');  // Compute the product
                
                // Add the product to the current positions
                int sum = mul + product[p2];
                product[p2] = sum % 10;
                product[p1] += sum / 10;
            }
        }
        
        // Remove leading zeros
        int i = 0;
        while (i < product.size() && product[i] == 0) {
            i++;
        }
        
        // Construct the final result as a string
        string result = "";
        for (; i < product.size(); i++) {
            result += to_string(product[i]);
        }
        
        return result.empty() ? "0" : result;
    }
};

