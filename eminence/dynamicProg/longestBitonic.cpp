// C++ program to find length of longest bitonic
// subarray. O(n) time and O(1) extra space
#include <iostream>
using namespace std;

// Function to find length of longest bitonic
// subarray
long bitonic(long *A, long n)
{
    // if A is empty
    if (n == 0)
        return 0;

    // initializing max_len
    long maxLen=1;

    long start=0;
    long nextStart=0;

    long j =0;
    while (j < n-1)
    {
        // look for end of ascent
        while (j<n-1 && A[j]<=A[j+1]){
              j++;
            }
        // look for end of descent
        while (j<n-1 && A[j]>A[j+1]){
            // adjusting nextStart;
            // this will be necessarily executed at least once,
            // when we detect the start of the descent
            if (j<n-1 && A[j]>A[j+1])
                nextStart=j+1;

            j++;
        }

        // updating maxLen, if required
        maxLen = max(maxLen,j-(start-1));

        start=nextStart;
    }

    return maxLen;
}

int main()
{   long n;
    cin >> n;
    long a[n];
    for(long i = 0; i < n; i++){
      cin >> a[i];
    }
    cout << bitonic(a, n) << endl;
    return 0;
}
