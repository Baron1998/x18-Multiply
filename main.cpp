// author : Abdullah Baron

#include<vector>
#include<iostream>


using namespace std;

int main()
{
 vector <vector <int> > multi;
 vector <int> n;
 multi.resize(11);



 n.push_back(1);
 n.push_back(2);
 n.push_back(3);
 n.push_back(4);
 n.push_back(5);
 n.push_back(6);
 n.push_back(7);
 n.push_back(8);
 n.push_back(9);
 n.push_back(10);
 n.push_back(11);
 n.push_back(12);
 multi.push_back(n);
 n.clear();

 n.push_back(1);
 n.push_back(2);
 n.push_back(3);
 n.push_back(4);
 n.push_back(5);
 n.push_back(6);
 n.push_back(7);
 n.push_back(8);
 n.push_back(9);
 n.push_back(10);
 n.push_back(11);
 n.push_back(12);

 multi.push_back(n);
 n.clear();

    for(int r=1; r<multi.size();r++)
    {
        multi[r].resize(13);
        for(int c=1; c< multi[r].size(); c++)
        {

          multi[r][c] = r*c;

          cout<< multi[r][c] <<" ";
       
        
        }
        cout<<endl;
    }


return 0;
}
