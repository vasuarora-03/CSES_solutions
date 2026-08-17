/*There are n applicants and m free apartments. Your task is to distribute the apartments so that as many applicants as possible will get an apartment.
Each applicant has a desired apartment size, and they will accept any apartment whose size is close enough to the desired size.
The first input line has three integers n, m, and k: the number of applicants, the number of apartments, and the maximum allowed difference.
The next line contains n integers a_1, a_2, \ldots, a_n: the desired apartment size of each applicant. If the desired size of an applicant is x, they will accept any apartment whose size is between x-k and x+k.
The last line contains m integers b_1, b_2, \ldots, b_m: the size of each apartment.
Print one integer: the number of applicants who will get an apartment.

Example
Input:
4 3 5
60 45 80 60
30 60 75

Output:
2*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, k;
    cin >> n >> m >> k;
    long long numberOfApplicants = n;
    long long numberOfApartments = m;
    long long maxAllowedDifference = k;

    vector<long long> desiredApartmentSize(n);
    vector<long long> actualApartmentSize(m);
    for(int i=0; i<n; i++){
        cin >> desiredApartmentSize[i];
    }
    for(int i=0; i<m; i++){
        cin >> actualApartmentSize[i];
    }
    sort(desiredApartmentSize.begin(), desiredApartmentSize.end());
    sort(actualApartmentSize.begin(), actualApartmentSize.end());

    int i = 0; int j=0;
    int ans = 0;
    while(i < n && j < m){
        if(actualApartmentSize[j] < desiredApartmentSize[i]-k){
            //mtlb desired apartment size currently hi zyada hai toh apartment size aage bhada dete hai
            j++;
        }
        else if(actualApartmentSize[j] > desiredApartmentSize[i] + k){
            //desired phoch nahi paa raha hai already available se, isko ni mil paayega
            //so agle vale ke pass chalte hai 
            i++;
        }
        else{
            ans++;
            i++;
            j++;
        }
    }
    cout << ans << endl;

    return 0;
}

//4 3 5
// 60 45 80 60
// 30 60 75

// 45 60 60 80
// 30 60 75

// [40 50] 
// [55 65]
// [55 65]
// [75 85]

// desired - k => apartment size se match nahi hua 
// desired + k