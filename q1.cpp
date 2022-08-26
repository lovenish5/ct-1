//Name-LOVENISH
//Roll no-2010990425
//Set no-03
//Q1:-

#include <bits/stdc++.h>

using namespace std;


void findNonRepeat(int* a, int n){
    
    unordered_map<int,int> hash;
    
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    
    cout<<"the nonrepeating numbers are: ";
    
    
    for(auto it=hash.begin();it!=hash.end();it++)
    if(it->second==1)
    printf("%d ",it->first);
    
    printf("\n");
    
}

int main()
{
    int n;
    cout<<"enter array length\n";
    cin>>n;
    int* a=(int*)(malloc(sizeof(int)*n));
    
    cout<<"input array elements...\n";
    
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    
    findNonRepeat(a,n);

    return 0;
}

