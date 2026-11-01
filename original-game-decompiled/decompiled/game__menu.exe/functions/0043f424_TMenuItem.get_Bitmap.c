
/* ==== TMenuItem.get_Bitmap @ 0043f424 ==== 
 * signature: undefined4 __register TMenuItem.get_Bitmap(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0043f424-0043f44a
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

undefined4 TMenuItem_get_Bitmap(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    piVar1 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',param_3);
    *(int **)(param_1 + 0x40) = piVar1;
  }
  (**(code **)(**(int **)(param_1 + 0x40) + 0x3c))(*(int **)(param_1 + 0x40),1);
  return *(undefined4 *)(param_1 + 0x40);
}


