
/* ==== FUN_0042970c @ 0042970c ==== 
 * signature: undefined FUN_0042970c(void)
 * body: 0042970c-00429780
 */

void FUN_0042970c(int param_1,int *param_2)

{
  int *in_FS_OFFSET;
  int iStack_24;
  undefined *puStack_20;
  undefined1 *puStack_1c;
  HANDLE pvStack_14;
  ushort uStack_e;
  HANDLE pvStack_c;
  int iStack_8;
  
  puStack_1c = (undefined1 *)0x429720;
  iStack_8 = param_1;
  FUN_00429324(param_1);
  puStack_20 = &UNK_00429781;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_004292dc(iStack_8);
  pvStack_14 = (HANDLE)0x0;
  (**(code **)(*param_2 + 0x5c))(param_2,&uStack_e,&pvStack_c);
  SetClipboardData((uint)uStack_e,pvStack_c);
  if (pvStack_14 != (HANDLE)0x0) {
    SetClipboardData(9,pvStack_14);
  }
  *in_FS_OFFSET = (int)&pvStack_14;
  puStack_20 = &UNK_00429788;
  iStack_24 = 0x429780;
  FUN_004292f8(iStack_8);
  return;
}


