#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct let_am
{
    char letter;
    int amount;
} p[100];

string text;
bool check(char letter, int i)
{
    for (int j = 0; j <= i; j++)
    {
        if (text[i] == p[j].letter)
        {
            p[j].amount++;
            return true;
        }
    }
    return false;
}
int main()
{ cout<<"Enter symbols:"<<endl;
  cin>>text;
int i;
/*char left='(';
char right=')';*/
    for (i=0; i < text.size(); i++)
    {
        if (check(text[i], i) == false)
        {
            p[i].amount = 1;
            p[i].letter = text[i];
        }
    }
    cout<<"Number of characters in the string:"<<endl;
    for (int j = 0; j<=i; j++)
    {
/*    if(p[j].letter==left || p[j].letter==right)
    {*/
        if (p[j].amount != 0)
            cout << p[j].letter << " = " << p[j].amount << endl;
    //}
  }
  if(p[0].amount==p[1].amount)
  cout<<"true"<<endl;
  else
  cout<<"false"<<endl;
  system("pause");
}
