# cook your dish here
word = input()

word_list = list(word)
word_list[0] = word_list[0].upper()

for i in range(len(word_list)):
    print(word_list[i],end='')