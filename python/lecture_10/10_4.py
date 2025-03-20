def has_dups(list):
    for i,t in enumerate(list):
        if t in list[i+1:]:
            return True
    return False    
    

lst = [1,3,6]
print(has_dups(lst))