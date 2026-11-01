
/* ==== FUN_00419f70 @ 00419f70 ==== 
 * signature: undefined __cdecl FUN_00419f70(int param_1)
 * body: 00419f70-00419ff7
 */

void __cdecl FUN_00419f70(int param_1)

{
  float *pfVar1;
  byte bVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = param_1 * 0x294;
  *(undefined4 *)(&DAT_005cea34 + iVar4) = DAT_006fba58;
  bVar2 = FUN_004235f0(param_1);
  *(uint *)(&DAT_005cea48 + iVar4) = CONCAT31(extraout_var,bVar2);
  iVar3 = FUN_00418890(param_1);
  pfVar1 = (float *)((&DAT_005d2b78)[iVar3 * 3] * 0x50 + 8 + DAT_00715eb8);
  FUN_00403c70((float)param_1,iVar3,*pfVar1,pfVar1[1],pfVar1[2]);
  FUN_00403cd0(param_1);
  fVar5 = FUN_004a6800(0x7128b0);
  *(float *)(&DAT_005cea54 + iVar4) = (float)(fVar5 + (float10)*(float *)(&DAT_005cea54 + iVar4));
  return;
}


