# list = 2 3 4 5
# target = 9 
# return 2 3

list = [2,3,4,5]
target = 9

for i,t in enumerate(list) :
    for j,l in enumerate(list[i+1:]) :
        if t+l == target :
            print(i,1+i+j)
        
# 2 [3,4,5] +1 i=0
# 3 [4,5] +2 i=1
# 4 [5] +3 i=2
