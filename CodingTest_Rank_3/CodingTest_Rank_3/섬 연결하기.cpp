#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int edge[100];
bool cmp(vector<int> a, vector<int> b)
{
    return a[2] < b[2];
}
int getbridge(int node)
{
    if (edge[node] == node)
        return node;
    else
        return edge[node] = getbridge(edge[node]);
}
int solution(int n, vector<vector<int>> costs) {
    int answer = 0;
    for (int i = 0; i < n; i++)
        edge[i] = i;
    sort(costs.begin(), costs.end(), cmp);
    for (int i = 0; i < costs.size(); i++)
    {
        int start = getbridge(costs[i][0]);
        int end = getbridge(costs[i][1]);
        int cost = costs[i][2];
        if (start != end) {
            answer += cost;
            edge[end] = start;
        }
    }
    return answer;
}