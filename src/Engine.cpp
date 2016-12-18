

// RooBarb
#include "XmlConfig.h"
#include "TaskEngine.h"
using namespace jdb;

// STL
#include <iostream>
#include <exception>


#include "StMiniMcAnalyzer.h"


int main( int argc, char* argv[] ) {


	TaskFactory::registerTaskRunner<StMiniMcAnalyzer>( "StMiniMcAnalyzer" );
	
	TaskEngine engine( argc, argv );

	return 0;
}
