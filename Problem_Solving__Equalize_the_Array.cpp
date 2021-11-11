//Equalize the Array - Hackerrank/ProblemSolving/Algorithm/Implementation
#include <bits/stdc++.h> 
using namespace std; 

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    // if frequencies of two elements are same
    // then the larger number should come first
    if (p1.second == p2.second)
        return p1.first > p2.first;
 
    // sort on the basis of decreasing order
    // of frequencies
    return p1.second > p2.second;
}
 
// funnction to print the k numbers with most occurrences
void print_N_mostFrequentNumber(int arr[], int n, int k)
{
    // unordered_map 'um' implemented as frequency hash table
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
        um[arr[i]]++;
 
    // store the elements of 'um' in the vector 'freq_arr'
    vector<pair<int, int> > freq_arr(um.begin(), um.end());
 
    // sort the vector 'freq_arr' on the basis of the
    // 'compare' function
    sort(freq_arr.begin(), freq_arr.end(), compare);
 
    // display the top k numbers
    //cout << k << " numbers with most occurrences are:\n";
    for (int i = 0; i < k; i++)
        freq_arr[i].first;
    
    int num = freq_arr[0].first;

    int countt = 0;
    for (int i = 0; i < n; i++)
    {
        if( arr[i] != num )
        countt++;
    }
    cout << countt;
}

int main() 
{   
    //DND
    struct Optimizer
    {
        Optimizer()
        {
        ios_base::sync_with_stdio(false); 
        cin.tie(NULL); 
        }
    };
    Optimizer opt;
    //DND
	int n; cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int k = 1;
    print_N_mostFrequentNumber(arr, n, k);
	
	return 0; 
}

