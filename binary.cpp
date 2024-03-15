#include<iostream>
using namespace std;
int main()
{
    int e;
    int mid ,l=0,h=9;
    int temp =0;

    int array[10]={1,11,22,33,44,55,66,77,88,99};

    for(int i =0;i<10;i++){
        cout<<array[i]<<endl;
    }
    mid =(l+h)/2;

    cout<<endl<<"mid is :"<<mid<<endl;

    cout<<"enter element :";
    cin>>e;

    while(l<=h){
        if(array[mid]==e){
            cout << mid;
            temp++;
            break;
        }
        else if(array[mid]>e)
        {
            h = mid - 1;
            mid = (l+h)/2;
        }
    }

    if(temp == 0){
        cout <<"not match";
    }
    else{
        cout<<"match , %d"<<mid + 1;
    }
return 0;
}
