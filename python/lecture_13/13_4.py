list=[3,1,2,1,3,2]
n=6
count=0
my_list=[]
    
for i in range(n-1):
    if list[i] not in my_list:
        for j in range(i+1,n):
                if list[i]==list[j]:
                        break
                if list[i]>list[j]:
                    count=count+1
    my_list.append(list[i])
print(count)