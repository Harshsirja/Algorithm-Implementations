#include <iostream>

using namespace std;
const int graphSize = 7;
bool graphComplete(int selectedNode[])
{
    bool completeFlag = true;
    int temp = selectedNode[0];
    for(int i = 0; i < graphSize; i++)
        if(selectedNode[i] != temp)
        {
            completeFlag = false;
            break;
        }
    return completeFlag;
}

int main()
{
    int graph[graphSize][graphSize] = { {0,28,-1,-1,-1,10,-1},
                        {28,0,16,-1,-1,-1,14},
                        {-1,16,0,12,-1,-1,-1},
                        {-1,-1,12,0,22,-1,18},
                        {-1,-1,-1,22,0,25,24},
                        {10,-1,-1,-1,25,0,-1},
                        {-1,14,-1,18,24,-1,0}
                        };
    int edges[graphSize][graphSize] = { (0,0,0,0,0,0,0),
                        (0,0,0,0,0,0,0),
                        (0,0,0,0,0,0,0),
                        (0,0,0,0,0,0,0),
                        (0,0,0,0,0,0,0),
                        (0,0,0,0,0,0,0),
                        (0,0,0,0,0,0,0)
                        };
    int selectedNode[graphSize] = {0,1,2,3,4,5,6};
    int totalSelectedNodes = 0;
    int currentNode;
    int min_edge,min_edge_index;
    int temp_min = 99,temp_min_index_i,temp_min_index_j;
    for(int i = 0; i < graphSize; i++)
        for(int j = 0; j < graphSize; j++)
            edges[i][j]=1;
    while(!graphComplete(selectedNode))
    {
        temp_min = 99;
        //findMinimum
        for(int i = 0; i < graphSize; i++)
            for(int j = 0; j < graphSize; j++)
                if(graph[i][j] < temp_min && edges[i][j]==1 && graph[i][j] != -1 && graph[i][j] != 0 && (selectedNode[i] != selectedNode[j]))
                {
                    temp_min = graph[i][j];
                    temp_min_index_i = i;
                    temp_min_index_j = j;
                }
        int uComp = selectedNode[temp_min_index_i];
        int vComp = selectedNode[temp_min_index_j];
        for(int i = 0; i < graphSize; i++)
            if(selectedNode[i] == uComp)
                selectedNode[i] = vComp;
        edges[temp_min_index_i][temp_min_index_j] = 2;
        edges[temp_min_index_j][temp_min_index_i] = 2;
        totalSelectedNodes++;
        cout << "Selected an edge: " << "i: " << temp_min_index_i << " j: " << temp_min_index_j << endl;
    }
}
