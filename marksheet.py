name = input('Enter your name: ')
roll_no = input('Enter your roll number: ')

sindhi_marks = int(input('Enter the marks obtained in Sindhi out of 75: '))

passed_subjects = 0

if sindhi_marks > 40:
    passed_subjects = 1
english_marks = int(input('Enter the marks obtained in English out of 75: '))
if english_marks > 40:
    passed_subjects += 1
pst_marks = int(input('Enter the marks obtained in Pakistan Studies out of 75: '))
if pst_marks > 40:
    passed_subjects += 1
computer_marks = int(input('Enter the marks obtained in Computer out of 85: '))
if computer_marks > 40:
    passed_subjects += 1
chemistry_marks = int(input('Enter the marks obtained in Chemistry out of 75 '))
if chemistry_marks > 40:
    passed_subjects += 1

total_marks = (75*4)+85
total_obtained_marks = sindhi_marks + english_marks + pst_marks + computer_marks + chemistry_marks

percentage = (total_obtained_marks / total_marks) * 100

if percentage >= 80.0:
    grade = 'A one'
elif 79.0 >= percentage >= 70.0:
    grade = 'A'
elif 69.0 >= percentage >= 60.0:
    grade = 'B'
elif 59.0 >= percentage >= 50.0:
    grade = 'C'
elif 49.0 >= percentage >= 40.0:
    grade = 'D'
else:
    grade = 'F'

print('\t\t\t\t\t\t\tMARK   SHEET\n\t\t\t\t\t\t\t------------')
print('\nName:                       '+name)
print('Roll Number:                '+roll_no)
print('\n\nMarks Obtained in Sindhi:           '+str(sindhi_marks))
print('\nMarks Obtained in Pakistan Studies: '+str(pst_marks))
print('\nMarks Obtained in Computer:         '+str(computer_marks))
print('\nMarks Obtained in Chemistry:        '+str(chemistry_marks))
print('\nMarks Obtained in English:          '+str(english_marks))
print('\n\nTotal Marks Obtained:       '+str(total_marks))
print(f'Percentage:                 {percentage:.2f}'+'%')
print('Grade:                      '+grade)
print('Number of subjects cleared: '+str(passed_subjects))