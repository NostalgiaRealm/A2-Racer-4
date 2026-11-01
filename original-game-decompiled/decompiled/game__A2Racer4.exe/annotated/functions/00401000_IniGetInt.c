
/* ==== IniGetInt @ 00401000 ==== 
 * signature: undefined __cdecl IniGetInt(LPCSTR param_1, LPCSTR param_2)
 * body: 00401000-00401017
 * note: ANALYST: GetPrivateProfileIntA wrapper. [confidence: confirmed] [evidence: code]
 */

/* ANALYST: GetPrivateProfileIntA wrapper. [confidence: confirmed] [evidence: code] */

void __cdecl IniGetInt(LPCSTR param_1,LPCSTR param_2)

{
  GetPrivateProfileIntA(param_1,param_2,0,(LPCSTR)&DAT_00407e10);
  return;
}


