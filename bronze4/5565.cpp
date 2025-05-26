#include<iostream>

int main(void)
{
  int price=0, n=0,sum=0;
  
  std::cin>>price;

  for(int i=0;i<9;i++)
  {
    std::cin>>n;
    sum+=n;
  }

  std::cout<<price-sum;

  return 0;
}