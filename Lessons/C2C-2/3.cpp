#include <iostream>
#include <queue>
using namespace std;

int n, m, x, y;;
bool arr[1001][1001];
bool vis[1001];

struct Node {
    int number, step;
};


queue<Node> q;

int bfs()
{
    while (!q.empty())
    {
        Node t = q.front();
        q.pop();

        if (t.number == y)
        {
            return t.step;
        }

        for (int i = 1; i < 1001; i++)
        {
            if(arr[t.number][i] == 1 && vis[i] == 0)
            {
                q.push({i, t.step+1});
                vis[i] = 1;
            }
        }
    }
    return -1;
    
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }

    cin >> x >> y;
    q.push({x, 0});
    vis[x] = 1;
    cout<< bfs();
    return 0;
}