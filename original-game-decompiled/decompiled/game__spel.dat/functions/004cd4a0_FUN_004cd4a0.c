
/* ==== FUN_004cd4a0 @ 004cd4a0 ==== 
 * signature: byte * __cdecl FUN_004cd4a0(byte * param_1, byte * param_2)
 * body: 004cd4a0-004cd557
 */

byte * __cdecl FUN_004cd4a0(byte *param_1,byte *param_2)

{
  FILE *pFVar1;
  byte local_304 [4];
  byte local_300 [256];
  byte local_200 [256];
  byte local_100 [256];
  
  FUN_0055942f(param_2,local_304,local_100,local_200,local_300);
  FUN_0055a3a5(param_1,&DAT_00712694,&DAT_00712694,local_200,local_300);
  FUN_004c3fa0((byte *)s_path__s_005b66f4);
  pFVar1 = (FILE *)FUN_005589a5((LPCSTR)param_1,&DAT_005b66f0);
  if (pFVar1 == (FILE *)0x0) {
    FUN_0055a3a5(param_1,&DAT_00740dec,DAT_00740de8,local_200,local_300);
    FUN_004c3fa0((byte *)s_failed_goto_path__s_005b66d8);
    return param_1;
  }
  FUN_005588fd(pFVar1);
  return param_1;
}


