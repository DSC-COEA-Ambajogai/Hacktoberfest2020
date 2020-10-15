class Person
  def initialize(name)
    @name=name
  end 
  def get_name()
    puts @name
  end
  def set_name(name)
    @name=name
  end
end
P1=Person.new("Someshwar")
P1.get_name

P1.set_name("xyz")
P1.get_name
