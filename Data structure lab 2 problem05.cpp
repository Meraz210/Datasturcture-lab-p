#include <iostream>

using namespace std;

int main()

{

    int array[10]={1,2,3,4,5,6,7,8,9,10},dup[10];

    int size=10,i,j;
    for(i=0; i<size; i++)
    {
        int cnt=1;
        for(j=i+1; j<size; j++)
        {
            if(array[i]==array[j])
            {
                cnt++;
                dup[j]=0;
            }
        }
                if(dup[i]!=0)
        {
            dup[i]=cnt;
        }
    }
    for(i=0;i<=9;i++)

    {
         cout<<"your number"<<" "<<array[i]<<" "<<" occured"<<" "<<dup[i]<<" "<<"times"<<endl;
    }

return 0;

    }
