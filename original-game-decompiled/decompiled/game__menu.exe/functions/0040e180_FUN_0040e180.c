
/* ==== FUN_0040e180 @ 0040e180 ==== 
 * signature: undefined __register FUN_0040e180(int * param_1, int param_2, LPCSTR param_3)
 * body: 0040e180-0040e1c7
 */

void FUN_0040e180(int *param_1,int param_2,LPCSTR param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  OLECHAR *local_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  local_8 = (OLECHAR *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004043f8((BSTR)&local_8,param_3);
  FUN_0040e140(param_1,param_2,local_8);
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0040e1cf;
  pcStack_1c = (code *)0x40e1c7;
  FUN_004042b4(&local_8);
  return;
}


