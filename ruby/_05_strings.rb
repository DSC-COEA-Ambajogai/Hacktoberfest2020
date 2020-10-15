# quotes are used to denote string

puts "giraffe \" Academy"
puts "giraffe \n Academy" #escape sequences
phrase="this is  phrase"
puts phrase
puts phrase.upcase() #uppercase function
puts phrase.downcase() #lowecase
puts phrase.strip()  #remove white spaces
puts phrase.length() #to get length of string
puts phrase.include?"is"  #to check subset of string 
puts phrase[0] #slicing / indexing in ruby
                #indexing starts with 0
puts phrase[0,5]    #slicing a range of characters- gives 0 to n-1
puts phrase.index("is")     #index of that given sub string 
puts phrase.index("phrase")