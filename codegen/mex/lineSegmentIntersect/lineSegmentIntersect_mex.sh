MATLAB="/Applications/MATLAB_R2017a.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/pchvykov/Library/Application Support/MathWorks/MATLAB/R2017a"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for lineSegmentIntersect" > lineSegmentIntersect_mex.mki
echo "CC=$CC" >> lineSegmentIntersect_mex.mki
echo "CFLAGS=$CFLAGS" >> lineSegmentIntersect_mex.mki
echo "CLIBS=$CLIBS" >> lineSegmentIntersect_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> lineSegmentIntersect_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> lineSegmentIntersect_mex.mki
echo "CXX=$CXX" >> lineSegmentIntersect_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> lineSegmentIntersect_mex.mki
echo "CXXLIBS=$CXXLIBS" >> lineSegmentIntersect_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> lineSegmentIntersect_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> lineSegmentIntersect_mex.mki
echo "LDFLAGS=$LDFLAGS" >> lineSegmentIntersect_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> lineSegmentIntersect_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> lineSegmentIntersect_mex.mki
echo "Arch=$Arch" >> lineSegmentIntersect_mex.mki
echo "LD=$LD" >> lineSegmentIntersect_mex.mki
echo OMPFLAGS= >> lineSegmentIntersect_mex.mki
echo OMPLINKFLAGS= >> lineSegmentIntersect_mex.mki
echo "EMC_COMPILER=clang" >> lineSegmentIntersect_mex.mki
echo "EMC_CONFIG=optim" >> lineSegmentIntersect_mex.mki
"/Applications/MATLAB_R2017a.app/bin/maci64/gmake" -B -f lineSegmentIntersect_mex.mk
