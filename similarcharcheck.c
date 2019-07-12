#include<iostream>
int main ()
{
  int n;				//Length of String
  int a[10000];			//Input for Query
  int q;				//NO. of queries
  std::cin>>n;
  char ch[n];			//To store the InputString
  for (int i = 1; i <= n; i++)
    {
      std::cin>>ch[i];
    }
  std::cin>> q;
  for (int j = 1; j <= q; j++)
    {
      std::cin>> a[j];
    }
  for (int i = 1; i <= q; i++)
    {
        int count=0;
      for (int j = 1; j < a[i]; j++)
	{
	  if (ch[j] == ch[a[i]])
	    {
	      count = count + 1;
	    }
	}
      std::cout<<count<<"\n";
    }
  return 0;
}
