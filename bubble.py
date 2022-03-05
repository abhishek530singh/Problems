def bubbleSort(arr):
    for i in range(0,len(arr)):
        swapped=False
        for j in range(0,len(arr)-i-1):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]
                swapped =True
        if (not swapped):
            return
    return

if __name__ =="__main__":
    arr=list(map(int,input().split()))
    print(f"Array before sorting {arr}")
    bubbleSort(arr)
    print(f"Array after sorting {arr}")