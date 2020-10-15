class Person
  def initialize(name,age)
    @name,@age=name,age
  end
  def to_s()
    puts "#{@name} is #{@age} years old."  
  end

end
p=Person.new("someshwar",20)
puts p
