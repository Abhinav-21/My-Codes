def sortedBinaryNumbers(bitArrays):
    # arr will sotres the list of [index,value]     
    arr = []     # for each value in the bitArrays     
    for i in range (len(bitArrays)):         
        val = 0         # finds the decimal value of the set bits         
        for index in bitArrays[i]:             
            val += (2**index)         # appends the val into the arr         
            arr.append([val,i])     # sorts the arr into the descending order     
            arr.sort(reverse = True)     # returns the indexes of the bitArrays after sorting     
            return [item[1] for item in arr]  
        
if __name__ == '__main__':     
    bitArrays = [[0,2],[2,3],[2,1]]     
    print(sortedBinaryNumbers(bitArrays))
 