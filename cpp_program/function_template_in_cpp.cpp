#include <iostream>
using namespace std;

template <typename T>
void func_swap(T &arg1, T &arg2)
{
  T temp;
  temp = arg1;
  arg1 = arg2;
  arg2 = temp;
}

int main()
{
  cout<<"Swapping DATA using function template"<<endl;
  int num1, num2;
  char ch1, ch2;
  float f1, f2;
  
  cout<<"\nEnter num1 & num2: ";
  cin>>num1>>num2;
  
  cout<<"Enter two float values: ";
  cin>>f1>>f2;
  
  cout<<"Enter two characters: ";
  cin>>ch1>>ch2;
  
  cout << "\nOriginal data:\n";
  cout << "num1 = " << num1 << "\tnum2 = " << num2<<endl;
  cout << "f1 = " << f1 << "\tf2 = " << f2<<endl;
  cout << "ch1 = " << ch1 << "\t\tch2 = " << ch2<<endl;
  
  func_swap(num1, num2);
  func_swap(f1, f2);
  func_swap(ch1, ch2);
  
  cout << "\n\nData after swapping\n";
  cout << "num1 = " << num1 << "\tnum2 = " << num2<<endl;
  cout << "d1 = " << f1 << "\td2 = " << f2 <<endl;
  cout << "ch1 = " << ch1 << "\t\tch2 = " << ch2<<endl;
  
  return 0;
}
