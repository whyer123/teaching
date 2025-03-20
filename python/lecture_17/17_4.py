#河內塔 最佳解所需移動次數
def heni(n) :
    if n == 1 :
        return 1
    else :
        return 2*heni(n-1) + 1 