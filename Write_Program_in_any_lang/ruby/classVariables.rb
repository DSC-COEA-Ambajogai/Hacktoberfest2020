class Person
  @@count=0
  def initialize()
    @@count+=1
  end
  def self.get_count
    puts @@count
  end
end
p=Person.new
p1=Person.new
Person.get_count
