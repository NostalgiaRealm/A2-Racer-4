
/* ==== FUN_0046bb44 @ 0046bb44 ==== 
 * signature: undefined __register FUN_0046bb44(undefined4 * param_1, int * param_2)
 * body: 0046bb44-0046bba0;0046bbbf-0046bbc5
 */

void FUN_0046bb44(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  code *pcStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c [5];
  int *local_8;
  
  puStack_2c = &stack0xfffffffc;
  puVar3 = local_1c;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  if (DAT_004ab06c != '\0') {
    pcStack_30 = thunk_FUN_00403408;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    local_8 = param_2;
    FUN_00405860(param_2);
    piVar1 = DAT_004ad198;
    iVar2 = (**(code **)(*DAT_004ad198 + 0xc))();
    FUN_0046ba74(iVar2,0x46bbd0);
    *in_FS_OFFSET = piVar1;
  }
  return;
}


