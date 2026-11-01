
/* ==== FUN_004c9b90 @ 004c9b90 ==== 
 * signature: bool __cdecl FUN_004c9b90(int * param_1)
 * body: 004c9b90-004c9beb
 */

bool __cdecl FUN_004c9b90(int *param_1)

{
  int iVar1;
  int *unaff_retaddr;
  undefined4 *puStack_108;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 auStack_74 [8];
  undefined4 local_6c;
  undefined4 local_68;
  
  local_d8 = 0x6c;
  local_6c = 0x6c;
  puStack_108 = &local_d8;
  local_d4 = 6;
  local_68 = 6;
  iVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  if (iVar1 != 0) {
    hardware(iVar1);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____DDError__blt_surf_2_sur_005b5a30);
  }
  iVar1 = (**(code **)(*unaff_retaddr + 0x58))(unaff_retaddr,auStack_74);
  if (iVar1 != 0) {
    hardware(iVar1);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____DDError__blt_surf_2_sur_005b59e8);
  }
  uStack_f0 = uStack_dc;
  uStack_ec = uStack_e0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  puStack_108 = (undefined4 *)0x0;
  iVar1 = (**(code **)(*unaff_retaddr + 0x14))
                    (unaff_retaddr,&puStack_108,param_1,&uStack_f8,0x1000000,0);
  return (bool)('\x01' - (iVar1 != 0));
}


