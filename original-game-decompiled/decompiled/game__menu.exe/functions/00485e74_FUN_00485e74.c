
/* ==== FUN_00485e74 @ 00485e74 ==== 
 * signature: undefined __register FUN_00485e74(int * param_1, int param_2)
 * body: 00485e74-00485ed0
 */

void FUN_00485e74(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  int local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = 0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = param_2;
  TGroupBox_get_Caption(param_2,&local_8);
  iVar1 = local_8;
  iVar2 = FUN_004855fc(param_2);
  FUN_00411ac0((int *)param_1[0x84],iVar2,iVar1,iVar3);
  (**(code **)(*param_1 + 0xc0))();
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00485ed8;
  pcStack_18 = (code *)0x485ed0;
  FUN_00403c5c(&local_8);
  return;
}


