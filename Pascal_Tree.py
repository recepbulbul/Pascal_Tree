def faktoriyel(i):
    fakti=1
    for k in range(1,i+1):
        fakti*=k
        
    return fakti
        
def sayiac(i,j):
    acilansayi = i
    for k in range(1,j):
        if i > 1:
            i-=1
        acilansayi*=i
    return acilansayi
       
    
    
sayi = int(input("Sayi Gir: "))
print(sayi)
bosluk = sayi*2   
for i in range(sayi+1):
    for j in range(bosluk):
        print(" ",end='')
    bosluk-=1
    for j in range(i+1):
        if j == 0 or j == i:
            print(1,"",end='')
        else:
            print(int(sayiac(i,j)/faktoriyel(j)),end=' ')
    print()
        