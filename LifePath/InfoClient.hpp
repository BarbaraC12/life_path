#ifndef INFOCLIENT_HPP
# define INFOCLIENT_HPP

# include <iostream>
# include <cstring>
# include <string>

class InfoClient {

		std::string		_firstName[3];
		std::string		_motherLastName;
		std::string		_fatherLastName;
		int				_dayBirth;
		int				_monthBirth;
		int				_yearBirth;

	public:

		InfoClient( std::string name1, std::string name2, std::string name3, std::string LastName1, std::string LastName2, int day, int month, int year );
		~InfoClient( void );

		InfoClient &		operator=( InfoClient const & rhs );

		int				pierreBase( std::string* lastName, std::string motheName, std::string fatherName );
		int				pierreSommet( std::string* lastName, std::string motheName, std::string fatherName );
		int				pierreCheminVie ( int day, int month, int year );
		int				pierreAppel( std::string* lastName, std::string motheName, std::string fatherName );
		int				pierrePersonnalite( std::string* lastName, std::string motheName, std::string fatherName );
		int				pierreExpression( int pierreAppel, int pierrePersonnalite );
		int				pierreTouche( int pierreExpression, int pierreAppel, int pierrePersonnalite, int pierreSommet, int pierreBase );
		int				pierreVoeux( std::string* lastName, std::string motheName, std::string fatherName );
		
		int				reductValue( int toReduce );

		char			firstLetter( char const* params );
		char			lastLetter( char const* params );
		char			firstWovel( char const* params );
		char*			wovel( char const* params );
		char*			consonant( char const* params );

		typedef struct s_tabCalculPierre	t_calculPierre;

		struct s_tabCalculPierre
		{
			std::string letters;
			int			value;
		};
		
		t_calculPierre tabCalcul[9] = {
			{"AJSÉÈÊÇajséèêç", 1},
			{"BKTÖbktö", 2},
			{"CLUÙÛcluùû", 3},
			{"DMVdmv", 4},
			{"ENWÎËenwîë", 5},
			{"FOXÔÄfoxôä", 6},
			{"GPYgpy", 7},
			{"HQZÜhqzü", 8},
			{"IRÂÀÏirâàï", 9}
		};


};

std::ostream &			operator<<( std::ostream & o, InfoClient const & i );

#endif /* ****************************************************** INFOCLIENT_H */