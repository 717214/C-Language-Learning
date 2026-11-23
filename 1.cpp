#include"iostream"
using namespace std;
#include <string>
int main()
{ 
   int n;
   cin>>n;
   string result=(n%2==0)?"偶数":"奇数";
   cout<<result<<endl;
    return 0;
    system("pause");
}