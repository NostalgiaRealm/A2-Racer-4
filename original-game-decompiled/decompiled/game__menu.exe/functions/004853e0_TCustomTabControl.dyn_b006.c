
/* ==== TCustomTabControl.dyn_b006 @ 004853e0 ==== 
 * signature: undefined __register TCustomTabControl.dyn_b006(int * param_1, int param_2)
 * body: 004853e0-004854ad
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomTabControl_dyn_b006(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  WPARAM WVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  int local_10;
  int local_c;
  int local_8;
  
  pcStack_20 = (code *)&stack0xfffffffc;
  local_10 = 0;
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_2;
  iVar2 = (**(code **)(*(int *)param_1[0x84] + 0x14))();
  if (-1 < iVar2 + -1) {
    WVar3 = 0;
    local_c = iVar2;
    do {
      (**(code **)(*(int *)param_1[0x84] + 0xc))((int *)param_1[0x84],WVar3,&local_10);
      cVar1 = FUN_004447f4(CONCAT22((short)((uint)local_8 >> 0x10),*(undefined2 *)(local_8 + 4)),
                           local_10);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*param_1 + 0xb4))(param_1,WVar3);
        if (cVar1 != '\0') {
          cVar1 = FUN_00403178(param_1,extraout_EDX,extraout_ECX);
          if (cVar1 != '\0') {
            *(undefined4 *)(local_8 + 0xc) = 1;
            cVar1 = FUN_00403178(param_1,extraout_EDX_00,extraout_ECX_00);
            if (cVar1 != '\0') {
              FUN_00484e98(param_1,WVar3);
              FUN_00403178(param_1,extraout_EDX_01,extraout_ECX_01);
            }
            goto LAB_00485498;
          }
        }
      }
      WVar3 = WVar3 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  TWinControl_dyn_b006((int)param_1,local_8);
LAB_00485498:
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_004854b5;
  pcStack_24 = (code *)0x4854ad;
  FUN_00403c5c(&local_10);
  return;
}


