
/* ==== FUN_004295bc @ 004295bc ==== 
 * signature: undefined FUN_004295bc(void)
 * body: 004295bc-00429610
 */

void FUN_004295bc(int param_1,int *param_2)

{
  HANDLE pvVar1;
  HANDLE pvVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x4295cf;
  FUN_00429324(param_1);
  puStack_18 = &UNK_00429611;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  pvVar1 = GetClipboardData(3);
  pvVar2 = GetClipboardData(9);
  (**(code **)(*param_2 + 0x58))(param_2,CONCAT22(extraout_var,3),pvVar1);
  *in_FS_OFFSET = pvVar2;
  puStack_18 = &UNK_00429618;
  uStack_1c = 0x429610;
  FUN_004292f8(param_1);
  return;
}


