class Animal
    def initialize name
        @name=name
    end
end
class Cat<Animal
    def initialize name,age
        super(name)
        @age=age
    end
    def to_s()
        puts "#{@name} is #{@age} years old"
    end
end

c=Cat.new("kitty",5)
puts c