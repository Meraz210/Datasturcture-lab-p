#include<iostream>
 using namespace std;
 int main()
{
    int i,j,k,n,a[50];
    cout<<"Enter your array size:"<<" ";
    cin>>n;
    cout<<endl;
    cout<<"Enter elements of array:"<<" ";

    for(i=0;i<n;++i)
        {
            cin>>a[i];
        }

 for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;++k)

                    a[k]=a[k+1];
                     --n;
            }
            else
                ++j;
        }
    }

    cout<<"Your array elements without any duplicates elements:"<<" ";
    for(i=0;i<n;++i)

    {
        cout<<a[i]<<" ";
    }

   cout<<endl;

    for(int i=0; i<n; i++)

    {

        if(a[i]==n)

        {

            cout<<"Array already unique."<<endl;

            break;

        }

    }

    return 0;

}
