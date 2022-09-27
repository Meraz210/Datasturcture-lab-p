
#include<iostream>



using namespace std;



int main()

{   int i;

   int b[]={10,20,30,40,50};



   int a[]={1,2,3,4,5,6,7,8};



   int arr_3[13];

   int arr_11=5;

   int arr_22=8;





   for(i=0;i<b;i++)

   {

       arr_3[i]=arr_11[i];

   }

   for(i=0;i<a;i++)

   {



       arr_3[i+5]=arr_22[i];

   }

   for(i=12;i>=0;i--)

   {



       cout<<arr_3[i]<<"   ";

   }





    return 0;

}
