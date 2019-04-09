#include <iostream>
using namespace std;


int add(int, int);

int main()
{
    int num1, num2, sum;
    cout<<"Enters two numbers to add: ";
    cin >> num1 >> num2;


    sum = add(num1, num2);
    cout << "Sum = " << sum;
    return 0;
}

int add(int a, int b)
{
    int add;
    add = a + b;

       return add;
}
#include <iostream>
using namespace std;

int checkPrimeNumber(int);

int main()
{
  int n;

  cout << "Enter a positive  integer: ";
  cin >> n;
  
  if(checkPrimeNumber(n) == 0)
    cout << n << " is a prime number.";
  else
    cout << n << " is not a prime number.";
  return 0;
}
int checkPrimeNumber(int n)
{
  bool flag = false;

  for(int i = 2; i <= n/2; ++i)
  {
      if(n%i == 0)
      {
          flag = true;
          break;
      }
  }
  return flag;
}
