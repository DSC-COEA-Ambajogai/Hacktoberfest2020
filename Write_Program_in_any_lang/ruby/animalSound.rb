class AnimalSound
  @animal=""
  def initialize(animal)
    @animal=animal
  end
  def sound
    puts @animal

  end
end
dog=AnimalSound.new("WOOF")
cat=AnimalSound.new("MIAO")
dog.sound
cat.sound
