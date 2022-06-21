#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <map>
#include <set>
#include <queue>
#include <sstream>
#include<unordered_map>
using namespace std;
int edge[100];
bool cmp(vector<int> a, vector<int> b)
{
    return a[2] < b[2];
}
int getparents(int node)
{
    if (edge[node] == node)return node;
    return edge[node] = getparents(edge[node]);
}
int test(vector<vector<int>> v, int n)
{
    int result = 0;
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++) {
        int start_node = getparents(v[i][0]);
        int end_node = getparents(v[i][1]);
        int dis = v[i][2];
        if (start_node != end_node) {
            result += dis;
            end_node = start_node;
        }
    }
    return result;
}
int main(void)
{

    return 0;
}
