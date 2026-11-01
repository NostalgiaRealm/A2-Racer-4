
/* ==== FUN_004363b4 @ 004363b4 ==== 
 * signature: undefined4 __register FUN_004363b4(HMENU param_1, uint param_2, int param_3, byte param_4, int param_5)
 * body: 004363b4-0043640d
 */

undefined4 FUN_004363b4(HMENU param_1,uint param_2,int param_3,byte param_4,int param_5)

{
  UINT UVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 & 0x10) == 0) {
    UVar1 = GetMenuItemID(param_1,param_3);
    if (UVar1 != 0xffffffff) {
      iVar3 = FUN_00435cac(*(int *)(param_5 + -4));
    }
  }
  else {
    GetSubMenu(param_1,param_3);
    iVar3 = FUN_00435cac(*(int *)(param_5 + -4));
  }
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00439e44((uint)param_4,*(int *)(iVar3 + 0x24));
  }
  return uVar2;
}


