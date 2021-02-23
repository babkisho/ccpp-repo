#include <iostream>
using std::cout;
using std::cin;
using std::string;

// int count_vowels(string);

int count_vowels(string s)
{
  int count = 0,i=0;

  while (s[i] != '\0')
  {
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
      count++;
    else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
      count++;
    i++;
  }

  return count;
}

int main()
{
  string str;
  int c;
  getline(cin, str);

  cout << count_vowels(str); ;

  return 0;
}
