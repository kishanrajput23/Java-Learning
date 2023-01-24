#include <stdio.h>
#include<iostream>
using namespace std;


main ()
{
  int a;
  cout << "enter the no. of rows: ";
  cin >> a;
  cout << "enter the no. of columns: ";
  int b;
  cin >> b;
  int s[a][b];
  int i, j;
  cout << "enter the elements of matrix: ";
  //input
  for (i = 0; i < a; i++)
    {
      for (j = 0; j < b; j++)
	{

	  cin >> s[i][j];
	}
    }

  //print
  cout << "entered matrix is:\n";
  for (i = 0; i < a; i++)
    {
      for (j = 0; j < b; j++)
	{
	  cout << " " << s[i][j];
	}
      cout << endl;
    }
  cout <<
    "Do you want to increase the size of matrix\nif yes type 'y' else type 'n': ";
  char c;
  cin >> c;
  if (c == 'y')
    {
      int m;
      cout << "enter the no. of rows to be added: ";
      cin >> m;
      int n;
      cout << "enter the no. of columns to be added: ";
      cin >> n;
      int S1[a + m][b + n];
      int i, j;
      //input
      for (i = 0; i < a + m; i++)
	{
	  for (j = 0; j < b + n; j++)
	    {


	      if (i >= a || j >= b)
		{
		  S1[i][j] = 0;
		}
	      else
		{
		  S1[i][j] = s[i][j];
		}
	    }
	}

      //print
      cout << "New matrix is:\n";
      for (i = 0; i < a + m; i++)
	{
	  for (j = 0; j < b + n; j++)
	    {
	      cout << " " << S1[i][j];
	    }
	  cout << endl;
	}

    }

}
