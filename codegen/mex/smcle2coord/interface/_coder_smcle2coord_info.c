/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_smcle2coord_info.c
 *
 * Code generation for function '_coder_smcle2coord_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "smcle2coord.h"
#include "_coder_smcle2coord_info.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[4] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 4, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 1);
  emlrtSetField(xEntryPoints, 0, "Name", mxCreateString("smcle2coord"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", mxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", mxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", mxCreateString("9.2.0.556344 (R2017a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[19] = {
    "789ced5dcb6fe3c619e7a69b4d5a605b3740d25df4b509d200cd02a66ccbb6921e6abd2cc96bd97a50eb9583c2a6a8914c6bf830493d4fbef59a5e7a2ad0432f"
    "2d82a2db53b7400f2d7ae93fd01c722fd053d143d3734851635332c792a53165523380407ffe8cf9cdf7f337df37c37988b997c9de6318e69be6875119e6d52f",
    "987e79687e14e609b3648bcc6bcc70b1f4df607e74a1bf37783e72caeae5dfbfcedcefcb0f47f4bf1ac882221ba063d8021465b0d7942a4033059997c0453555"
    "4512655e36b8ae0a180de80a6c816a5f531321e04409ec2a0e212d9a82b4ed505d0896cafa397e028446b12931da897ed95ce81418c48f595e39ecb7da8fecbf",
    "efc28f59ce47f939c0f0b3349091fe93e4cfd8920e349d55859356b7a1b4d884223425201b3a9b52943a04094d6c01369be1d842b2988c16e269d6240d68a2a0"
    "b34589d70c5180406775c97cac0a8aa25597a50b3b8e87db7961c703773baefc9f879e0e3bbecebce9901f6db9e28de7ed0ade9b18bca5019ea455c5965805a4",
    "f01e38e521bc077db9aa342b105cfac5cb19f19e61f16c19e93fc9ecbe305d23aaaa5014784354649dcd46b9dd68eca8b01a5ad9e4977955650d458115a5c302"
    "09b250acb0126f40bec22aaace22a2966d100ffde1f1ee93cfa3e3fe3f64fd0f63dfede0fdf1e0f13fe7665f078337a9ffbd8dc143fe87f49df2e161b21e15b5",
    "b3704b4aae73e568fe9477b4233706675c3b18a7ec62e750fd2af9fa693f766fffb0dffdf7a7a4e2ec1b18bc254b63ca032bc7f6e3bb1ad777b078b68cf433fb"
    "037207c9aecf3b7f38ffecbbf9f9c5bda0e37915d723ed7cadf422bcb1996ec1c2478948645729090c8deb77a51f23c869fbf16b4e79c8ef86f9b0cb075bf6f3",
    "bd8bf1fb39a6fe49f9fb21061ff187f4825205dab2684e06359987cba21e6b8ad0c8c88399cdd8b8765b79e0afcefaa6f09f3216cf9691fee6fe637d9ef66963"
    "9f22ded851de903b799917fef4e517342fdcd5bcf00e060ff923d2efb7cee2d15aba15e1f2e1ae9094e4d5ed4398a679e1aee485634cfbc8fadd87ee79600abe",
    "9e60f0105f483f9207748187a0a3c6154935c93323b35ff3c02116cf96919e501eb8c2db1cfce7b379be17093a9e5779a0d229ef156a7ce3793efb6c6fa7008c"
    "62a8b84ff3c082e5818fb748f9dd5b183cc417d28fe401d378fbf7f38affb3fac92e16cf96919e50fc37f9b23dc5c371ff6fe8fb20ffc7fb6cc9089533075159",
    "2e15c49c9edfabebdc593238f1fe86ebb857eabf2bebb843fec0dcdcffbe86b103bd177ac438cbfb5bf6f3bdc113b3becbdc9c4f5c3b962c8d29eba2dc97e7b5"
    "0ef0db19f1d2583c5b46fa99c60700d69a326b52b52c79382ef85be9031aeffd1eef793e1d3b6c37d2e2f36cbc09633139b199db4b0427ded3fecb5ce36fef13",
    "7bbff318838778427a97f73bbcb68ca2fcece3fbd1826b0f2aa4c605dc183ca42734be7f6a1367fb8cd38e634c3b098ef3b77ef93b1af7fd1ef743ebe98d48bc"
    "7db01a8ab5db30a4c270a2de8bd1b8bf6871ff53677d53f0f4630c1ee209e947e2be490aec16fb316cbb290b166f19390779016df91db7fe3d69fbbe35a67d48",
    "5f1bb4e2e88497abf072dfd13f66c417c6e0233da1bc80e775f0e2d0433ffbf23f741dd8f77922dd4ec40b9d486f4de1d36067db8808fbb5582a387962a87f4f"
    "c1e302f76fb3ac79b6cf5fd47595d774dfeef3dfc7e2d932d2cf349eb028b24614882c4fcf7d9cff5af83f8df77e8ff7ebb0906e2bd9486aad94ae6f0af1de4e",
    "21530cd0bc80c67b77bb26f3c77562ef8bbe8fc1433c22fdc8bca1a9839c19e3142d6e126a9d1a24b50e71df290fb5c73ebf289cf0d6a144efd791c8f8d1306f"
    "dee685c8df3fa479c1ef79c1a85413bc1089e563f19eb4dfd5b410686cd075e105eccf56b91cf7cfea7fb873e38837a4c7e501bfae1714c6e0213d697f99c3fe",
    "314dfe1f8dff7e8fffe5ed527b7343d3d73eeab50a995a395604db7280f681d27981bb5d93f9e3c7c4e6053fc0e0211e91de64e5c864e3c80c695051d423a505"
    "b41a54da478275afc7fcd69167f5237e0c1ed2cfb6ee64bbd53504cee3dcd85ffef57aa0ef89982b9e5779427f96ec2413bd5e6ea7b31aceae86e2f9e84a2840",
    "f3847f63ea9f94c79f63ea473c22fdadf7ef77afff83a3130055a0799c4752c4d613c6bdcf11f59a754714b1fef11d2c9e2d23fde83967b90a3a19d970dfb7c0"
    "dcbc1da931ed40fae9fcab2676405555cce6b31681dece3b5fd173c5fecf0fc5ae2a4aeb67858315b1520d670ef3b9ec4a8bee375d84fe6b96d0457c47bf9a96",
    "a7874ed98527a41775d93e5361583707ce6fbde0a5b3be29eccd3965177b919e805f3808f3745fdaefe97961ffc7f7d45aa35b3cab8b30cec51b85b3589d6b94"
    "92018aef74fc3f6c17597fcd101bff8fdbdf635a2ef11d72e7cabcce079edc3708a0f9036b53e5fd7bc53fd07ce0ff7c003b1b872074ba1f2a89b110d7eeadf0",
    "61980bd0ba01cd07c37611f5d7736ff38175088de68389f2013a7646f34140f03cdb5f9ac936d4c61ee818e96cb19e4b3dcba54290ee2fbda87fb1d7917f12b8"
    "f3c893e69fd1f306f43cb2cbd3d56fe879e4dbc4a3e791c9d44fef1db28b5fee1d1214fb8b80e675decc47e7d74daae8bd4341c1f32adeab5ce77473dfc86d6c",
    "eef35cf194d3525d410e50bca7fd97b9c6dfeecabd4328cad37b876e38ceeffb8cd38e634c3b09facd061de7fb3fee47b45d9dcf0bd9f241a5fca2128b6d846b"
    "7540e3fec2c5fd4f9df54dc113bd77e87afc057e8f48ef1dba453c7aef1099fae93a81bb5dfe5a2720377f58b075023a7f08181e9d3f90a99fae13d885d43a01",
    "ae1d93f2f96d4c3b109f486fed9e920c51023ada296517fa5e69ccf71a5d21cef3bcf0677aaeccff79a17ad8e5c315817f9108f3d19e92e4a4d3b2ba1d9cbc30"
    "eb7ca182a91ff188f4b7d19fdf15144952647b23a93e6c176acab4fdfb66df6fcc6df51fe745f7f90373735ee9f71be3f06c997ebff1ac787659143cfafdc664",
    "ea0fca3ce218d34eb2fef73df7f9c214bcbd8dc143bc21fd483e8040ae1b27ccfce60b2f9df54d61f7eddd6fed9a076cbebcbdc794c6fd5bc4f3aadf65b7dbb9"
    "e75a8ecbac272285cade7a4fadf69cf708fb35ee7f0571ea449d", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 37328U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_smcle2coord_info.c) */
