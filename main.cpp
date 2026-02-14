//#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    int n, c;
    ifstream in("k2.in");
    ofstream out("k2.out");
    in >> c >> n;
    bool creste = false;
    int t = 2;
    int Max = 2;
    while(n > 1)
    {

        if(creste)
        {
            t++;
            if(Max < t)
            {
                Max = t;
                creste = false;
            }
        }
        else
        {
            t--;
            if(t <= 1)
                creste = true;
        }
        n--;

         //cout << t << " ";

    }
    if(c==1)
        out << Max;
    else if(c==2)
        out << t;
    return 0;
}
