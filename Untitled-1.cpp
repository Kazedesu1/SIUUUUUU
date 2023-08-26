#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "so luong sinh vien can quan ly la:";
    cin >> n;
    struct SV
    {
        int masv;
        string hoten,lop;
        float dtb;
    } *sv= new SV[n] , temp;
    for(int i=0;i<n;i++)
    {
        cout << endl << "nhap chi tiet cho sv thu"<<i+1<<".";
        cout << endl << "nhap vao ma sv:";
        cin >> sv[i].masv;
        cout << "nhap vao ho ten:";
        cin.ignore(); getline(cin,sv[i].hoten); 
        cout << "nhap vao lop:";
        cin.ignore(); getline(cin,sv[i].lop);
        cout << "nhap vao dtb:";
        cin >> sv[i].dtb;
    }
    for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
    {
        if(sv[i].dtb<sv[j].dtb)
        {
           temp  = sv[i];
           sv[i] = sv[j];
           sv[j] = temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << endl <<  endl << "chi tiet cho sv thu"<<i+1<<".";
        cout << endl << "ma sv:"<< sv[i].masv;
        cout << endl << "ho ten:"<< sv[i].hoten;
        cout << endl << "lop:"<< sv[i].lop;
        cout << endl << "dtb:"<< sv[i].dtb;
    }
    delete(sv);
    
    return 0;
}