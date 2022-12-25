//USING ADJACENCY MATRIX FOR A WEIGHTED UNDIRECTED GRAPH

/*#include<iostream>
using namespace std;

void adjacency_matrix(int arr[30][30],int n){
    cout<<"\n"<<"Enter the number of nodes:"<<"\n";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"\n"<<"Is node "<<i<<" connected with node "<<j<<" (if 'yes' then please enter the weight else 0) " <<"\n";
            cin>>arr[i][j];    
        }
    }

    cout<<"\n"<<"Adjacency matrix created"<<"\n";

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<"\t";    
        }
        cout<<"\n";
    }
}

int main(){
    int arr[30][30],n;
    adjacency_matrix(arr,n);
    return 0;
}*/

//PRIM'S ALGORITHM TO FIND MINIMUM SPANNING TREE

#include<iostream>
using namespace std;
#include <climits>
void adjacency_matrix(int arr[30][30],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"\n"<<"Is node "<<i<<" connected with node "<<j<<" (if 'yes' then please enter the weight else 0) " <<"\n";
            cin>>arr[i][j];    
        }
    }

    cout<<"\n"<<"Adjacency matrix created"<<"\n";

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<"\t";    
        }
        cout<<"\n";
    }
}

int findMin(int key[],bool MST[],int n){
    int min=INT_MAX,min_index;
    for(int i=0;i<n;i++){
        if(key[i]<min && MST[i]==false){
            min=key[i],min_index=i;
        }
    }
    return min_index;
}

void prims_MST(int key[],bool MST[],int parent[],int arr[30][30],int n){
    int MAX = INT_MAX;
    int u;
    for(int i=0;i<n;i++){
        key[i]=MAX;
        MST[i]=false;
        parent[i]=-1;
    }
    key[0]=0; //so that this vertex is picked first
    parent[0] = -1;

    for(int i=0;i<n;i++){
        u=findMin(key,MST,n);
        MST[u]=true;

        for(int v=0;v<n;v++){
            if(arr[u][v] && MST[v]==false && arr[u][v]<key[v]){
                key[v]=arr[u][v];
                parent[v]=u;
            }
        }
    }
    cout<<"\n"<<"Edge"<<"\t\t"<<"Weight"<<"\n";
    for(int i=1;i<n;i++){        //coz node 0 is starting node so will have parent as -1 always
        cout<<parent[i]<<"-"<<i<<"\t\t"<<arr[i][parent[i]]<<"\n";
    }
}

int main(){
    int arr[30][30],n;
    cout<<"\n"<<"Enter the number of nodes:"<<"\n";
    cin>>n;
    adjacency_matrix(arr,n);
    int key[n],parent[n];
    bool MST[n];
    prims_MST(key,MST,parent,arr,n);
    return 0;
}




