#include<iostream>
#include<stack>
#include <ctype.h>
#include<string>
using namespace std;
int main()
{
    char a;
    string ques;
    int temp=0,sum=0,checknum=0,num=0,ans=0,tmp=0;//num 计禬筁计,sum 计籔C.H.O,checknum絋粄琌计
    stack<int> storage;
    while(getline(cin,ques))
    {
        if(ques.size()==1&&ques[0]=='0')
            break;
        else
        {
            for(int i=0;i<ques.size();i++)
            {
                if (ques[i]=='(')
                    storage.push(-1);
                else if (ques[i]=='C'||ques[i]=='c')
                    storage.push(12);
                else if (ques[i]=='H'||ques[i]=='h')
                    storage.push(1);
                else if (ques[i]=='O'||ques[i]=='o')
                    storage.push(16);
                if (ques[i]>='0'&&ques[i]<='9')
                {
                    //num=num*10+(ques[i]-'0');
                    //cout<<num<<endl;
                    for(int j=i;j<ques.size();j++)
                    {
                        checknum=ques[j]-'0';
                        temp=j;
                        if(checknum>=0&&checknum<=9&&j!=ques.size()-1)
                            num=num*10+checknum;
                        else if(j==ques.size()-1)
                        {
                            num=num*10+checknum;
                            sum=storage.top()*num;
                            storage.pop();
                            storage.push(sum);
                            break;
                        }
                        else
                        {sum=storage.top()*num;
                        storage.pop();
                        storage.push(sum);
                        break;}
                    }
                    if(temp==ques.size()-1)
                        i=temp;
                    else
                        i=temp-1;
                    temp=0;
                    num=0;

                }
                else if (ques[i]==')')
                {
                    while(!storage.empty())
                    {
                        temp=storage.top();
                        storage.pop();
                        if(temp!=-1)
                        {
                            tmp+=temp;
                        }
                        else if (temp==-1)
                            break;
                    }

                    storage.push(tmp);
                    tmp=0;
                    temp=0;
                }
            }
            /*while(!storage.empty())
            {
                ans=storage.top();
                cout<<ans<<" ";
                storage.pop();
            }
            cout<<endl;*/
            while(!storage.empty())
            {
                ans+=storage.top();
                storage.pop();
            }
            cout<<ans<<endl;
            ans=0;
        }
    }
    return 0;
}

