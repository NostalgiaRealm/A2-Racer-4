
/* ==== TMenuItem.set_Bitmap @ 0043f4bc ==== 
 * signature: undefined TMenuItem.set_Bitmap(void)
 * body: 0043f4bc-0043f4ec
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMenuItem_set_Bitmap(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (param_1[0x10] == 0) {
    piVar1 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',param_3);
    param_1[0x10] = (int)piVar1;
  }
  (**(code **)(*(int *)param_1[0x10] + 8))((int *)param_1[0x10],param_2);
  (**(code **)(*param_1 + 0x38))(param_1,1);
  return;
}


