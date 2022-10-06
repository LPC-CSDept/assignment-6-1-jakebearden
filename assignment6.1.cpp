// lab 6-1

#include <iostream>
using  namespace std;

int inputvalid(int,int);
void getlist(int,int);

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

void getlist(int begin, int end)
{
    int i, j; 
    for (i = begin; i <= end; i++)
    {
        for (j = 2; j<= (i/2); i++)
        {
            if (i % j == 0)
            {
                break;
            }
            else if (j>(i/2))
            {
                cout << i << "is prime" << endl;
            }
        }
    }
}