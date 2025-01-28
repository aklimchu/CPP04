#pragma once

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void); // Canonical
		Cure(Cure const & src); // Canonical
		~Cure(void); // Canonical

		Cure & operator=(Cure const & rhs); // Canonical

		Cure* clone() const;
};