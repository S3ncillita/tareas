"""def contando():

  
    Mate = str(input("Introduzca la materias a guardar: "))
    lista = ["Matematicas","Fisica","Quimica"]
    lista.insert(len(lista),Mate)
    contar = 0
    for Mate in lista  :
  
     contar+= 1
    print(lista)
    return contando()
contando()    
  """












def datos(dato):
    materias.insert(len(materias),dato)
    return

def eliminar():
    materias.pop()
    return

def listar():
    print(materias)


materias =["Matematica","Quimica"]
elegir=0

while True:
    elegir = int(input("Elija la opcion \n 1-Agregar\n 2-Eliminar\n 3-Listar\n"))

    if elegir == 1:
        materia = str(input("Introduce la materia que desea agregar: "))
        datos(materia)
        print(materias)
    if elegir == 2:
        eliminar()
    if elegir == 3:
        listar()










 