#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void number (int*,int,int,int);
void show (int*,int);
void insertion (int*,int);
void selection (int*,int);
void bubble (int*,int);

int main()
{ srand((unsigned)time(NULL));
  int a;
  cout << "intput a number:";
  cin >> a;
  int* b;
  b=new int[a];
  number(b,a,1,100);
  cout << "no sort:";
  show(b,a);
  insertion(b,a);
  show(b,a);
  cout << endl;
  number(b,a,1,100);
  cout << "no sort:";
  show(b,a);
  selection(b,a);
  show(b,a);
  cout << endl;
  number(b,a,1,100);
  cout << "no sort:";
  show(b,a);
  bubble(b,a);
  show(b,a);
  delete [] b;
}
void number (int* a,int b,int c,int d )
{ for ( int i=0; i<b; ++i )
      { int x=rand()%(d-c-1)+c;
        bool flag=true;
        for ( int j=0 ; j<i ; ++j )
            { if  ( x == a[j] )
                  { flag=false;
                    break;
                  }
            }
        if   ( flag == true )
             { a[i]=x;
             }
        else { --i;
             }
     }
}
void show (int* a,int b)
{ for ( int i=0; i<b; ++i )
      { cout << a[i] << " ";
      }
    cout << endl;
}

void insertion(int* a,int b)
{ cout << "insertion:";
  for( int i=1; i<b; i++)
     { for( int j=i; j>0; j-- )
          { if   ( a[j]>a[j-1])
                 { swap(a[j],a[j-1]);
                 }
          }
     }
}

void selection (int* a,int b)
{ cout << "selection: ";
  for ( int i=0; i<b-1; ++i )
      { for ( int j=i+1; j<b; ++j )
            { if  ( a[j]<a[i] )
                  { swap(a[j],a[i]);
                  }
            }
      }
}

void bubble (int* a,int b)
{ cout << "bubble: ";
  for ( int i=0; i<b; ++i )
      { for ( int j=0; j<b-i; ++j )
            { if  ( a[j]>a[j-1] )
                  { swap(a[j],a[j-1]);
                  }
            }
     }
}




