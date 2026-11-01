
/* ==== FUN_00429554 @ 00429554 ==== 
 * signature: undefined __register FUN_00429554(int param_1, int * param_2)
 * body: 00429554-004295ab
 */

void FUN_00429554(int param_1,int *param_2)

{
  HANDLE pvVar1;
  HANDLE pvVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x429568;
  FUN_00429324(param_1);
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  pvVar1 = GetClipboardData(2);
  pvVar2 = GetClipboardData(9);
  (**(code **)(*param_2 + 0x58))(param_2,CONCAT22(extraout_var,2),pvVar1);
  *in_FS_OFFSET = pvVar2;
  pcStack_1c = FUN_004295b3;
  uStack_20 = 0x4295ab;
  FUN_004292f8(param_1);
  return;
}


