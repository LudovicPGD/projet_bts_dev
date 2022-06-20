vaccin = ["Astrazeneca", "Pfizer", "Aucun"]
print(vaccin)

while True: 
    choixvaccin = input("rentrer un vaccin: ").lower()
    if choixvaccin == "astrazeneca":
        dose = int(input("Nombre de dose: "))
        while dose < 1 or dose > 1:
            dose = int(input("Nombre de dose: "))
        print("Tu est vacciné avec le {} avec {} dose".format(choixvaccin, dose))
        break
    if choixvaccin == "pfizer":
        dose = int(input("Nombre de dose: "))
        while dose < 1 or dose > 3:
            dose = int(input("Nombre de dose: "))
        print("Tu est vacciné avec le {} avec {} dose".format(choixvaccin, dose))
        break
    if choixvaccin == 'aucun':
        print("Tu n'est pas vacciné")
        break