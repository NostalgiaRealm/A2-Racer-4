
/* ==== FUN_00405b60 @ 00405b60 ==== 
 * signature: undefined __cdecl FUN_00405b60(undefined4 param_1, int param_2)
 * body: 00405b60-00405c71
 */

void __cdecl FUN_00405b60(undefined4 param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  undefined4 local_18 [3];
  undefined1 local_c [12];
  
  pfVar2 = (float *)FUN_004b4070(local_18,DAT_0073b0d0 +
                                          *(int *)(param_2 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 +
                                          0x10);
  fVar1 = SQRT(pfVar2[2] * pfVar2[2] + pfVar2[1] * pfVar2[1] + *pfVar2 * *pfVar2);
  FUN_004066c0(local_c,*pfVar2 / fVar1,pfVar2[1] / fVar1,pfVar2[2] / fVar1);
  return;
}


