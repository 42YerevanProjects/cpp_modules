/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:35:08 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/28 15:37:35 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource {
	private:
		AMateria	*materias[4];
		int			size;
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& other);
		~MateriaSource(void);

		MateriaSource		&operator=(const MateriaSource& other);

		virtual void		learnMateria(AMateria *m);
		virtual AMateria	*createMateria(const std::string& type);
		void				printMaterias(void) const;
};
