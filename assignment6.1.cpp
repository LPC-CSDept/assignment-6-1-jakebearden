// lab 6-1

#include <iostream>
using  namespace std;

int inputvalid(int,int);
int getlist(int,int);

int main()
{
    int begin, end;
    int res;

    
    cout << "Enter inputs" << endl;
    cin >> begin >> end;

    res = inputvalid(begin,end);
    if (!res)
        exit(0);
    getlist(begin,end);

}

int inputvalid(int begin, int end)
{
    if ((begin > end) or (begin < 0) or (end = 0))
            return 0;
    else
            return 1;
}

