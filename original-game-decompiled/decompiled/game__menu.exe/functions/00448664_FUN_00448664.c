
/* ==== FUN_00448664 @ 00448664 ==== 
 * signature: undefined FUN_00448664(void)
 * body: 00448664-004486c7
 */

void FUN_00448664(int *param_1,byte param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  *(byte *)((int)param_1 + 0x216) = param_2;
  if (param_1[0x99] != 0) {
    FUN_0042f720(param_1[0x99],0xb02b,(uint)param_2,0);
    param_3 = extraout_ECX;
  }
  if (param_2 != 0) {
    if ((param_1[0x82] == 0) && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
      piVar1 = (int *)FUN_00434df8(param_1,0,CONCAT31((int3)((uint)param_3 >> 8),1),'\0','\x01');
      TForm_set_ActiveControl(param_1,piVar1,extraout_ECX_00);
    }
    FUN_00448718((int)param_1,'\x01');
    FUN_00448614(param_1);
  }
  return;
}


