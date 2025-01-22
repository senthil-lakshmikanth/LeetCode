// Online C++ compiler to run C++ program online

// Write a Java program to check whether one string is a rotaon of another. For
// example, If “JavaJ2eeStrutsHibernate” is a string then some rotated versions
// of this string are “StrutsHibernateJavaJ2ee”, “J2eeStrutsHibernateJava“,
// “HibernateJavaJ2eeStruts“. 

#include <iostream>
#include <string>

using namespace std;

bool isSubStr(string String, string Substr)
{
    int Substr_index=0, count=0, flag=0;
    
    for(int i=0; i<String.length(); i++)
        if(Substr[Substr_index]==String[i])
        {
            count++;
            if(count==Substr.length())
                flag=1;
            Substr_index++;
        }
        else
            if(Substr[0]==String[i])  // "tesst" , "st" case will fail if this condition is not there.
            {
                count=1;
                Substr_index=1;
            }
            else
            {
                count=0;
                Substr_index=0;
            }
    if(flag==1)
        cout<<Substr<<" is a substring"<<endl;
    else 
        cout<<Substr<<" is Not a subtring"<<endl;
    return 0;
}

int main() // Efficient Method !
{
    
    string s1="JavaJ2eeStrutsHibernate";
    string s2="StrutsHibernateJavaJ2ee";
    string s3="J2eeStrutsHibernateJava";
    string s4="HibernateJavaJ2eeStruts";
    
    string concatenated = s1+s1; // s1 = JavaJ2eeStrutsHibernateJavaJ2eeStrutsHibernate
    isSubStr(concatenated,s1);
    isSubStr(concatenated,s2);
    isSubStr(concatenated,s3);
    isSubStr(concatenated,s4);
    
    return 0;
}

int main() // Rotating the String to compare
{
    string s1="JavaJ2eeStrutsHibernate";
    string s2="StrutsHibernateJavaJ2ee";
    string s3="J2eeStrutsHibernateJava";
    string s4="HibernateJavaJ2eeStruts";
    
    while(s1!=s2) // can also use for() loop with condition s1.length();
    {
        // swap/rotate until s1 matches s2.
        char temp=s1[0];
        for(int i=0; i<s1.length()-1; i++)
        {
            s1[i]=s1[i+1];
        }
        s1[s1.length()-1]=temp;
    }
    
    cout<<s1;
}
