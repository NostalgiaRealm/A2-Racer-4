
/* ==== FUN_0043dcb4 @ 0043dcb4 ==== 
 * signature: undefined FUN_0043dcb4(void)
 * body: 0043dcb4-0043dd17
 */

void FUN_0043dcb4(int *param_1,byte param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  
  *(byte *)((int)param_1 + 0x216) = param_2;
  if (param_1[0x99] != 0) {
    FUN_00425780(param_1[0x99],0xb02b,(uint)param_2,0);
  }
  if (param_2 != 0) {
    if ((param_1[0x82] == 0) && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
      piVar1 = (int *)FUN_0042accc(param_1,0,1,0,1);
      TForm_set_ActiveControl(param_1,piVar1,extraout_ECX);
    }
    FUN_0043dd68((int)param_1,'\x01');
    FUN_0043dc64(param_1);
  }
  return;
}


