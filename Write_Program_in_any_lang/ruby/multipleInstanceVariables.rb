class Person
  #@age=0
  def initialize(name,age)
    @age,@name=age,name
    puts @name,@age
  end
end
P1=Person.new("Someshwar",20)

