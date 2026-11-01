
/* ==== FUN_0046c13c @ 0046c13c ==== 
 * signature: undefined __register FUN_0046c13c(int * param_1, char param_2, int param_3, int param_4, DWORD param_5)
 * body: 0046c13c-0046c1e2
 */

void FUN_0046c13c(int *param_1,char param_2,int param_3,int param_4,DWORD param_5)

{
  int extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined4 uStack_40;
  code *pcStack_3c;
  code *pcStack_38;
  undefined4 in_stack_ffffffcc;
  undefined4 in_stack_ffffffd0;
  DWORD local_18;
  undefined1 local_14;
  byte *local_10;
  undefined4 *local_c;
  undefined1 local_5;
  
  local_10 = (byte *)0x0;
  local_c = (undefined4 *)0x0;
  local_5 = 0;
  if (param_2 != '\0') {
    pcStack_38 = (code *)0x46c159;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffcc,in_stack_ffffffd0);
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  pcStack_3c = thunk_FUN_004036bc;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  pcStack_38 = (code *)&stack0xfffffffc;
  FUN_00403cf4((int *)&local_c,param_3);
  if (local_c == (undefined4 *)0x0) {
    FUN_0040adec(param_5,(int *)&local_c);
    if (local_c == (undefined4 *)0x0) {
      uVar1 = 0;
      FUN_00405808((undefined4 *)PTR_PTR_004ab67c,(int *)&local_10);
      local_18 = param_5;
      local_14 = 0;
      FUN_00409268((int *)&local_c,local_10,&local_18,uVar1);
    }
  }
  FUN_0040b764(param_1,'\0',local_c,param_4);
  param_1[3] = param_5;
  *in_FS_OFFSET = uStack_40;
  pcStack_38 = FUN_0046c1ea;
  pcStack_3c = (code *)0x46c1e2;
  FUN_00403c80((int *)&local_10,2);
  return;
}


