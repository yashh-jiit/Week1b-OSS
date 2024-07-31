Link Repo - https://github.com/mburst/dijkstras-algorithm/blob/master/dijkstras.cpp

**void add_vertex(char name, const unordered_map<char, int>& edges)**

This function adds a vertex to the graph with the given name and its associated edges, where each edge is represented as a key-value pair in an `unordered_map`. The key is the neighboring vertex, and the value is the weight of the edge connecting the current vertex to the neighbor. This adjacency list representation allows efficient lookups and storage of the graph structure.

**vector<char> shortest_path(char start, char finish)**

This function implements Dijkstra's algorithm to find the shortest path from a starting vertex (`start`) to a destination vertex (`finish`). It uses a priority queue (implemented with a heap) to repeatedly select the vertex with the smallest tentative distance, updating distances to its neighbors. The function returns a vector of vertices representing the shortest path in reverse order (from `finish` back to `start`). If the destination vertex is unreachable, the path will be empty.