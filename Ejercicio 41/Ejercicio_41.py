#Ejercicio 41
#Alma Leticia Douglas Gonzales Guilbert

producto = input("Nombre del producto: ")
precio = float(input("Precio unitario: "))
unidad = int(input("Cantidad de unidades: "))

total = precio * unidad

print("Producto: ", producto)
print(f"Precio Unitario: {precio:09.2f}")
print(f"Unidades: {unidad:03d}")
print(f"Total: {total:011.2f}")
