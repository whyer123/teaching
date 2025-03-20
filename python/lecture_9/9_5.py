def avg_list(list):
    sum=0
    for i in range(len(list)):
        sum=sum+list[i]  
    answer=(sum/len(list))
    return(answer)


my_list = [5,6,7,8,9]

ans = avg_list( my_list )

print(ans)