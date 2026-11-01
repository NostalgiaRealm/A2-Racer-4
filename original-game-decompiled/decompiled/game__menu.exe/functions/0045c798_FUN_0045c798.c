
/* ==== FUN_0045c798 @ 0045c798 ==== 
 * signature: undefined __register FUN_0045c798(int * param_1)
 * body: 0045c798-0045c82a
 */

void FUN_0045c798(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    param_1[0xb] = 0;
    param_1[0xe] = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined1 *)(param_1 + 0xd) = 0;
    iVar3 = extraout_EDX;
    if ((param_1[0x12] == 0) && (iVar3 = param_1[10], *(int *)(iVar3 + 8) != 0)) {
      piVar2 = TDaviTimer_vmt_02c((int *)&PTR_TPersistent_vmt_000_0045adf4,'\x01',(int *)0x0);
      param_1[0x12] = (int)piVar2;
      TDaviTimer_set_OnTimer
                ((int)piVar2,extraout_EDX_00,extraout_ECX_00,*(undefined4 *)(*param_1 + 0x8c),
                 param_1);
      TDaviTimer_set_Interval
                (param_1[0x12],(int)(1000 / (ulonglong)*(uint *)(param_1[10] + 8)),
                 *(uint *)(param_1[10] + 8));
    }
    else {
      TDaviTimer_set_Enabled(param_1[0x12],CONCAT31((int3)((uint)iVar3 >> 8),1),extraout_ECX);
    }
    (**(code **)(*param_1 + 0x68))(param_1,param_1);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


