waktu= int(input())
hari= int (waktu // 86400)
sisa= int (waktu % 86400)
jam= int (sisa // 3600)
hour= int (sisa % 3600)
menit= int (hour// 60)
detik= int (hour % 60)
if waktu <= 86400:
    print("%.2d:%.2d:%.2d"% (jam, menit, detik))
else:
    print("%d hari %.2d:%.2d:%.2d"% (hari, jam, menit,detik))
