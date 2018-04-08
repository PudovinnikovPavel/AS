visota = float (input("Высота бака - ")) 
diametr = float (input("Диаметр бака - ")) 
ploshad = float (input("Площадь, которую можно окрасить одной банкой краски - ")) 
import math as m 
pk4 = (m.pi * diametr**2) 
ps2 = visota * diametr * m.pi *2 
res = pk4 + ps2 
res = res / ploshad 
res = int(res) + 1 
print( "Банок потребуется :", res)