#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

const int SIZE = 12;

int to_decimal(string input);
string invert(string input);
string recurse(vector<string> check, bool oxy, int index);


int main()
{
    string input = "";
    int sum[SIZE];
    vector<string> contain;
    ifstream infile("input_03.txt");
    
    // oxygen gen rating
    while(!infile.eof())
    {
        infile >> input;
        contain.push_back(input);
        for(int i = 0; i < input.length(); i++)
        {
            char achar = input[i];
            int num = achar - '0';
            sum[i] += num; 
        }
    }
    infile.close();

    string toparse = "            ";
    for(int i = 0; i < SIZE; i++)
    {
        if(sum[i] > 500)
            toparse[i] = '1';
        else
            toparse[i] = '0';
    }
    
    string gamma = toparse;
    string epsilon = invert(toparse);
    string oxykey = recurse(contain, true, 0);
    string co2key = recurse(contain, false, 0);
    int oxydec = to_decimal(oxykey);
    int co2dec = to_decimal(co2key);
    
    cout << "Gamma: " << toparse << " -> " << to_decimal(toparse) << endl;
    cout << "Epsilon: " << invert(toparse) << " -> " << to_decimal(invert(toparse)) << endl;
    //cout << "Mult: " << gamma * epsilon << endl;
    cout << "Oxygen: " << oxykey << " -> " << oxydec << endl;
    cout << "CO2: " << co2key << " -> " << co2dec << endl;
    cout << "Life Support Rating: " << oxydec * co2dec << endl; 

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

string recurse(vector<string> check, bool oxy, int index)
{
    int size = check.size();
    if(size <= 1)
        return check.at(0);

    int sum_zero = 0;
    int sum_one = 0;
    char sign;
    for(int i = 0; i < size; i++)
    {
        char achar = check[i][index];
            int num = achar - '0';
            if(achar == '0')
                sum_zero++;
            else
                sum_one++;
    }
    if(oxy)
    {
        if(sum_one > sum_zero)
            sign = '1';
        else if(sum_one == sum_zero)
            sign = '1';
        else
            sign = '0';
    }
    else
    {
        if(sum_one < sum_zero)
            sign = '1';
        else if(sum_one == sum_zero)
            sign = '0';
        else
            sign = '0';
    }
    vector<string> results;
    for(int i = 0; i < size; i++)
    {
        if(check[i][index] == sign)
        {
            results.push_back(check[i]);
            //cout << check[i][index] << endl;
        }
    }
    check.clear();
    return recurse(results, oxy, ++index);
}



