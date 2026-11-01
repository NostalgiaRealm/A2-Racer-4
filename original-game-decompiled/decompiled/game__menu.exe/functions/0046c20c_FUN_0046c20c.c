
/* ==== FUN_0046c20c @ 0046c20c ==== 
 * signature: undefined __register FUN_0046c20c(int * param_1, char param_2, undefined4 * param_3, int param_4, undefined4 * param_5, undefined4 * param_6, DWORD param_7)
 * body: 0046c20c-0046c27d
 */

void FUN_0046c20c(int *param_1,char param_2,undefined4 *param_3,int param_4,undefined4 *param_5,
                 undefined4 *param_6,DWORD param_7)

{
  undefined4 *extraout_ECX;
  int *in_FS_OFFSET;
  code *pcStack_30;
  code *pcStack_2c;
  undefined1 *puStack_28;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  int local_8;
  
  local_8 = 0;
  if (param_2 != '\0') {
    puStack_28 = (undefined1 *)0x46c220;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
  }
  pcStack_2c = thunk_FUN_004036bc;
  pcStack_30 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&pcStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_0046c0ec(param_3,&local_8);
  FUN_0046c13c(param_1,'\0',local_8,param_4,param_7);
  FUN_00403cb0(param_1 + 4,param_6);
  FUN_00403cb0(param_1 + 5,param_5);
  *in_FS_OFFSET = param_4;
  pcStack_30 = FUN_0046c285;
  FUN_00403c5c(&local_8);
  return;
}


