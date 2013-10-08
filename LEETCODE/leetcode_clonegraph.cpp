#include"stdafx.h"
#include<stdio.h>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

typedef struct varNode {
	int value;
	vector<struct varNode*> neighbors;
}Node;


typedef unordered_map<Node *, Node *> Map;


Node *clone(Node *graph) {
    if (!graph) return NULL;

    Map map;
    queue<Node *> q;
    q.push(graph);

    Node *graphCopy = new Node();
    map[graph] = graphCopy;

    while (!q.empty()) {
        Node *node = q.front();
        q.pop();
        int n = node->neighbors.size();
        for (int i = 0; i < n; i++) {
            Node *neighbor = node->neighbors[i];
            // no copy exists
            if (map.find(neighbor) == map.end()) {
                Node *p = new Node();
                map[node]->neighbors.push_back(p);
                map[neighbor] = p;
                q.push(neighbor);
            } else {     // a copy already exists
                map[node]->neighbors.push_back(map[neighbor]);
            }
        }
    }

    return graphCopy;
}

int mainleetcode_clonegraph()
{
	Node *n = new Node();
	Node *n2 = new Node();
	n->value = 1;
	n2->value = 2;
	n->neighbors.push_back(n2);
	n2->neighbors.push_back(n);


	Node *n3 = n;
	n3->neighbors.pop_back();
	Node* g = clone(n);

	return 0;
}

