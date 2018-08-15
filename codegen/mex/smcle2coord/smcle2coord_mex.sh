MATLAB="/Applications/MATLAB_R2017a.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/pchvykov/Library/Application Support/MathWorks/MATLAB/R2017a"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for smcle2coord" > smcle2coord_mex.mki
echo "CC=$CC" >> smcle2coord_mex.mki
echo "CFLAGS=$CFLAGS" >> smcle2coord_mex.mki
echo "CLIBS=$CLIBS" >> smcle2coord_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> smcle2coord_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> smcle2coord_mex.mki
echo "CXX=$CXX" >> smcle2coord_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> smcle2coord_mex.mki
echo "CXXLIBS=$CXXLIBS" >> smcle2coord_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> smcle2coord_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> smcle2coord_mex.mki
echo "LDFLAGS=$LDFLAGS" >> smcle2coord_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> smcle2coord_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> smcle2coord_mex.mki
echo "Arch=$Arch" >> smcle2coord_mex.mki
echo "LD=$LD" >> smcle2coord_mex.mki
echo OMPFLAGS= >> smcle2coord_mex.mki
echo OMPLINKFLAGS= >> smcle2coord_mex.mki
echo "EMC_COMPILER=clang" >> smcle2coord_mex.mki
echo "EMC_CONFIG=optim" >> smcle2coord_mex.mki
"/Applications/MATLAB_R2017a.app/bin/maci64/gmake" -B -f smcle2coord_mex.mk
