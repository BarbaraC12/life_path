#include "InfoClient.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

InfoClient::InfoClient( std::string name1, std::string name2, std::string name3, std::string LastName1, std::string LastName2, int day, int month,int year )
	: _firstName({name1, name2, name3}), _motherLastName(LastName1),_fatherLastName(LastName2),_dayBirth(day),_monthBirth(month),_yearBirth(year) {
		
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

InfoClient::~InfoClient( void ){

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

InfoClient &				InfoClient::operator=( InfoClient const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, InfoClient const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


int				InfoClient::pierreBase( std::string* lastName, std::string motheName, std::string fatherName ){

	int		ret( 0 );

	return ret;
}

int				InfoClient::pierreSommet( std::string* lastName, std::string motheName, std::string fatherName ){

	int		ret( 0 );

	return ret;
}

int				InfoClient::pierreCheminVie ( int day, int month, int year ){

	int		ret( 0 );

	return ret;
}

int				InfoClient::pierreAppel( std::string* lastName, std::string motheName, std::string fatherName ){

	int		ret( 0 );

	return ret;
}

int				InfoClient::pierrePersonnalite( std::string* lastName, std::string motheName, std::string fatherName ){

	int		ret( 0 );

	return ret;
}

int				InfoClient::pierreExpression( int pierreAppel, int pierrePersonnalite ){

	int		ret( 0 );

	return ret;
}

int				InfoClient::pierreTouche( int pierreExpression, int pierreAppel, int pierrePersonnalite, int pierreSommet, int pierreBase ){

	int		ret( 0 );

	return ret;
}

int				InfoClient::pierreVoeux( std::string* lastName, std::string motheName, std::string fatherName ){

	int		ret( 0 );

	return ret;
}

int				InfoClient::reductValue( int toReduce ){

	int		ret( 0 );

	return ret;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

static bool		isVowel( char const c ) {

	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' 
		|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y');
}

char			InfoClient::firstLetter( char const* params ) {

	return params[0];
}

char			InfoClient::lastLetter( char const* params ) {

	return params[strlen(params)];
}

char			InfoClient::firstWovel( char const* params ) {

	uint	id(0);
	while (params[id]) {
		if (isVowel(params[id]))
			break ;
		++id;
	}
	return params[id];
}

char *			InfoClient::wovel( char const* params ) {
	
	char *		l;

	return l;
}

char *			InfoClient::consonant( char const* params ) {
	
	char *		l;

	return l;
}


/* ************************************************************************** */