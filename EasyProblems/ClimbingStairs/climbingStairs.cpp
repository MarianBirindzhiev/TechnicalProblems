#include <iostream>
#include <string_view>

//You are climbing a staircase. It takes n steps to reach the top.
//Each time you can either climb 1 or 2 steps.In how many distinct ways can you climb to the top ?

int climbStairs(int n) {
    int arr[46];
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}

int main()
{
    std::cout << "Hello World!\n";
    
}
