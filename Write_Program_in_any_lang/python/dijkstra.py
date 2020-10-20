from collections import defaultdict
class Graph:
    def __init__(self,vertices):
        self.V=vertices
        self.graph=defaultdict(list)
    def addedge(self,u,v,w):
        self.graph[u].append([v,w])
    def Dijkstra(self):
        wt=[100000]*self.V
        wt[0]=0
        A=[]
        B=[0]
        for i in range(self.V):
            A.append(i)
        Set={0:0}
        while Set:
            S=min(Set,key= lambda k:Set[k])
            
            del Set[S]
            for k in range(len(self.graph[S])):
                q=self.graph[S][k][0]
                if wt[q]>wt[S]+self.graph[S][k][1]:
                    wt[q]=wt[S]+self.graph[S][k][1]
                    Set[q]=wt[q]
        for i in range(S+1):
            print("Source Node",0,"-","Destination Node",i,"->",wt[i])

d=Graph(4)
d.addedge(0,1,1)
d.addedge(0,2,3)
d.addedge(1,2,2)
d.addedge(1,3,8)
d.addedge(2,3,4)
d.Dijkstra()
