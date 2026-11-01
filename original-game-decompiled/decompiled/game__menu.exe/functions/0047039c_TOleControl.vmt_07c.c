
/* ==== TOleControl.vmt_07c @ 0047039c ==== 
 * signature: undefined TOleControl.vmt_07c(void)
 * body: 0047039c-00470440
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TOleControl_vmt_07c(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_14 [2];
  int iStack_c;
  int iStack_8;
  
  iStack_c = param_3;
  iStack_8 = param_2;
  if (((param_5 != param_1[0xe]) && (0 < param_1[0xe])) ||
     ((param_1[0xf] != param_4 && (0 < param_1[0xf])))) {
    if ((*(byte *)((int)param_1 + 0x225) & 4) == 0) {
      iVar1 = MulDiv(param_4,0x9ec,*(int *)(*(int *)PTR_DAT_004ab9f8 + 0x34));
      iVar2 = MulDiv(param_5,0x9ec,*(int *)(*(int *)PTR_DAT_004ab9f8 + 0x34));
      FUN_0040f7d0(iVar2,iVar1,auStack_14);
      iVar1 = (**(code **)(*(int *)param_1[0x80] + 0x44))();
      if (iVar1 == 0) goto LAB_00470427;
    }
    param_5 = param_1[0xe];
    param_4 = param_1[0xf];
  }
LAB_00470427:
  TWinControl_vmt_07c(param_1,iStack_8,iStack_c,param_4,param_5);
  return;
}


