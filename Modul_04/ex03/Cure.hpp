//
// Created by Jeannetta Marian on 8/24/21.
//

#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP


class Cure : public AMateria{
public:
    Cure();
    Cure(Cure const &cure);
    ~Cure();
    AMateria* clone() const;
    Cure &operator=(Cure const &cure);
};


#endif //EX03_CURE_HPP
