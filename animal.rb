class Animal

	def dog_sound
		puts "woff=woff"
	end

	def lion_sound
		puts "roar"
	end

	def elephant_sound
		puts "trumph"
	end

	def rabbit_sound
		puts "squeak"
	end

end

class Dog < Animal

end

dog = Dog.new
puts dog.dog_sound