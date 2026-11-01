
/* ==== FUN_0046d544 @ 0046d544 ==== 
 * signature: undefined __register FUN_0046d544(int param_1, int * param_2)
 * body: 0046d544-0046d59d
 */

void FUN_0046d544(int param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  int *local_c;
  int *local_8;
  
  local_c = (int *)0x0;
  pcStack_14 = (code *)0x46d55d;
  local_8 = param_2;
  FUN_004058c0(param_2);
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_14 = (code *)&stack0xfffffffc;
  FUN_0046d454(param_1,(int *)&local_c);
  (**(code **)(*local_c + 0x10))(local_c,local_8);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0046d5a5;
  pcStack_18 = (code *)0x46d595;
  FUN_00405860((int *)&local_c);
  pcStack_18 = (code *)0x46d59d;
  FUN_00405860((int *)&local_8);
  return;
}


