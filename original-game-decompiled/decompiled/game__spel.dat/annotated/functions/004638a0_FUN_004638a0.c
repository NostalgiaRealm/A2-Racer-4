
/* ==== FUN_004638a0 @ 004638a0 ==== 
 * signature: undefined4 __cdecl FUN_004638a0(int param_1)
 * body: 004638a0-004639a1
 */

undefined4 __cdecl FUN_004638a0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  FUN_004c3fa0((byte *)s_Handling_init_cop_path_type_005a63bc);
  iVar4 = FUN_0040db00(param_1);
  if (iVar4 == 0) {
    iVar4 = (&DAT_0070a244)[param_1 * 0xd0];
    iVar5 = FUN_004641a0(param_1);
    uVar1 = *(undefined4 *)(&DAT_00709f24 + iVar5 * 0x340);
    iVar5 = FUN_004641a0(param_1);
    uVar2 = *(undefined4 *)(&DAT_00709f28 + iVar5 * 0x340);
    iVar5 = FUN_004641a0(param_1);
    uVar3 = *(undefined4 *)(&DAT_00709f2c + iVar5 * 0x340);
    iVar5 = iVar4 * 0xf0;
    iVar6 = DAT_0073b0d0 + *(int *)(iVar5 + 0x24 + DAT_00715e50) * 0xa9;
    *(undefined4 *)(iVar6 + 0x50) = uVar1;
    *(undefined4 *)(iVar6 + 0x54) = uVar2;
    *(undefined4 *)(iVar6 + 0x58) = uVar3;
    *(code **)(iVar5 + 0x70 + DAT_00715e50) = FUN_0042d820;
    *(undefined4 *)(iVar5 + 0x5c + DAT_00715e50) = 1;
    FUN_00423990(iVar4,1);
    FUN_0040d9d0(iVar4,param_1);
    return 1;
  }
  return 1;
}


