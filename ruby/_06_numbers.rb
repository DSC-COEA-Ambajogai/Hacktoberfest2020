#handling numeric data 

puts 5 #simply put number
puts 8.88 #decimals 
puts -9.99 #negatives also
puts 7+99 #it will calculate for us
puts 2**3  #2 raised to 3
puts 10%3 # 10 mod 3 

#we can store number in variable

num=-100.21
puts ("number is :"+num.to_s)   # first convert number to string then concatenate and print 
puts num.abs()      #absolute value 
puts num.round()    #nearest  whole num 
puts num.ceil()     # ceiling function 
puts num.floor() #floor function

#math class 


puts Math.sqrt(num.abs()) # sqrt == square root 
#priority 
#float -> int->character

puts 1.0*1      #stay aware  of data types always