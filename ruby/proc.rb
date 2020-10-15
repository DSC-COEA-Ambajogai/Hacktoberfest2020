greet=Proc.new do |x|
    puts "Welcome #{x}"
end
goodbye=Proc.new do |x|
    puts "Goodbye #{x}"
end
def say(arr,proc)
    arr.each{|x| proc.call x}
end
people=["Somu","shashu"]
say(people,greet)
say(people,goodbye)