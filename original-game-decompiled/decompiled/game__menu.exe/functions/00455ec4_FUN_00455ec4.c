
/* ==== FUN_00455ec4 @ 00455ec4 ==== 
 * signature: undefined4 __register FUN_00455ec4(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 00455ec4-00455f13
 */

undefined4 FUN_00455ec4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (0 < *(int *)(param_1 + 0x43c)) {
    if (*(char *)(param_1 + 0x14) != '\0') {
      *(undefined1 *)(param_1 + 0x14) = 0;
      piVar1 = FUN_00455080(param_1,param_2,param_3);
      uVar2 = FUN_00455030((int)piVar1,(int *)(param_1 + 0x438));
      piVar1 = FUN_00455080(uVar2,extraout_EDX,extraout_ECX);
      iVar3 = FUN_00454f04((int)piVar1,(byte *)(param_1 + 0x15),*(int *)(param_1 + 0x43c));
      *(int *)(param_1 + 0x438) = iVar3;
    }
    return *(undefined4 *)(param_1 + 0x438);
  }
  return 0;
}


