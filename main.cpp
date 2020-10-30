#include <bits/stdc++.h>
using namespace std;
bool checkCAPTCHA(string &captcha,string &user_CAPTCHA)
{
    if(captcha==user_CAPTCHA)
        return true;
    else
        return false;

}

string generateCAPTCHA(int n){


    char *ch="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    string captcha="";
    while(n--){
            captcha=captcha+ch[rand()%62];


    }
return captcha;

}

int main()
{
    srand(time(NULL));

    int x;
    cout<<"Enter the length of CAPTCHA="<<endl;
    cin>>x;
    string captcha=generateCAPTCHA(x);
    cout<<captcha;
    string user_CAPTCHA;
    cout<<endl<<"Enter the above CAPTCHA"<<endl;
    cin>>user_CAPTCHA;
    if(checkCAPTCHA(captcha,user_CAPTCHA))
    {
        cout<<"CAPTCHA MATCHED";
    }
    else
    {
        cout<<"CAPTCHA not matched";

    }


    return 0;
}
