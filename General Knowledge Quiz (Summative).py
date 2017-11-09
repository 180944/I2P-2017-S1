score = 0

#starting the game (function)
def start():
    play = print("Welcome to Arthur's General Knowledge quiz!")
    name = input("What is your name? ")
    print("Hi" + "," + " " + name + " " + "welcome to my quiz. ")
    intro = input("Would you like to start the game? Put y or n. ")
    if intro == "n":
        print("Goodbye.")
        exit(play)
    elif intro == "y":
        print("Let's test your knowledge!")

#question 1 (function)
def q1():
    global score
    print("Question 1: What is 1+1?")
    print("a. 0")
    print("b. 2")
    print("c. 3")
    answerq1 = input("Answer: ")
    if answerq1 == "b":
        score += 1
        print("Correct!")
    else:
        print("Sorry the correct answer is b.")
        
#question 2 (function)
def q2():
    global score
    print("Question 2: Where is Hong Kong?")
    print("a. Asia")
    print("b. Europe")
    print("c. North America")
    answerq2 = input("Answer: ")
    if answerq2 == "a":
        print("Correct!")
        score += 1
    else:
        print("Sorry the correct answer is a.")
        
#question 3 (function)
def q3():
    global score
    print("Question 3: What is chocolate made of?")
    print("a. Apples")
    print("b. Cocoa beans")
    print("c. Water")
    answerq3 = input("Answer: ")
    if answerq3 == "b":
        print("Correct!")
        score += 1
    else:
        print("Sorry the correct answer is b.")
        
#question 4 (function)
def q4():
    global score
    print("Question 4: What is the most abundant gas on Earth?")
    print("a. Nitrogen")
    print("b. Oxygen")
    print("c. Carbon Dioxide")
    answerq4 = input("Answer: ")
    if answerq4 == "a":
        print("Correct!")
        score += 1
    else:
        print("Sorry the correct answer is a.")
        
#question 5 (function)
def q5():
    global score
    print("Question 5: What does DNA stand for?")
    print("a. Ribonucleic acid")
    print("b. Nucleic acid")
    print("c. Deoxyribonucleic acid")
    answerq5 = input("Answer: ")
    if answerq5 == "c":
        print("Correct!")
        score += 1
    else:
        print("Sorry the correct answer is c.")
        
#question 6 (function)
def q6():
    global score
    print("Question 6: Where is the Effiel Tower?")
    print("a. Italy")
    print("b. France")
    print("c. Norway")
    answerq6 = input("Answer: ")
    if answerq6 == "b":
        print("Correct!")
        score += 1
    else:
        print("Sorry the correct answer is b.")
        
#question 7 (function)
def q7():
    global score
    print("Question 7: What is the atomic symbol for Iron?")
    print("a. Fe")
    print("b. Pb")
    print("c. I")
    answerq7 = input("Answer: ")
    if answerq7 == "a":
        print("Correct!")
        score += 1
    else:
        print("Sorry the correct answer is a.")
        
#question 8 (function)
def q8():
    global score
    print("Question 8: Where was Ryan Gosling born?")
    print("a. USA")
    print("b. South Africa")
    print("c. Canada")
    answerq8 = input("Answer: ")
    if answerq8 == "c":
        print("Correct!")
        score += 1
    else:
        print("Sorry the correct answer is c.")
        
#question 9 (function)
def q9():
    global score
    print("Question 9: Where was the 2008 Olympics?")
    print("a. Beijing")
    print("b. London")
    print("c. Rio de Janeiro")
    answerq9 = input("Answer: ")
    if answerq9 == "a":
        print("Correct!")
        score += 1
    else:
        print("Sorry the correct answer is a.")
        
#question 10 (function)
def q10():
    global score
    print("Question 10: What is the range of an average person's resting heartrate?")
    print("a. 40-80")
    print("b. 50-90")
    print("c. 60-100")
    answerq10 = input("Answer: ")
    if answerq10 == "c":
        print("Correct!")
        score += 1
    else:
        print("Sorry the correct answer is c.")
        
#question 11 (function)
def q11():
    global score
    print("Question 11: What is π?")
    print("a. 1.57")
    print("b. 3.14")
    print("c. 6.28")
    answerq11 = input("Answer: ")
    if answerq11 == "b":
        print("Correct!")
        score += 1
    else:
        print("Sorry the correct answer is b.")
        
#question 12 (function)
def q12():
    global score
    print("Question 12: What are the names of the 3 daughters from Despicable Me?")
    print("a. Margo, Edith, Agnes")
    print("b. Mandy, Elizabeth, Alice")
    print("c. Monica, Phoebe, Rachel")
    answerq12 = input("Answer: ")
    if answerq12 == "a":
        print("Correct!")
        score += 1
    else:
        print("Sorry the correct answer is a.")
        
#question 13 (function)
def q13():
    global score
    print("Question 13: Who plays Joey Tribianni in Friends?")
    print("a. Matthew Perry")
    print("b. David Schwimmer")
    print("c. Matt Le Blanc")
    answerq13 = input("Answer: ")
    if answerq13 == "c":
        print("Correct!")
        score += 1
    else:
        print("Sorry the correct answer is c.")
        
#question 14 (function)
def q14():
    global score
    print("Question 14: In what year did Queen Elizabeth I pass away?")
    print("a. 1600")
    print("b. 1603")
    print("c. Still alive")
    answerq14 = input("Answer: ")
    if answerq14 == "b":
        print("Correct!")
        score += 1
    else:
        print("Sorry the correct answer is b.")

#question 15 (function)
def q15():
    global score
    print("Question 15: Who is the founder of Snapchat?")
    print("a. Mark Zuckerberg")
    print("b. Evan Spiegel")
    print("c. Kevin Systrom")
    answerq15 = input("Answer: ")
    if answerq15 == "b":
        print("Correct!")
        score += 1
    else:
        print("Sorry the correct answer is b.")

#calculating the final score (funciton)
def total_score():
    global score
    global total
    total = (score / 15 * 100)

#printing the final score and asking if the player wants to start the game again (function)
def percentage():
    global total
    print("Your score is:")
    print(total, "%","!")
    print("Thank you for playing this game. Hope you had fun!")
    answerq16 = input("Would you like to restart the game? Put y or n. ")
    if answerq16 == "y":
        start()
        q1()
        q2()
        q3()
        q4()
        q5()
        q6()
        q7()
        q8()
        q9()
        q10()
        print("You're almost there! 5 questions left!")
        q11()
        q12()
        q13()
        q14()
        print("Last question!")
        q15()
        total_score()
        percentage()

    if answerq16 == "n":
        print("Ok! No problem. Goodbye.")
        input("\n\nPress enter to exit")

#calling the functions
start()
q1()
q2()
q3()
q4()
q5()
q6()
q7()
q8()
q9()
q10()
print("You're almost there! 5 questions left!")
q11()
q12()
q13()
q14()
print("Last question!")
q15()
total_score()
percentage()

