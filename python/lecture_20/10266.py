n = int(input().strip()) 

for i in range(n):
    tree_count = {}  
    total_trees = 0  

    while True:
        try:
            line = input().strip()
            if line == "":  
                break
            if line in tree_count:
                tree_count[line] += 1
            else:
                tree_count[line] = 1
            total_trees += 1
        except EOFError:
            break

    if i > 0:
        print()

    for tree in sorted(tree_count.keys()):
        percentage = (tree_count[tree] / total_trees) * 100
        print(f"{tree} {percentage:.4f}")