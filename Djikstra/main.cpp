#include <iostream>

using namespace std;

int main()
{
    const int graphSize = 6;
    int graph[graphSize][graphSize] = { {0,10,15,-1,-1,-1},
        {-1,0,-1,12,-1,15},
        {-1,-1,0,-1,10,-1},
        {-1,-1,-1,0,2,1},
        {-1,-1,-1,-1,0,-1},
        {-1,-1,-1,-1,5,0}
    };
    int selectedNode[graphSize] = {1,0,0,0,0,0};
    int prevDistance = 0;
    int totalSelectedNodes = 1; //A is selected initially
    int currentNode = 0; //which is A here
    int dijkstraArr[graphSize] = {0};
    for(int i = 1; i < graphSize; i++)
    {
        dijkstraArr[i] = graph[currentNode][i];
    }
    int prevNode = 0;
    while(totalSelectedNodes != graphSize)
    {
        prevNode = currentNode;
        int min = 99; //largest possible value to find minimum
        //update dijkstra array to minimum paths
        for(int i = 1; i < graphSize; i++)
        {
            if(
                (graph[currentNode][i] != -1) &&
                (graph[currentNode][i] != 0) &&
                ( ( (prevDistance + graph[currentNode][i])  <  dijkstraArr[i]) ||dijkstraArr[i] == -1)
            )
                dijkstraArr[i] = prevDistance + graph[currentNode][i];
        }
        //find_min from dijkstra array
        for(int i = 1; i < graphSize; i++)
            if( min > dijkstraArr[i] && dijkstraArr[i] != -1 && selectedNode[i] != 1)
            {
                min = dijkstraArr[i];
                currentNode = i;
            }
        selectedNode[currentNode] = 1;
        prevDistance = dijkstraArr[currentNode];
        if(prevNode == currentNode)
            break;
    }
    //print dijkstra array
    cout << "Answer : [ ";
    for(int i = 1; i < graphSize; i++)
    {
        if(dijkstraArr[i] == -1)
            cout << "NA" << " ";
        else
            cout << dijkstraArr[i] << " ";
    }
    cout << " ] " << endl;
}
