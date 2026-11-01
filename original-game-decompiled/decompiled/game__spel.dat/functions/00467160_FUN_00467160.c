
/* ==== FUN_00467160 @ 00467160 ==== 
 * signature: undefined4 __cdecl FUN_00467160(int param_1)
 * body: 00467160-00467262
 */

undefined4 __cdecl FUN_00467160(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (&DAT_0070a244)[param_1 * 0xd0];
  iVar5 = iVar4 * 0xf0;
  if (*(int *)(iVar5 + 0x5c + DAT_00715e50) == 1) {
    return 0;
  }
  *(undefined4 *)(iVar5 + 0x5c + DAT_00715e50) = 1;
  *(undefined4 *)(iVar5 + 0x50 + DAT_00715e50) = 0xffffffff;
  iVar3 = FUN_004641a0(param_1);
  fVar1 = *(float *)(&DAT_00709f24 + iVar3 * 0x340);
  iVar3 = FUN_004641a0(param_1);
  uVar2 = *(undefined4 *)(&DAT_00709f28 + iVar3 * 0x340);
  iVar3 = FUN_004641a0(param_1);
  iVar5 = iVar5 + DAT_00715e50;
  iVar3 = FUN_004af230(&DAT_00715250,(&DAT_00709f08)[param_1 * 0xd0],fVar1,uVar2,
                       *(float *)(&DAT_00709f2c + iVar3 * 0x340));
  *(int *)(iVar5 + 0x34) = iVar3;
  FUN_00413f00(iVar4,3,5,0xffffffff,param_1);
  iVar4 = FUN_00414070(iVar4);
  (&DAT_005d1bb8)[iVar4 * 0xe] = 3;
  return 1;
}


