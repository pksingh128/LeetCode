//Dynamic Programming

#include <iostream>
#include <unordered_map>

using namespace std;


long long fibb(long long n, unordered_map <long long, long long>& umap) {
    if(umap.count(n) != 0)    return umap[n];

    else umap[n] = fibb(n - 1, umap) + fibb(n - 2, umap);

    return umap[n];
}
int main() {
    unordered_map <long long, long long> umap;
    umap[1] = 1; umap[2] = 1;
    int data;
    cin >> data;
    cout << fibb(data, umap);
    return 0;
}