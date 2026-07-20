n= int(input())
arr= list(map(int,input().split()))
key=int(input())

low=0
high=n-1
comp=0
index=-1

while low<=high:
    mid=(low+high)//2
    comp+=1

    if arr[mid]==key:
        index=mid
        index=mid
        break
    elif arr[mid]>key:
        high=mid-1
    else:
        low=mid+1

print(index)
print(comp)

n= int(input())
arr=list(map(int,input().split()))
arr=list (map (int (input())))
target=int(input())

start=-1
end=-1

for i in range(a):
    if arr[i]==target:
        if a[i]==arr[i+1]
        a[i]=n+1
        if start==-1:
            start=i
        end=i

print(start,end)    


n =int(input())
arr=list(map(int,input().split()))


count =0

for i in range(n):
    for j in range(i+1,n):
        if arr[i]>arr[j]:
            count+=1


print(count)