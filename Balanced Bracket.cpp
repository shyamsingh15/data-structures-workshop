/* AUTHOR:: ABHAY VERMA 
github:: github.com/abhay112 */

#include<bits/stdc++.h>
using namespace std;

int main() {
    char problem[100000];
    cin.getline(problem, 100000);
    stack <char> s;
    int i,n;

    for(i=0; i<strlen(problem);i++)
    {
        if(problem[i]=='{'|| problem[i]=='('|| problem[i]=='[')
        {
           s.push(problem[i]);

        }
        else if(problem[i]=='}'||problem[i]==')'|| problem[i]==']')
        {
            char ch=problem[i];
            char ch1;
            if(!s.empty()){
             ch1 = s.top();
            }
            if(ch=='}')
            {
                if(ch1=='{')
                {
                    s.pop();
                }
                else
                {
                    cout<<"false";
                    return 0;
                }
            }
            else if(ch==']')
            {
                if(ch1=='[')
                s.pop();
                else
                  {
                    cout<<"false";
                    return 0;
                  }
            }
            else if(ch==')')
            {
                if(ch1=='(')
                s.pop();
                else
                    {
                    cout<<"false";
                    return 0;
                  }
            }

        }


    }
    if(s.empty())
    {
        cout<<"YES";

    }
    else
    {
        cout<<"NO";

         }

}
