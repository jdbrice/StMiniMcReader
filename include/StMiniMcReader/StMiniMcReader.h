#ifndef ST_MINI_MC_READER_H
#define ST_MINI_MC_READER_H

#include "IObject.h"
using namespace jdb;

#include "StMiniMcEvent.h"

#include "TChain.h"

class StMiniMcReader : public IObject
{
public:
	virtual const char* classname() const { return "StMiniMcReader"; }
	StMiniMcReader() {}
	StMiniMcReader( TChain *_tree ) {
		create( _tree );
	}
	~StMiniMcReader() {}

	virtual void create( TChain * _tree ){
		if ( nullptr == _tree ){
			ERROR( classname(), "Invalid TChain" );
			return;
		}
		b_event = _tree->GetBranch( "StMiniMcEvent" );
		if ( !b_event ){
			ERROR( classname(), "StMiniMcEvent" << " DNE" );
			return;
		}

		// INFO( classname(), "Found " << _bn << " Branch with address : " << b_event );
		_tree->SetBranchAddress( "StMiniMcEvent", &event );

		INFO( classname(), "Set Branch Address for StMiniMcEvent" );
	}
	StMiniMcEvent* event = nullptr;
	
protected:

	TBranch * b_event = nullptr;
	
};



#endif