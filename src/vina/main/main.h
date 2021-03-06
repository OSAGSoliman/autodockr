#ifndef VINA_MAIN_H
#define VINA_MAIN_H
#include <string>
#include <boost/optional.hpp>

int vina_cpp(const boost::optional<std::string>& rigid_name_opt,
	const boost::optional<std::string>& flex_name_opt,
	std::string ligand_name,
	const boost::optional<std::string>& out_name);

#endif
