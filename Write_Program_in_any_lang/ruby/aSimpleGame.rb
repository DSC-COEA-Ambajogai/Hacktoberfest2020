class Player
    attr_accessor :name,:helth,:power
    def initialize(name,helth,power)
        @name=name
        @helth=helth
        @power=power 
    end
    def isAlive()
        @helth>0
    end
    def hit(opponant)
        opponant.helth-=self.power
    end
    def to_s
        puts "#{@name}: Health =#{@helth}  :POWER =#{@power}"
    end
end
def show_info(*p)
    p.each{|x| puts x}
end
def fight(p1,p2)
    while p1.isAlive && p2.isAlive
        p1.hit(p2)
        p2.hit(p1)
        show_info(p1,p2)
    end
    if p1.isAlive
        puts "#{p1.name} WON"
    elsif p2.isAlive
        puts "#{p2.name} WON"
    else
        puts "TIE!!"
    end
end


p1=Player.new("Player 1" , 1+rand(100) , 1+rand(20))
p2=Player.new("Player 2" , 1+rand(100) , 1+rand(20))

show_info(p1,p2)
 puts "LETS FIGHT!!!"
 fight(p1,p2)