#include<iostream>

int main(void)
{
    int n = 0, a = 0, b = 0, ao = 1, bo = 1;

    std::cin >> n >> a >> b;

    for (int i = 0; i < n; i++)
    {
        ao += a;
        bo += b;
        if (ao == bo)
        {
            --bo;
        }
        else if (ao < bo)
        {
            ao ^= bo;
            bo ^= ao;
            ao ^= bo;
        }
    }
    std::cout << ao<<' '<< bo;

    return 0;
}
