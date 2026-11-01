
/* ==== FUN_00419e00 @ 00419e00 ==== 
 * signature: undefined __cdecl FUN_00419e00(int param_1)
 * body: 00419e00-00419e7c
 */

void __cdecl FUN_00419e00(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = param_1 * 0x294;
  *(undefined4 *)(&DAT_005cea48 + iVar3) = 0;
  iVar2 = FUN_00418890(param_1);
  pfVar1 = (float *)((&DAT_005d2b78)[iVar2 * 3] * 0x50 + 8 + DAT_00715eb8);
  HandleController((float)param_1,iVar2,*pfVar1,pfVar1[1],pfVar1[2]);
  HandleAICar(param_1);
  fVar4 = FUN_004a6800(0x7128b0);
  *(float *)(&DAT_005cea54 + iVar3) = (float)(fVar4 + (float10)*(float *)(&DAT_005cea54 + iVar3));
  return;
}


