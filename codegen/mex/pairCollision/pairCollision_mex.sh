MATLAB="/Applications/MATLAB_R2017a.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/pchvykov/Library/Application Support/MathWorks/MATLAB/R2017a"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for pairCollision" > pairCollision_mex.mki
echo "CC=$CC" >> pairCollision_mex.mki
echo "CFLAGS=$CFLAGS" >> pairCollision_mex.mki
echo "CLIBS=$CLIBS" >> pairCollision_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> pairCollision_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> pairCollision_mex.mki
echo "CXX=$CXX" >> pairCollision_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> pairCollision_mex.mki
echo "CXXLIBS=$CXXLIBS" >> pairCollision_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> pairCollision_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> pairCollision_mex.mki
echo "LDFLAGS=$LDFLAGS" >> pairCollision_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> pairCollision_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> pairCollision_mex.mki
echo "Arch=$Arch" >> pairCollision_mex.mki
echo "LD=$LD" >> pairCollision_mex.mki
echo OMPFLAGS= >> pairCollision_mex.mki
echo OMPLINKFLAGS= >> pairCollision_mex.mki
echo "EMC_COMPILER=clang" >> pairCollision_mex.mki
echo "EMC_CONFIG=optim" >> pairCollision_mex.mki
"/Applications/MATLAB_R2017a.app/bin/maci64/gmake" -B -f pairCollision_mex.mk
