D = float( input ( "Enter the diameter:")) #Ввести диаметр
H = float( input ( "Enter the height:"))   #Ввести высоту
S = float( input ( "Enter the area of the jar(1 piece):")) #Ввести площадь 1 банки
W = 2*3.14*(D/2)*(2*H+(D/2))
R = round(W/S)
print('Need cans quantity:', R)    #Результат