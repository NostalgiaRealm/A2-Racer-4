
/* ==== FUN_004bb190 @ 004bb190 ==== 
 * signature: undefined4 * __fastcall FUN_004bb190(undefined4 * param_1)
 * body: 004bb190-004bb215;004bb219-004bb240;004bb244-004bb275;004bb279-004bb28e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bb216-004bb218 004bb241-004bb243 004bb276-004bb278
 */

undefined4 * __fastcall FUN_004bb190(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = param_1 + 0x15;
  param_1[0x19] = 4;
  param_1[0x17] = 1;
  *puVar1 = 0;
  param_1[0x18] = 0xffffffff;
  param_1[0x16] = 0;
  puVar3 = param_1;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *param_1 = 0x50;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[0x13] = 0x10;
  iVar2 = (**(code **)(*DAT_0073b778 + 0x14))(DAT_0073b778,puVar1,0);
  if (iVar2 != 0) {
    FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____error_creating_material_005b1c74);
  }
  iVar2 = (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1,param_1);
  if (iVar2 != 0) {
    FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____error_setting_material___005b1c4c);
  }
  iVar2 = (**(code **)(*(int *)*puVar1 + 0x14))((int *)*puVar1,DAT_0073b4b4,param_1 + 0x14);
  if (iVar2 != 0) {
    FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____error_getting_material_h_005b1c20);
  }
  param_1[0x16] = 0;
  (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1,param_1);
  return param_1;
}


