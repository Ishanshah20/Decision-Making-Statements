#include<iostream>
using namespace std;
int main()
{
    char v;
    cout<<"Enter the alphabet: ";
    cin>>v;

    if(v == 'a'|| v =='e'||v == 'i'||v=='o'||v=='u'||v=='A'||v=='E'||v=='I'||v=='O'||v=='U')
    {
        cout<<"It is a vowel.";
    }
    else
    {
        cout<<"It is a consonant.";
    }
}
