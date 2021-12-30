#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

const int SIZE = 12;

int to_decimal(string input);
string invert(string input);
//string recurse(string * oxy, string og, int index, int size);
int counter(string og, int index);

int main()
{
    string input = "";
    int epsilon = 0;
    int gamma = 0;
    int sum[SIZE];
    int oxygen = 0;
    int co2 = 0;
    int currentsize = 0;
    string * oxy = nullptr;
    //int * scrub = nullptr;

    int count = 0;
    ifstream infile("input_03.txt");
    
    // oxygen gen rating
    while(!infile.eof())
    {
        infile >> input;
        
        for(int i = 0; i < input.length(); i++)
        {
            char achar = input[i];
            int num = achar - '0';
            sum[i] += num; 
        }
        count++;
    }

    count = 0;
    string toparse = "            ";
    for(int i = 0; i < SIZE; i++)
    {
        if(sum[i] > (count/2))
            toparse[i] = '1';
        else
            toparse[i] = '0';
    }
    infile.close();
    //int amount = counter(toparse, 0);
 
    
    //cout << "Gamma: " << toparse << " -> " << to_decimal(toparse) << endl;
    //cout << "Epsilon: " << invert(toparse) << " -> " << to_decimal(invert(toparse)) << endl;
    //cout << "Mult: " << gamma * epsilon << endl;
    cout << "Count: " << count << endl;
    

    return 0;
}

string invert(string input)
{
    string to_invert = "            ";
    for(int i = 0; i < SIZE; i++)
    {
        if(input[i] == '1')
            to_invert[i] = '0';
        else
            to_invert[i] = '1';
    }
    return to_invert;
}

int to_decimal(string input)
{
    int ans = 0;
    long long num = 0;
    int remainder = 0;
    int place = 0;
    stringstream sinput(input);

    sinput >> num;

    while(num)
    {
        remainder = num % 10;
        num /= 10;
        ans += (remainder * pow(2, place));
        place++;
    }
    return ans;
}

int counter(string og, int index)
{
    ifstream infile;
    infile.open("input_03.txt");
    string input = "";
    int count = 0;
    while(!infile.eof())
    {
        infile >> input;
        if(input[index] == og[index])
        {
            count++;
        }
    }
    infile.close();
    return count;
}

