// Online C++ compiler to run C++ program online

// Input  : num1 = “4154”
//          num2 = “51454”
// Output : 213739916

// Input :  num1 = 654154154151454545415415454  
//          num2 = 63516561563156316545145146514654 
// Output : 41549622603955309777243716069997997007620439937711509062916


#include <iostream>
#include <string>

#include <typeinfo>


using namespace std;

void product(string num1, string num2)
{
    if(num1=="0" or num2=="0")
        cout<<0;
    
    int array_index=num1.length() + num2.length();
    int product_array[array_index]={0};
    
    string larger_number;
    string smaller_number;
    
    if(num1.length() > num2.length())
    {
        larger_number=num1;
        smaller_number=num2;
    }
    else
    {
        larger_number=num2;
        smaller_number=num1;
    }
    
    for(int i=smaller_number.length()-1; i>=0; i--) // Small number stays below
    {
        for(int j=larger_number.length()-1; j>=0; j--) // We iterate through the larger number everytime !
        {
            int prod_of_digit = (larger_number[j]-'0') * (smaller_number[i]-'0'); // string to int
    
            int sum = product_array[i+j+1] + prod_of_digit; // Current position in array
            
            product_array[i+j+1]=sum%10;  // Current position in array
            product_array[i+j]+=sum/10; // Carry_number index 
        }
    }
    
    string output="";

    for(int i=0; i<array_index; i++)
        if(product_array[i]!=0 or output.length()>0)
            output+=(product_array[i]+'0'); // int to string or use to_string();
            
    cout<<output;
    
}

int main() 
{
    string num1="654154154151454545415415454";
    string num2="63516561563156316545145146514654";
    
    
    product(num1, num2);
    
    return 0;
}
