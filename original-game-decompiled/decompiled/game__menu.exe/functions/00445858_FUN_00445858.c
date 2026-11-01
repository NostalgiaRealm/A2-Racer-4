
/* ==== FUN_00445858 @ 00445858 ==== 
 * signature: undefined __register FUN_00445858(int * param_1, int * param_2)
 * body: 00445858-004459a8
 */

void FUN_00445858(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int aiStack_18 [2];
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0x40))(param_2,&local_30);
    local_30 = local_30 - (uint)*(ushort *)(param_1[0x7c] + 0x1a);
    local_28 = local_28 + (uint)*(ushort *)(param_1[0x7c] + 0x1a);
    local_2c = local_2c - (uint)*(ushort *)(param_1[0x7d] + 0x1a);
    local_24 = local_24 + (uint)*(ushort *)(param_1[0x7d] + 0x1a);
    FUN_0042e2ac(param_2,&local_30,aiStack_18);
    FUN_0042e2d8(param_1,aiStack_18,&iStack_20);
    local_30 = iStack_20;
    local_2c = iStack_1c;
    FUN_0042e2ac(param_2,&local_28,aiStack_18);
    FUN_0042e2d8(param_1,aiStack_18,&iStack_20);
    iVar1 = local_30;
    local_28 = iStack_20;
    local_24 = iStack_1c;
    if (local_30 < 0) {
      TControlScrollBar_set_Position(param_1[0x7c],*(int *)(param_1[0x7c] + 0xc) + local_30);
    }
    else {
      iVar2 = TForm_get_ClientWidth(param_1);
      iVar3 = local_28;
      if (iVar2 < local_28) {
        iVar2 = TForm_get_ClientWidth(param_1);
        if (iVar2 < iVar3 - iVar1) {
          local_28 = TForm_get_ClientWidth(param_1);
          local_28 = local_28 + local_30;
        }
        iVar1 = param_1[0x7c];
        iVar3 = TForm_get_ClientWidth(param_1);
        TControlScrollBar_set_Position(iVar1,(*(int *)(iVar1 + 0xc) + local_28) - iVar3);
      }
    }
    iVar1 = local_2c;
    if (local_2c < 0) {
      TControlScrollBar_set_Position(param_1[0x7d],*(int *)(param_1[0x7d] + 0xc) + local_2c);
    }
    else {
      iVar2 = TForm_get_ClientHeight(param_1);
      iVar3 = local_24;
      if (iVar2 < local_24) {
        iVar2 = TForm_get_ClientHeight(param_1);
        if (iVar2 < iVar3 - iVar1) {
          local_24 = TForm_get_ClientHeight(param_1);
          local_24 = local_24 + local_2c;
        }
        iVar1 = param_1[0x7d];
        iVar3 = TForm_get_ClientHeight(param_1);
        TControlScrollBar_set_Position(iVar1,(*(int *)(iVar1 + 0xc) + local_24) - iVar3);
      }
    }
  }
  return;
}


