import heapq
while h:
    d,u=heapq.heappop(h)
    if d>dist[u]:continue
    for v, w in g[u]:
        if dist[v]>d+w:
            dist[v]=d+w
            heapq.heappush(h,(dist[v],v))