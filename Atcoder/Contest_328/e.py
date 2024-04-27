import heapq

def prim(graph):
    start_vertex = list(graph.keys())[0]
    visited = set([start_vertex])
    edges = [(cost, start_vertex, to) for to, cost in graph[start_vertex]]
    heapq.heapify(edges)
    total_cost = 0

    while edges:
        cost, frm, to = heapq.heappop(edges)

        if to not in visited:
            visited.add(to)
            total_cost += cost

            for next_to, next_cost in graph[to]:
                if next_to not in visited:
                    heapq.heappush(edges, (next_cost, to, next_to))

    return total_cost

graph = {}
n,m,k = map(int, input().split())

for i in range(1, n + 1):
    graph[i] = []

for _ in range(m):
    u,v,w = map(int, input().split())
    
    graph[u].append((v, w))
    graph[v].append((u, w))

total_cost = prim(graph)
print(total_cost % k)

