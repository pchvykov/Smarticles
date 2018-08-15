% Matlab coder - create C++ code for some functions
%%
codegen lineSegmentIntersect -args {coder.typeof(0,[3,4],[1,0]),coder.typeof(0,[3,4],[1,0])}
%%
codegen smcle2coord -args {coder.typeof(0,[2,5],[0,0])}
%%
codegen pairCollision -args {coder.typeof(0,[2,5]),true,[0,0]',zeros(2)}
%%
% codegen resolveCollisions -args {coder.typeof(0,[1000,5],[1,0]),true,coder.typeof(0,[1000,1],[1,0]),coder.typeof(0,[1000,2],[1,0])}
codegen resolveCollisions -args {coder.typeof(0,[1000,5],[1,0]),true,coder.typeof(0,[1000,1],[1,0]),coder.typeof(0,[9,1000,1000],[0,1,1])}
%%
codegen runSmarticles -args {0,0,0,coder.typeof(0,[1000,1],[1,0]), coder.typeof(0,[1000,1],[1,0]), coder.typeof(0,[1000,1],[1,0])}