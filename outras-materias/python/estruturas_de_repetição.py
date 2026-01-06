# Iterar sobre cada pixel
for i in range(imagem.width):
    for j in range(imagem.height):
        r, g, b = pixels[i, j]

        r = min(255, r + aumento)
        g = min(255, g + aumento)
        b = min(255, b + aumento)

        pixels[i, j] = (r, g, b)
        