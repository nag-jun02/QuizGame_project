#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[3] = 
{
	{ 7610, 0,  1 } /*tableIndex: 0 */,
	{ 5100, 1,  3 } /*tableIndex: 1 */,
	{ 8116, 2,  3 } /*tableIndex: 2 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[3] = 
{
	"statusString",
	"dh",
	"texture",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[9] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngine.WWW::.ctor(System.String) */,
	{ 0, 1 } /* 0x06000002 System.String UnityEngine.WWW::get_error() */,
	{ 0, 0 } /* 0x06000003 System.Boolean UnityEngine.WWW::get_isDone() */,
	{ 1, 2 } /* 0x06000004 UnityEngine.Texture2D UnityEngine.WWW::CreateTextureFromDownloadedData(System.Boolean) */,
	{ 0, 0 } /* 0x06000005 UnityEngine.Texture2D UnityEngine.WWW::get_texture() */,
	{ 0, 0 } /* 0x06000006 System.String UnityEngine.WWW::get_url() */,
	{ 0, 0 } /* 0x06000007 System.Boolean UnityEngine.WWW::get_keepWaiting() */,
	{ 0, 0 } /* 0x06000008 System.Void UnityEngine.WWW::Dispose() */,
	{ 0, 0 } /* 0x06000009 System.Boolean UnityEngine.WWW::WaitUntilDoneIfPossible() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestWWWModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestWWWModule[117] = 
{
	{ 25189, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 25189, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 25189, 1, 62, 62, 9, 31, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 25189, 1, 62, 62, 9, 31, 1, kSequencePointKind_StepOut, 0, 3 } /* seqPointIndex: 3 */,
	{ 25189, 1, 63, 63, 9, 10, 7, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 25189, 1, 64, 64, 13, 45, 8, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 25189, 1, 64, 64, 13, 45, 10, kSequencePointKind_StepOut, 0, 6 } /* seqPointIndex: 6 */,
	{ 25189, 1, 65, 65, 13, 35, 20, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 25189, 1, 65, 65, 13, 35, 26, kSequencePointKind_StepOut, 0, 8 } /* seqPointIndex: 8 */,
	{ 25189, 1, 66, 66, 9, 10, 32, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 25190, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 25190, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 25190, 1, 186, 186, 13, 14, 0, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 25190, 1, 187, 187, 17, 34, 1, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 25190, 1, 187, 187, 17, 34, 7, kSequencePointKind_StepOut, 0, 14 } /* seqPointIndex: 14 */,
	{ 25190, 1, 187, 187, 0, 0, 16, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 25190, 1, 188, 188, 21, 33, 19, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 25190, 1, 189, 189, 17, 75, 23, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 25190, 1, 189, 189, 17, 75, 29, kSequencePointKind_StepOut, 0, 18 } /* seqPointIndex: 18 */,
	{ 25190, 1, 189, 189, 0, 0, 38, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 25190, 1, 190, 190, 21, 39, 41, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 25190, 1, 190, 190, 21, 39, 47, kSequencePointKind_StepOut, 0, 21 } /* seqPointIndex: 21 */,
	{ 25190, 1, 191, 191, 17, 46, 55, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 25190, 1, 191, 191, 17, 46, 61, kSequencePointKind_StepOut, 0, 23 } /* seqPointIndex: 23 */,
	{ 25190, 1, 191, 191, 0, 0, 78, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 25190, 1, 192, 192, 17, 18, 81, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 25190, 1, 193, 193, 21, 95, 82, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 25190, 1, 193, 193, 21, 95, 88, kSequencePointKind_StepOut, 0, 27 } /* seqPointIndex: 27 */,
	{ 25190, 1, 193, 193, 21, 95, 93, kSequencePointKind_StepOut, 0, 28 } /* seqPointIndex: 28 */,
	{ 25190, 1, 194, 194, 21, 86, 100, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 25190, 1, 194, 194, 21, 86, 111, kSequencePointKind_StepOut, 0, 30 } /* seqPointIndex: 30 */,
	{ 25190, 1, 194, 194, 21, 86, 123, kSequencePointKind_StepOut, 0, 31 } /* seqPointIndex: 31 */,
	{ 25190, 1, 196, 196, 17, 29, 131, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 25190, 1, 197, 197, 13, 14, 135, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 25191, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 25191, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 25191, 1, 200, 200, 34, 35, 0, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 25191, 1, 200, 200, 36, 55, 1, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 25191, 1, 200, 200, 36, 55, 7, kSequencePointKind_StepOut, 0, 38 } /* seqPointIndex: 38 */,
	{ 25191, 1, 200, 200, 56, 57, 15, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 25192, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 25192, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 25192, 1, 261, 261, 9, 10, 0, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 25192, 1, 262, 262, 13, 44, 1, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 25192, 1, 262, 262, 13, 44, 2, kSequencePointKind_StepOut, 0, 44 } /* seqPointIndex: 44 */,
	{ 25192, 1, 262, 262, 0, 0, 11, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 25192, 1, 263, 263, 17, 44, 14, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 25192, 1, 263, 263, 17, 44, 16, kSequencePointKind_StepOut, 0, 47 } /* seqPointIndex: 47 */,
	{ 25192, 1, 264, 264, 13, 71, 24, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 25192, 1, 264, 264, 13, 71, 30, kSequencePointKind_StepOut, 0, 49 } /* seqPointIndex: 49 */,
	{ 25192, 1, 264, 264, 0, 0, 40, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 25192, 1, 265, 265, 17, 29, 44, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 25192, 1, 266, 266, 13, 43, 48, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 25192, 1, 266, 266, 13, 43, 54, kSequencePointKind_StepOut, 0, 53 } /* seqPointIndex: 53 */,
	{ 25192, 1, 267, 267, 13, 28, 60, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 25192, 1, 267, 267, 0, 0, 66, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 25192, 1, 268, 268, 17, 29, 70, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 25192, 1, 269, 269, 13, 53, 74, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 25192, 1, 269, 269, 13, 53, 76, kSequencePointKind_StepOut, 0, 58 } /* seqPointIndex: 58 */,
	{ 25192, 1, 270, 270, 13, 57, 82, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 25192, 1, 270, 270, 13, 57, 84, kSequencePointKind_StepOut, 0, 60 } /* seqPointIndex: 60 */,
	{ 25192, 1, 270, 270, 13, 57, 90, kSequencePointKind_StepOut, 0, 61 } /* seqPointIndex: 61 */,
	{ 25192, 1, 271, 271, 13, 28, 96, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 25192, 1, 272, 272, 9, 10, 100, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 25193, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 25193, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 25193, 1, 274, 274, 40, 41, 0, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 25193, 1, 274, 274, 42, 88, 1, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 25193, 1, 274, 274, 42, 88, 3, kSequencePointKind_StepOut, 0, 68 } /* seqPointIndex: 68 */,
	{ 25193, 1, 274, 274, 89, 90, 11, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 25194, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 25194, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 25194, 1, 310, 310, 33, 34, 0, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 25194, 1, 310, 310, 35, 51, 1, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 25194, 1, 310, 310, 35, 51, 7, kSequencePointKind_StepOut, 0, 74 } /* seqPointIndex: 74 */,
	{ 25194, 1, 310, 310, 52, 53, 15, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 25195, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 25195, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 25195, 1, 312, 312, 48, 49, 0, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 25195, 1, 312, 312, 50, 93, 1, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 25195, 1, 312, 312, 50, 93, 15, kSequencePointKind_StepOut, 0, 80 } /* seqPointIndex: 80 */,
	{ 25195, 1, 312, 312, 94, 95, 29, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 25196, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 25196, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 25196, 1, 315, 315, 9, 10, 0, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 25196, 1, 316, 316, 13, 30, 1, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 25196, 1, 316, 316, 0, 0, 11, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 25196, 1, 317, 317, 13, 14, 14, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 25196, 1, 318, 318, 17, 32, 15, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 25196, 1, 318, 318, 17, 32, 21, kSequencePointKind_StepOut, 0, 89 } /* seqPointIndex: 89 */,
	{ 25196, 1, 319, 319, 17, 29, 27, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 25196, 1, 320, 320, 13, 14, 34, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 25196, 1, 321, 321, 9, 10, 35, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 25197, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 25197, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 25197, 1, 374, 374, 9, 10, 0, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 25197, 1, 375, 375, 13, 29, 1, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 25197, 1, 375, 375, 13, 29, 7, kSequencePointKind_StepOut, 0, 97 } /* seqPointIndex: 97 */,
	{ 25197, 1, 375, 375, 0, 0, 13, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 25197, 1, 376, 376, 17, 29, 16, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 25197, 1, 377, 377, 13, 79, 20, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 25197, 1, 377, 377, 13, 79, 21, kSequencePointKind_StepOut, 0, 101 } /* seqPointIndex: 101 */,
	{ 25197, 1, 377, 377, 13, 79, 32, kSequencePointKind_StepOut, 0, 102 } /* seqPointIndex: 102 */,
	{ 25197, 1, 377, 377, 0, 0, 38, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 25197, 1, 378, 378, 13, 14, 41, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 25197, 1, 378, 378, 0, 0, 42, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 25197, 1, 381, 381, 38, 39, 44, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 25197, 1, 381, 381, 39, 40, 45, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 25197, 1, 381, 381, 17, 37, 46, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 25197, 1, 381, 381, 17, 37, 52, kSequencePointKind_StepOut, 0, 109 } /* seqPointIndex: 109 */,
	{ 25197, 1, 381, 381, 0, 0, 61, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 25197, 1, 383, 383, 17, 29, 64, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 25197, 1, 386, 386, 13, 14, 68, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 25197, 1, 387, 387, 17, 190, 69, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 25197, 1, 387, 387, 17, 190, 74, kSequencePointKind_StepOut, 0, 114 } /* seqPointIndex: 114 */,
	{ 25197, 1, 388, 388, 17, 30, 80, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 25197, 1, 390, 390, 9, 10, 84, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestWWWModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestWWWModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "\\home\\bokken\\build\\output\\unity\\unity\\Modules\\UnityWebRequestWWW\\Public\\WWW.cs", { 17, 248, 16, 119, 156, 84, 111, 200, 28, 220, 190, 101, 118, 29, 225, 94} }, //1 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = 
{
	{ 3765, 1 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[9] = 
{
	{ 0, 137 },
	{ 81, 131 },
	{ 0, 17 },
	{ 0, 102 },
	{ 0, 13 },
	{ 0, 17 },
	{ 0, 31 },
	{ 0, 36 },
	{ 0, 86 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[9] = 
{
	{ 0, 0, 0 } /* System.Void UnityEngine.WWW::.ctor(System.String) */,
	{ 137, 0, 2 } /* System.String UnityEngine.WWW::get_error() */,
	{ 17, 2, 1 } /* System.Boolean UnityEngine.WWW::get_isDone() */,
	{ 102, 3, 1 } /* UnityEngine.Texture2D UnityEngine.WWW::CreateTextureFromDownloadedData(System.Boolean) */,
	{ 13, 4, 1 } /* UnityEngine.Texture2D UnityEngine.WWW::get_texture() */,
	{ 17, 5, 1 } /* System.String UnityEngine.WWW::get_url() */,
	{ 31, 6, 1 } /* System.Boolean UnityEngine.WWW::get_keepWaiting() */,
	{ 36, 7, 1 } /* System.Void UnityEngine.WWW::Dispose() */,
	{ 86, 8, 1 } /* System.Boolean UnityEngine.WWW::WaitUntilDoneIfPossible() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_UnityWebRequestWWWModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_UnityWebRequestWWWModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	117,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_UnityWebRequestWWWModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	1,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
