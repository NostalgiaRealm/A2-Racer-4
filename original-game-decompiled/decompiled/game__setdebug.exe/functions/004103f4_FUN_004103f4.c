
/* ==== FUN_004103f4 @ 004103f4 ==== 
 * signature: undefined __register FUN_004103f4(int * param_1, undefined * param_2, int param_3)
 * body: 004103f4-0041047d
 */

void FUN_004103f4(int *param_1,undefined *param_2,int param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  undefined *puVar3;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  int local_c;
  int local_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  local_c = 0;
  pcStack_20 = thunk_FUN_00403434;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_3;
  iVar1 = FUN_0040fe38(param_1,param_2);
  if (local_8 == 0) {
    if (-1 < iVar1) {
      (**(code **)(*param_1 + 0x44))(param_1,iVar1);
    }
  }
  else {
    if (iVar1 < 0) {
      iVar1 = (**(code **)(*param_1 + 0x34))(param_1,0);
    }
    puVar3 = &DAT_00410494;
    iVar2 = local_8;
    FUN_00403cf8(&local_c,3);
    (**(code **)(*param_1 + 0x20))(param_1,iVar1,local_c,iVar2,puVar3,param_2);
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_00410485;
  pcStack_20 = (code *)0x41047d;
  FUN_004039b8(&local_c);
  return;
}


