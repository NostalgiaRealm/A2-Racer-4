
/* ==== FUN_004cada0 @ 004cada0 ==== 
 * signature: undefined4 __cdecl FUN_004cada0(LPCSTR param_1, int * param_2, int * param_3)
 * body: 004cada0-004cae17
 */

undefined4 __cdecl FUN_004cada0(LPCSTR param_1,int *param_2,int *param_3)

{
  FILE *pFVar1;
  char local_80 [4];
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  
  pFVar1 = (FILE *)FUN_004c62c0(param_1);
  if (pFVar1 == (FILE *)0x0) {
    return 1000;
  }
  FUN_00558b35(local_80,0x80,1,(int *)pFVar1);
  *param_3 = ((int)local_76 - (int)local_7a) + 1;
  *param_2 = ((int)local_78 - (int)local_7c) + 1;
  FUN_004c6430(pFVar1);
  return 0;
}


