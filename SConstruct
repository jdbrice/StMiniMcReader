#!python
import subprocess
import os

# SConscript('color_SConscript')
# Import( 'env' )

ROOTCFLAGS    	= subprocess.check_output( ['root-config',  '--cflags'] ).rstrip().split( " " )
ROOTLDFLAGS    	= subprocess.check_output( ["root-config",  "--ldflags"] )
ROOTLIBS      	= subprocess.check_output( ["root-config",  "--libs"] )
ROOTGLIBS     	= subprocess.check_output( ["root-config",  "--glibs"] )
ROOTLIBPATH 	= subprocess.check_output( ["root-config", "--libdir" ] )
ROOT_SYS 		= os.environ[ "ROOTSYS" ]
JDB_LIB			= os.environ[ "JDB_LIB" ]
JDB_LIB_NAME 	= 'libRooBarb.a'

cppDefines 		= {}
cppFlags 		= ['-Wall' ]#, '-Werror']
cxxFlags 		= ['-std=c++11' ]
cxxFlags.extend( ROOTCFLAGS )

paths 			= [ '.', 			# dont really like this but ended up needing for root dict to work ok
					'include', 
					JDB_LIB + "/include", 
					ROOT_SYS + "/include",
					
					]
paths.extend( ["include/StMiniLib", "include/StMiniMcReader"] )



########################### Pico dictionary creation ##########################
if "LD_LIBRARY_PATH" in os.environ :
	LD_LIBRARY_PATH = os.environ[ "LD_LIBRARY_PATH" ]
else :
	LD_LIBRARY_PATH = ""



pico_env = Environment(ENV = {'PATH' : os.environ['PATH'], 'ROOTSYS' : os.environ[ "ROOTSYS" ], 'LD_LIBRARY_PATH' : LD_LIBRARY_PATH })
rootcint = Builder( action='rootcint -v4 -f $TARGET -c $_CPPINCFLAGS $SOURCES.file' )  
pico_env.Append( BUILDERS 		= { 'RootCint' : rootcint } )

# hack to make the rootcint use abs path to headers
pico_env[ "_CPPINCFLAGS" ] = "-I" + Dir(".").abspath + "/" + str( " -I" + Dir(".").abspath + "/").join( map( str, Glob( "#include/*" ) ) ) 
pico_env[ "_CPPINCFLAGS" ] = pico_env[ "_CPPINCFLAGS" ] + " -I" + Dir(".").abspath + "/" + "include/"

pico_dict = pico_env.RootCint( "src/StMiniLib/PicoDictionary.cpp", [Glob( "include/StMiniLib/*.h" ), "include/StMiniLib_LinkDef.h"] )
# Clean( pico_dict, "src/TreeData/CintDictionary_rdict.pcm" )
pico_env.Alias( 'pico_dict', pico_dict )

########################## Project Target #####################################
# common_env = env.Clone()
common_env =  Environment()
common_env['ENV']['TERM'] = os.environ['TERM']
common_env.Append( ENV  = {'LD_LIBRARY_PATH' : LD_LIBRARY_PATH} )

common_env.Append(CPPDEFINES 	= cppDefines)
common_env.Append(CPPFLAGS 		= cppFlags)
common_env.Append(CXXFLAGS 		= cxxFlags)
common_env.Append(LINKFLAGS 	= cxxFlags ) #ROOTLIBS + " " + JDB_LIB + "/lib/libJDB.a"
common_env.Append(CPPPATH		= paths)
common_env.Append(LIBS 			= [ "libRooBarbCore.a", "libRooBarbConfig.a", "libRooBarbTasks.a", "libRooBarbRootAna.a", "libRooBarbUnitTest.a", "libRooBarbExtra.a" ] )
common_env.Append(LIBPATH 		= [ JDB_LIB + "/lib/" ] )

common_env[ "_LIBFLAGS" ] = common_env[ "_LIBFLAGS" ] + " " + ROOTLIBS + " "
# common_env[ "_LIBFLAGS" ]" " + JDB_LIB + "/lib/" +JDB_LIB_NAME  +

jdb_log_level = ARGUMENTS.get( "ll", 60 )
common_env.Append(CXXFLAGS 		= "-DJDB_LOG_LEVEL=" + str(jdb_log_level) )

target = common_env.Program( target='bin/app', source=[Glob( "src/*.cpp" ), Glob( "src/*/*.cpp" )] )


# Depends( target, JDB_LIB + "/lib/" + JDB_LIB_NAME )
Depends( target,  pico_dict )

# set as the default target
Default( target )


