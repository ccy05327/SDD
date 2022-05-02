def mean(vals):
    sum = 0.0
    for i in range(len(vals)):
        try:
            sum += vals[i]
        except:
            t = type(vals[i])
            print("Cannot add {}".format(t))
            return
            

    return sum / len(vals)

def getMax(vals):
    maxSeen = 0
    for i in range(len(vals)):
        try:
            vals[i] = int(vals[i])
            if vals[i] > maxSeen:
                maxSeen = vals[i]
        except:
            t = type(vals[i])
            print("Cannot compare {} to".format(t))
    return maxSeen
