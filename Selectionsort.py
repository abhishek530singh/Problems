from numpy import size


def SelectionSort(arr):
    size=len(arr)
    
    for i in range(size):
        mini=arr[i]
        index=i
        for j in range(i+1,size):
            if mini>arr[j]:
                mini=arr[j]
                index=j
        if mini!=arr[i]:
            arr[i],arr[index]=arr[index],arr[i]
    return arr


if __name__=="__main__":
    arr=list(map(int,input().split()))
    print(f"given array is {arr}")
    ar=SelectionSort(arr)
    print(f"After sorting the array is {ar}")
