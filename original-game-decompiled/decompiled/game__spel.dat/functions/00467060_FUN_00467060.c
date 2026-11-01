
/* ==== FUN_00467060 @ 00467060 ==== 
 * signature: undefined4 __cdecl FUN_00467060(int param_1)
 * body: 00467060-00467150
 */

undefined4 __cdecl FUN_00467060(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (&DAT_0070a244)[param_1 * 0xd0];
  iVar4 = FUN_004641a0(param_1);
  fVar1 = *(float *)(&DAT_00709f24 + iVar4 * 0x340);
  iVar4 = FUN_004641a0(param_1);
  uVar2 = *(undefined4 *)(&DAT_00709f28 + iVar4 * 0x340);
  iVar4 = FUN_004641a0(param_1);
  fVar3 = *(float *)(&DAT_00709f2c + iVar4 * 0x340);
  iVar5 = iVar5 * 0xf0;
  iVar4 = DAT_0073b0d0 + *(int *)(iVar5 + 0x24 + DAT_00715e50) * 0xa9;
  *(float *)(iVar4 + 0x50) = fVar1;
  *(undefined4 *)(iVar4 + 0x54) = uVar2;
  *(float *)(iVar4 + 0x58) = fVar3;
  *(undefined4 *)(iVar5 + 0x5c + DAT_00715e50) = 1;
  *(code **)(iVar5 + 0x70 + DAT_00715e50) = FUN_0042d820;
  iVar5 = DAT_00715e50 + iVar5;
  iVar4 = FUN_004af230(&DAT_00715250,DAT_006fba7c,fVar1,uVar2,fVar3);
  *(int *)(iVar5 + 0x34) = iVar4;
  return 1;
}


