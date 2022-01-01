#include "05.h"

graph::graph()
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            matrix[i][j] = 0;
        }
    }
}

void graph::lineitup()
{
    ifstream in("input_05.txt");
    int x = 0;
    int y = 0;
    string capture;

    while(!in.eof())
    {
        in >> x;
        in.ignore();
        in >> y;
        in >> capture;

        int x1 = x;
        int y1 = y;

        in >> x;
        in.ignore();
        in >> y;

        int x2 = x;
        int y2 = y;
        
        /* 
        cout << "(" << x1 << "," << y1 << ")";
        cout << " -> ";
        cout << "(" << x2 << "," << y2 << ")";
        cout << endl;
        */
        
        if(x1 == x2)
        {
            if(y1 < y2)
            {
                for(int i = y1; i <= y2; i++)
                {
                    matrix[x1][i]++;
                }
            }
            else
            {
                for(int i = y2; i <= y1; i++)
                {
                    matrix[x1][i]++;
                }
            }
        }
        else if(y1 == y2)
        {
            if(x1 < x2)
            {
                for(int i = x1; i <= x2; i++)
                {
                    matrix[i][y1]++;
                }
            }
            else
            {
                for(int i = x2; i <= x1; i++)
                {
                    matrix[i][y1]++;
                }
            }
        }
        
         
        int diffx = abs(x1 - x2);
        int diffy = abs(y1 - y2);
     
        if(diffx == diffy)
        {
             

            if(x1 < x2)
            {
                if(y1 < y2)
                {
                    
                    for(int i = x1; i <= x2; i++)
                    {
                        matrix[i][y1]++;
                        y1++;
                    }
                }
                else
                {
                    
                    for(int i = x1; i <= x2; i++)
                    {
                        matrix[i][y1]++;
                        y1--;
                    }
                }
            }
            else
            {
                 if(y1 < y2)
                {
                    
                    for(int i = x2; i <= x1; i++)
                    {
                        matrix[i][y2--]++;
                    }
                }
                else
                {
                    cout << "(" << x1 << "," << y1 << ")";
                    cout << " -> ";
                    cout << "(" << x2 << "," << y2 << ")";
                    cout << endl;
                    for(int i = x2; i <= x1; i++)
                    {
                        matrix[i][y2++]++;
                    }
                }
            }
            
        }
    

    }
}

void graph::print()
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(!matrix[j][i])
                cout << ". ";
            else
                cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}

int graph::countitup()
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(matrix[j][i] > 1)
            {
                count++;
            }
        }
    }

    return count;
}