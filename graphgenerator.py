# -*- coding: utf-8 -*-
"""graphgenerator.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/12LUN1oPb1ZCcegkhx04kyuJct7dXKsRV
"""

import networkx as nx
import pandas as pd
import numpy as np

G = nx.complete_graph(1200)

len(G)

G.size()

G.nodes()

A=G.edges()

A

b=list(A)

df = pd.DataFrame(A, columns=['fromnode', 'tonode'])

len(df)

df

import random

res = [random.randrange(1, 20, 1) for i in range(len(df))]

res

df['capacity']=res

df

k=df.to_csv("data1200.dat",sep=" ", index=False)

k
