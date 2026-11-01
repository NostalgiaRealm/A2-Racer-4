
/* ==== FUN_0047ddf8 @ 0047ddf8 ==== 
 * signature: undefined __register FUN_0047ddf8(int param_1, uint * param_2, int param_3, undefined1 * param_4, int param_5)
 * body: 0047ddf8-0047de5f
 */

void FUN_0047ddf8(int param_1,uint *param_2,int param_3,undefined1 *param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  code *pcVar1;
  code *pcStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  uint *local_8;
  
  puStack_14 = (undefined1 *)0x47de0d;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_18 = thunk_FUN_004036bc;
  pcStack_1c = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_1c;
  if (param_4._2_2_ == 0) {
    pcVar1 = FUN_0047df44;
    puStack_14 = &stack0xfffffffc;
    FUN_00477ab0(*(int **)(param_1 + 8),local_8,param_3,0x47df44,param_1);
  }
  else {
    puStack_14 = &stack0xfffffffc;
    FUN_00477ab0(*(int **)(param_1 + 8),local_8,param_3,(int)param_4,param_5);
    pcVar1 = (code *)param_4;
  }
  *in_FS_OFFSET = pcVar1;
  pcStack_1c = FUN_0047de67;
  FUN_00403c5c((int *)&local_8);
  return;
}


