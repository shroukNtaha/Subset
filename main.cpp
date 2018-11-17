///Name : Shrouk Nady Taha   ,   ID : 20170128  ,  G : 5
///Eng : Esraa Salem
///Problem 4 on page 380 (Programming Abstractions)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Way = 0 ; ///Number Of Ways
int countSubsetSumWays(vector <int> sampleSet , int  n ,int target)
{
    int Sum = 0 , Count = sampleSet.size()-1 ;
    if(n == 0) return Way ;  ///End Function
    ///if n = 15   binary = 1111 { 1 , 3 , 4 , 5 }   sum = 1+3+4+5
    ///if n = 10   binary = 1010 { 1 , 4 }  sum = 1+4
    for (int i = n ; i > 0 ; i = i/2)
    {
        if( i % 2 )
        {
            Sum += sampleSet[Count];
        }
        Count--;
    }
    if(Sum == target)
        Way++;
    return countSubsetSumWays(sampleSet , n - 1 , target );
}
int main()
{
    vector < int > sampleSet ;
    sampleSet = { 1 , 3 , 4 , 5 } ;
    cout << "Enter target : " ;
    int target;
    cin >> target ;
    int n = (sampleSet.size() * sampleSet.size()) - 1 ; ///Number Of Probability-1
    cout << countSubsetSumWays(sampleSet , n , target) ;

}
