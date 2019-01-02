#code
word = input()

if(word.isupper()):
    print(word.lower())
elif(word[0].islower() and len(word)==1):
    print(word.upper())
elif(word[0].islower() and word[1:].isupper()):
    print(word[0].upper(),word[1:].lower(),sep='')
else:
    print(word)