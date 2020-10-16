class Shape
    attr_accessor:h,:w
    def initialize(h,w)
        self.h=h
        self.w=w        
    end
    def +(other)
        Shape.new(self.h+other.h,self.w+other.w)
    end
end
#
s=Shape.new(8,9)
s1=Shape.new(10,11)
c=s+s1
puts c.h,c.w
    