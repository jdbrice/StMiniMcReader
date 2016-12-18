#ifndef ST_MINI_MC_ANALYZER_H
#define ST_MINI_MC_ANALYZER_H

#include "TreeAnalyzer.h"
using namespace jdb;

#include "StMiniMcReader.h"
#include <memory>

class StMiniMcAnalyzer : public TreeAnalyzer
{
public:
	virtual const char* classname() const { return "StMiniMcAnalyzer"; }
	StMiniMcAnalyzer(){}
	~StMiniMcAnalyzer(){}

	virtual void initialize(){
		TreeAnalyzer::initialize();

		rdr = shared_ptr<StMiniMcReader>( new StMiniMcReader( chain ) );
		book->cd();
	}

protected:
	shared_ptr<StMiniMcReader> rdr;


	virtual bool keepEvent(){
		return true;
	}
	virtual void analyzeEvent(){

		TClonesArray * mcTracks, *rcTracks;
		mcTracks = rdr->event->tracks( (Category)MC );
		rcTracks = rdr->event->tracks( (Category)MATCHED );

		TIter iMC(mcTracks);
		StTinyMcTrack * mcTrack;

		while( (mcTrack=(StTinyMcTrack*) iMC.Next()) ) {
			analyzeMcTrack( mcTrack );
		} // while

		TIter iRC(rcTracks);
		StMiniMcPair * rcTrack;

		while( (rcTrack=(StMiniMcPair*) iRC.Next()) ) {
			analyzeRcTrack( rcTrack );
		} // while
	}


	virtual void analyzeMcTrack( StTinyMcTrack* _track ) {
		book->fill( "mc_pT", _track->ptMc() );
	}

	virtual void analyzeRcTrack( StMiniMcPair *_track ){
		book->fill( "rc_pT", _track->ptPr() );
	}


	
};



#endif