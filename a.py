import random, math
from heapq import heappop, heappush

#====================== functions ============================#
#---------------------- tìm kiếm nhị phân ---------------------#
def tknp(data, num):
    def tknpp(data,num):
        l = 0
        r = len(data) - 1
        mid = 0
        while l <= r:
            mid = (l + r) // 2
            if data[mid] < num:
                l = mid + 1
            elif data[mid] > num:
                r = mid - 1
            else:
                return mid
        return -1
    ans=tknpp(data,num)+1
    if ans!=-1:
        print(f"số cần tìm ở vị trí: {ans}")
    else:
        print("ko tìm thấy")
#--------------------- tìm kiếm nhảy -------------------------#
def tkn(data,num):
    sorteddata=sorted(data,key=int)
    buoc=math.sqrt(len(data))
    trc=0
    while data[int(min(buoc,len(data)-1))]<num:
        trc=buoc
        buoc+=math.sqrt(len(data))
        if trc>=len(data):
            return -1
    while data[int(trc)] < num: 
        trc += 1

        if trc == min(buoc, len(data)): 
            return -1

    if data[int(trc)] == num: 
        return trc 
      
    return -1
#------------------------- quicksort -------------------------#
def qsort(data):

    ll, bb, rr = [], [], []

    if len(data)<= 1:
        return data
    else:
        truc = data[0]
        for xx in data:
            if xx < truc:
                ll.append(xx)
            elif xx == truc:
                bb.append(xx)
            elif xx > truc:
                rr.append(xx)
        return qsort(ll)+bb+qsort(rr)  
#---------------------------- merge sort ---------------------#
def msort(data):
    if len(data)<=1:
        return data
    else:
        
        mid=len(data)//2         #   chia đôi mảng

        l=data[:mid]       #--mảng trái
        r=data[mid:]       #----và phải.

        msort(l)     # chia mảng trái
        msort(r)     #        và phải.

        ll=rr=mm=0
        
        while ll<len(l) and rr<len(r):
            if l[ll]<r[rr]:
                data[mm]=l[ll]
                ll+=1
            else:
                data[mm]=r[rr]
                rr+=1
            mm+=1
        
        while ll<len(l):
            data[mm]=l[ll]
            ll+=1
            mm+=1
        
        while rr<len(r):
            data[mm]=r[rr]
            rr+=1
            mm+=1
        return data
#----------------------------- bubble sort -------------------#
def bsort(data):
    while data!=sorted(data,key=int):
        for i in range(0,len(data)-1):
            if data[i]>data[i+1]:
                data[i], data[i+1]=data[i+1], data[i]
    return data
#----------------------- selection sort ----------------------#
def sesort(data):
    if len(data)<=1:
        return data
    else:
        for i in range(len(data)):
            sml=i
            for j in range(i+1,len(data)):
                if data[j]<data[sml]:
                    sml=j
            data[i],data[sml]=data[sml],data[i]
        return data
#----------------------- insertion sort ----------------------#
def insort(data):
    for i in range(len(data)):
        value = data[i]
        j = i - 1  
        while j >= 0 and value < data[j]:  
            data[j + 1] = data[j]
            j -= 1  
        data[j + 1] = value  
    return data
#-------------------------- heap sort ------------------------#
def hsort(data):
    heap=[]
    for i in data:
        heappush(heap,i)
    sxx=[]
    while heap:
        sxx.append(heappop(heap))
    return sxx
#--------------------- tháp hà nội ---------------------------#
def thn(soc,c1,c3,c2):
    def chd(c1,c3):
        print(f"chuyển đĩa hiện tại ở cọc {c1} sang cọc {c3}")
    if soc >= 1:
        thn(soc-1,c1,c2,c3)
        chd(c1,c3)
        thn(soc-1,c2,c3,c1)
#=============================================================#


#==================================================================#
luachon=input('tìm kiếm nhị phân,\
 tìm kiếm nhảy và những cách sắp xếp\
\n\
cách 1 hoặc 2:\
\n\n\
1.random một dãy có số phần tử tự chọn\n\
\
2.tự nhập các phần tử\n\n>>')
print('------------')

if luachon=='1':

    n = int(input("Nhập số phần tử của dãy số: "))

    mylist,m1list,m2list,m3list,m4list,m5list,mnlist=[],[],[],[],[],[],[]

    for i in range(n):
        val=random.randint(1,100)

        mylist.append(val)
        m1list.append(val)
        m2list.append(val)
        m3list.append(val)
        m4list.append(val)
        m5list.append(val)

        mnlist.append(val)


elif luachon=='2':

    a=input("Nhập các phần tử của dãy số (có dấu cách):\n")
    mstrl=a.split()

    mylist=list(map(int,mstrl))
    m1list=list(map(int,mstrl))
    m2list=list(map(int,mstrl))
    m3list=list(map(int,mstrl))
    m4list=list(map(int,mstrl))
    m5list=list(map(int,mstrl))

    mnlist=list(map(int,mstrl))


else:
    print('không hợp lệ.')


print('Các phần tử chưa soạn:\n',mnlist)
socantim=int(input('chọn số muốn tìm: '))
sortedlist=sorted(mnlist,key=int)

print(
'merge sort:\n',msort(mylist),'\n\
\
quicksort:\n',qsort(m1list),'\n\
\
bubble sort:\n',bsort(m2list),'\n\
\
selection sort:\n',sesort(m3list),'\n\
\
insertion sort:\n',insort(m4list),'\n\
\
heap sort:\n',hsort(m5list),'\n\
\
sort dùng hàm sorted:\n',sortedlist,'\n\
')
print('tìm kiếm nhị phân (binary search):')
tknp(sortedlist,socantim)

print('\ntìm kiếm nhảy (jump search):\n\
số cần tìm ở vị trí:',int(tkn(sortedlist,socantim))+1)

nn=int(input("\nChọn số cọc (tháp hà nội): "))
thn(nn,"1","2","3")
#==================================================================#
