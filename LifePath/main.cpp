#include "InfoClient.hpp"
#include <cstring>

std::string::size_type sz;

int	main( void ) {
	
	char		buff[8][150] = {""};
	uint		index(0);
	bool		good(false);
	bool		parsingFinish(false);

	while ( !parsingFinish ){
		if ( std::cin.eof() )
			break ;
		good = false;
		while ( !good ) {
			std::cin.getline(buff[index], 150);
			if ( index < 5 ) {
				for ( int i(0); buff[index][i] != '\0' ; i++ ) {
					if (!isalpha(buff[index][i]))
						break ;
					if ( i == strlen(buff[index]) )
						good = true;
				}
			}
			else if ( index < 8 ) {
				for ( int i(0); buff[index][i] != '\0' ; i++ ) {
					if (!isdigit(buff[index][i]))
						break ;
					if ( i == strlen(buff[index]) && index < 7 && i == 1 )
						good = true;
					else if ( i == strlen(buff[index]) && index == 7 && i == 3 )
						good = true;
				}
			}
		}
		if (index < 7)
			index++;
		else
			parsingFinish = true;
	}
	if ( parsingFinish )
		InfoClient	client( buff[0], buff[1], buff[2], buff[3], buff[4], 
			atoi(buff[5]), atoi(buff[6]), atoi(buff[7]) );
	

	return 0;
}