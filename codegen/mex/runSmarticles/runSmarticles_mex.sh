MATLAB="/Applications/MATLAB_R2017a.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/pchvykov/Library/Application Support/MathWorks/MATLAB/R2017a"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for runSmarticles" > runSmarticles_mex.mki
echo "CC=$CC" >> runSmarticles_mex.mki
echo "CFLAGS=$CFLAGS" >> runSmarticles_mex.mki
echo "CLIBS=$CLIBS" >> runSmarticles_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> runSmarticles_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> runSmarticles_mex.mki
echo "CXX=$CXX" >> runSmarticles_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> runSmarticles_mex.mki
echo "CXXLIBS=$CXXLIBS" >> runSmarticles_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> runSmarticles_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> runSmarticles_mex.mki
echo "LDFLAGS=$LDFLAGS" >> runSmarticles_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> runSmarticles_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> runSmarticles_mex.mki
echo "Arch=$Arch" >> runSmarticles_mex.mki
echo "LD=$LD" >> runSmarticles_mex.mki
echo OMPFLAGS= >> runSmarticles_mex.mki
echo OMPLINKFLAGS= >> runSmarticles_mex.mki
echo "EMC_COMPILER=clang" >> runSmarticles_mex.mki
echo "EMC_CONFIG=optim" >> runSmarticles_mex.mki
"/Applications/MATLAB_R2017a.app/bin/maci64/gmake" -B -f runSmarticles_mex.mk
