#include <iostream>
#include <string>

using namespace std;
int main ()
{int DayInMonth;
  int DayofWeek=1;

 string divison="-----------------------------------------------------";
 cout<<"\t\t\t*Calendar 2018*"<<endl;

  for(int i=1;i<=12;i++)
  {
  switch(i)
  {
    case 1:
    cout<<"\n\t\t\t\tJanuary"<<endl;
    DayInMonth=31;
    break;
    case 2:
    cout<<"\n"<<divison<<endl;
    cout<<"\n\n\t\t\t\tFebruary"<<endl;
    DayInMonth=28;
    break;
    case 3:
    cout<<"\n"<<divison<<endl;
    cout<<"\n\n\n\t\t\t\tMarch"<<endl;
    DayInMonth=31;
    break;
    case 4:
    cout<<"\n"<<divison<<endl;
    cout<<"\n\n\t\t\t\tApril"<<endl;
    DayInMonth=30;
    break;
    case 5:
    cout<<"\n"<<divison<<endl;
    cout<<"\n\n\t\t\t\tMay"<<endl;
    DayInMonth=31;
    break;
    case 6:
    cout<<"\n"<<divison<<endl;
    cout<<"\n\n\t\t\t\tJune"<<endl;
    DayInMonth=30;
    break;
    case 7:
    cout<<"\n"<<divison<<endl;
    cout<<"\n\n\t\t\t\tJuly"<<endl;
    DayInMonth=31;
    break;
    case 8:
    cout<<"\n"<<divison<<endl;
    cout<<"\n\n\t\t\t\tAugust"<<endl;
    DayInMonth=31;
    break;
    case 9:
    cout<<"\n"<<divison<<endl;
    cout<<"\n\n\t\t\t\tSeptember"<<endl;
    DayInMonth=30;
    break;
    case 10:
    cout<<"\n"<<divison<<endl;
    cout<<"\n\n\t\t\t\tOctober"<<endl;
    DayInMonth=31;
    break;
    case 11:
    cout<<"\n"<<divison<<endl;
    cout<<"\n\n\t\t\t\tNovember"<<endl;
    DayInMonth=30;
    break;
    case 12:
    cout<<"\n"<<divison<<endl;
    cout<<"\n\n\t\t\t\tDecember"<<endl;
    DayInMonth=31;
    break;
}
cout<<"\nMo \tTu \tWe \tTh \tFr \tSa \tSu"<<endl;
for(int k=1;k<DayofWeek;k++)
{
  cout<<"\t";
}

for(int j=1;j<=DayInMonth;j++)
{ cout<<j<<"\t";
  if(DayofWeek%7==0)
  {
   cout<<endl;
   DayofWeek=0;

 }
 DayofWeek++;

}
}

system("pause");

}
