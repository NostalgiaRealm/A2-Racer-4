
/* ==== TCustomPanel.dyn_b038 @ 00450b1c ==== 
 * signature: undefined __register TCustomPanel.dyn_b038(int * param_1, int param_2)
 * body: 00450b1c-00450c21;00450c41-00450c52
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomPanel_dyn_b038(int *param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  code *pcStack_30;
  undefined1 *puStack_2c;
  int local_1c [4];
  int local_c;
  int *local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if ((char)param_1[0x13] == '\0') {
    puStack_2c = (undefined1 *)0x450c4c;
    TWinControl_dyn_b038(param_1,param_2);
  }
  else {
    *(undefined1 *)(param_1 + 0x7e) = 1;
    pcStack_30 = thunk_FUN_004036bc;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    piVar4 = (int *)(*(int *)(param_2 + 4) + 0x44);
    piVar5 = local_1c;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    cVar1 = *(char *)((int)local_8 + 0x4b);
    if (cVar1 == '\x01') {
      puVar2 = &stack0xfffffffc;
      if (local_8[0xf] == 0) {
        TControl_set_Height(local_8,local_1c[3] - local_1c[1]);
        puVar2 = puStack_2c;
      }
    }
    else if (cVar1 == '\x02') {
      puVar2 = &stack0xfffffffc;
      if (local_8[0xf] == 0) {
        puStack_2c = &stack0xfffffffc;
        (**(code **)(*local_8 + 0x7c))
                  (local_8,local_8[0xc],local_8[0xd] - (local_1c[3] - local_1c[1]),
                   local_1c[3] - local_1c[1],local_8[0xe]);
        puVar2 = puStack_2c;
      }
    }
    else if (cVar1 == '\x03') {
      puVar2 = &stack0xfffffffc;
      if (local_8[0xe] == 0) {
        puStack_2c = &stack0xfffffffc;
        TControl_set_Width(local_8,local_1c[2] - local_1c[0]);
        puVar2 = puStack_2c;
      }
    }
    else {
      puVar2 = &stack0xfffffffc;
      if ((cVar1 == '\x04') && (puVar2 = &stack0xfffffffc, local_8[0xe] == 0)) {
        puStack_2c = &stack0xfffffffc;
        (**(code **)(*local_8 + 0x7c))
                  (local_8,local_8[0xc] - (local_1c[2] - local_1c[0]),local_8[0xd],local_8[0xf],
                   local_1c[2] - local_1c[0]);
        puVar2 = puStack_2c;
      }
    }
    puStack_2c = puVar2;
    TWinControl_dyn_b038(local_8,local_c);
    FUN_00403794();
  }
  return;
}


