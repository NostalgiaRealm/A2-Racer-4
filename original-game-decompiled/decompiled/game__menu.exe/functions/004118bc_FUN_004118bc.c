
/* ==== FUN_004118bc @ 004118bc ==== 
 * signature: undefined __register FUN_004118bc(int * param_1, undefined * param_2, int * param_3)
 * body: 004118bc-0041193a
 */

void FUN_004118bc(int *param_1,undefined *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int *piVar3;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  int local_10;
  int *local_c;
  undefined *local_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  local_10 = 0;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = param_3;
  local_8 = param_2;
  iVar1 = FUN_004119c8(param_1,param_2);
  if (iVar1 < 0) {
    FUN_00403c5c(local_c);
  }
  else {
    piVar3 = local_c;
    (**(code **)(*param_1 + 0xc))(param_1,iVar1,&local_10);
    iVar1 = local_10;
    iVar2 = FUN_00403edc((int)local_8);
    FUN_004040e4(iVar1,iVar2 + 2,0x7fffffff,piVar3);
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_00411942;
  pcStack_20 = (code *)0x41193a;
  FUN_00403c5c(&local_10);
  return;
}


