MATLAB="/Applications/MATLAB_R2017a.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/pchvykov/Library/Application Support/MathWorks/MATLAB/R2017a"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for resolveCollisions" > resolveCollisions_mex.mki
echo "CC=$CC" >> resolveCollisions_mex.mki
echo "CFLAGS=$CFLAGS" >> resolveCollisions_mex.mki
echo "CLIBS=$CLIBS" >> resolveCollisions_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> resolveCollisions_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> resolveCollisions_mex.mki
echo "CXX=$CXX" >> resolveCollisions_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> resolveCollisions_mex.mki
echo "CXXLIBS=$CXXLIBS" >> resolveCollisions_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> resolveCollisions_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> resolveCollisions_mex.mki
echo "LDFLAGS=$LDFLAGS" >> resolveCollisions_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> resolveCollisions_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> resolveCollisions_mex.mki
echo "Arch=$Arch" >> resolveCollisions_mex.mki
echo "LD=$LD" >> resolveCollisions_mex.mki
echo OMPFLAGS= >> resolveCollisions_mex.mki
echo OMPLINKFLAGS= >> resolveCollisions_mex.mki
echo "EMC_COMPILER=clang" >> resolveCollisions_mex.mki
echo "EMC_CONFIG=optim" >> resolveCollisions_mex.mki
"/Applications/MATLAB_R2017a.app/bin/maci64/gmake" -B -f resolveCollisions_mex.mk
