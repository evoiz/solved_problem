#include <bits/stdc++.h>
using namespace std;
const int N = 10000;
int n, m, f1[26], f2[26];
char c[N][21];
vector<vector<pair<int, int> > > g;

int dijkstra(int s, int e) {
	int dist[N];
	for (int i = 0; i < N; i++)
		dist[i] = 1e9;
	dist[s] = 0;
	priority_queue<pair<int, int> > pq;
	pq.push(make_pair(0, s));

	while (!pq.empty()) {
		pair<int, int> u = pq.top();
		pq.pop();
		int v = u.second;

		for (int i = 0; i < g[v].size(); i++) {
			if (dist[g[v][i].first] > dist[v] + g[v][i].second) {
				dist[g[v][i].first] = dist[v] + g[v][i].second;
				pq.push(make_pair(-dist[g[v][i].first], g[v][i].first));
			}
		}
	}
	return dist[e];
}

int main() {
	scanf("%d%d", &n, &m);

	g.resize(n);

	for (int i = 0; i < n; i++)
		scanf("%s", c[i]);

	int u, v, cost;
	while (m--) {
		scanf("%d%d", &u, &v);
		u--, v--;

		memset(f1, 0, sizeof(f1));
		memset(f2, 0, sizeof(f2));

		int l = strlen(c[u]);
		for (int i = 0; i < l; i++)
			f1[tolower(c[u][i]) - 'a']++;

		l = strlen(c[v]);
		for (int i = 0; i < l; i++)
			f2[tolower(c[v][i]) - 'a']++;

		cost = 0;
		for (int i = 0; i < 26; i++)
			if (f1[i] > 0 && f2[i] > 0)
				cost++;

		g[u].push_back(make_pair(v, cost));
		g[v].push_back(make_pair(u, cost));
	}

	int s, e;
	scanf("%d%d", &s, &e);
	s--, e--;

	printf("%d\n", dijkstra(s, e));

	return 0;
}
/**

**/
