// Given an integer number n, return the difference between the product of its digits and the sum of its digits.

class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int sum = 0;
        int prod = 1;
        while (n != 0)
        {
            int digit = n % 10;
            prod = prod * digit;
            sum = sum + digit;

            n = n / 10;
        }
        int answer = prod - sum;
        return answer;
    }
};
